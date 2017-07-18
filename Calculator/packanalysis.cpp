#include "packanalysis.h"

PackAnalysis::PackAnalysis(QObject *parent)
    : QObject(parent), len(0)
{
    connect(this,SIGNAL(DataImported()),this,SLOT(unPack()));
}

void PackAnalysis::ImportData(QByteArray& newData)
{
    waitingfifo.append(newData);
    emit DataImported();
}

void PackAnalysis::unPack()
{
    //if(mutex_Ana.tryLock(10)){
        char type =0;
        QByteArray value;
        while(!waitingfifo.isEmpty() \
              || len <waitingfifo.size()){

            switch (len) {
                case 0:
                case 1:
                    if(waitingfifo[len] ==(char)0xAA){
                        len++;
                    }else{
                        waitingfifo.remove(0,len+1);
                    }
                    break;
                case 2:
                    type =waitingfifo[len];
                    len++;
                    break;
                case 3:
                    len +=waitingfifo[len];
                    len++;
                    /*
                    if(len == 3)
                    {
                        waitingfifo.remove(0,4);
                        len = 0;
                    }
                    */
                    break;
                default:
                    waitingfifo.remove(0,4);
                    len -=4;
                    value.clear();
                    value.replace(0,len,waitingfifo);
                    waitingfifo.remove(0,len);
                    if(type ==(char)0xF2)
                        emit StatusUpdated(type, value);
                    len =0;
                    break;
            }
        }//mutex_Ana.unlock();
    //}
}
