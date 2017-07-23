#include "packanalysis.h"

PackAnalysis::PackAnalysis(QObject *parent)
    : QObject(parent), len(0)
{
    connect(this,SIGNAL(DataImported()),this,SLOT(unPack()));
}

void PackAnalysis::ImportData(QByteArray newData)
{
    waitingfifo.append(newData);
    emit DataImported();
}

void PackAnalysis::unPack()
{
    if(mutex_Ana.tryLock()){
        char type =0;
        QByteArray value;
        //int fifosize;
        while(!waitingfifo.isEmpty() \
              && len <waitingfifo.size()){
            //fifosize = waitingfifo.size();
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
                    break;
                default:
                    if(len <waitingfifo.size()){
                        waitingfifo.remove(0,4);
                        len -=4;
                        if(len !=0){
                            value.clear();
                            value.append(waitingfifo);
                            value.resize(len);
//                            if(type ==(char)0xF2 ||\
//                               type ==(char)0x05 ||\
//                               type ==(char)0x10 ||\
//                               type ==(char)0x07)
                            emit StatusUpdated(type, value);
                            len =0;
                            waitingfifo.remove(0,len);
                        }
                    }
                    break;
            }
        }mutex_Ana.unlock();
    }
}
