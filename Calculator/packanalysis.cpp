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
        char type;
        QByteArray value;
        while(!waitingfifo.isEmpty() \
              || len <waitingfifo.size()){

            switch (len) {
                case 0:
                case 1:
                    if(waitingfifo[len] ==0xAA){
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
                    if(len == 3)
                    {
                        waitingfifo.remove(0,4);
                        len = 0;
                    }
                    break;
                default:
                    waitingfifo.remove(0,4);
                    len -=4;
                    value.replace(0,len,waitingfifo);
                    waitingfifo.remove(0,len);
                    len =0;
                    emit StatusUpdated(type, value);
                    value.clear();
                    break;
            }
        }//mutex_Ana.unlock();
    //}
}
