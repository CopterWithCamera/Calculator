#include "serialport_ctl.h"

SerialPort_Ctl::SerialPort_Ctl(QObject *parent) : QObject(parent)
{
    port =nullptr;

}
/*
SerialPort_Ctl::~SerialPort_Ctl()
{
    SerialPort_Close();
}
*/
void SerialPort_Ctl::
Readport()
{
    readBuffer.append(port->readAll());
}
void SerialPort_Ctl::
Writeport()
{
    port->write(sendBuffer);
    sendBuffer.clear();
}

void SerialPort_Ctl::SerialPort_Open(QString& portname, int Baud)
{
    //port是Qt串口类对象指针

    //检查是否已经打开
    if(port != NULL)
    {
        return;
    }

    //创建串口实例
    port = new QSerialPort;

    //设置串口名
    port->setPortName(portname);

    //打开串口
    if(!port->open(QIODevice::ReadWrite))
    {
        delete port;
        port = NULL;
        return;
    }

    //设置波特率
    port->setBaudRate(Baud);

    //设置数据位数
    port->setDataBits(QSerialPort::Data8);

    //设置奇偶校验
    port->setParity(QSerialPort::NoParity);

    //设置停止位
    port->setStopBits(QSerialPort::OneStop);

    //设置流控制
    port->setFlowControl(QSerialPort::NoFlowControl);

    //连接槽函数（由于串口对象是临时创建的，所以槽函数要临时连接）
    //connect(port,SIGNAL(readyRead()),this,SLOT(Readport()));
    connect(port,SIGNAL(readyRead()),this,SLOT(CallAnalysis()));

    emit SerialPort_Opened();
}

void SerialPort_Ctl::
SerialPort_Close()
{
    if(!port->isOpen())
        return;

    disconnect(port,SIGNAL(readyRead()),this,SLOT(CallAnalysis()));
    //关闭串口
    port->clear();
    port->close();
    port->deleteLater();
    port = NULL;

    emit SerialPort_Closed();
}

void SerialPort_Ctl::
SerialPort_bytesWrite(QByteArray sendData)
{
    if(port != nullptr){
        sendBuffer.append(sendData);
        Writeport();
        emit SerialPort_Written();
    }
}

void SerialPort_Ctl::CallAnalysis()
{
    //if(mutex_Ana.tryLock()){
        Readport();
        emit TranstoAna(readBuffer);
        readBuffer.clear();
        //mutex_Ana.unlock();
    //}
}
/*
void SerialPort_Ctl::
SerialPort_bytesRead(QByteArray& readData) //After read clear the buffer
{
    readBuffer = port->readAll();
    if(!readBuffer.isEmpty())
    {
        readData = readBuffer;
        emit SerialPort_Read();
    }
    readBuffer.clear();
}
*/

/*
void SerialPort_Ctl::
SerialPort_GetList(QString& portList)
{

    emit SerialPort_ListGot;
}
*/
