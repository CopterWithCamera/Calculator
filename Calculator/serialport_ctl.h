#ifndef SERIALPORT_CTL_H
#define SERIALPORT_CTL_H

#include <QObject>
#include <QString>

#include <QByteArray>
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>


class SerialPort_Ctl : public QObject
{
    Q_OBJECT
private:
    QSerialPort *port;
    QByteArray readBuffer, sendBuffer;

    void Readport();
    void Writeport();
public:
    explicit SerialPort_Ctl(QObject *parent = nullptr);
    QString BytesToString(QByteArray& data);
    QByteArray StringToBytes(QString& data);

signals:
    void SerialPort_Opened();
    void SerialPort_Closed();
    void SerialPort_Written();
    void SerialPort_Read();
    //void SerialPort_ListGot();

public slots:
    void SerialPort_Open(QString& portname, int Baud);
    void SerialPort_Close();
    void SerialPort_bytesWrite(QByteArray sendData);
    void SerialPort_bytesRead(QByteArray& readData); //After read clear the buffer
    //void SerialPort_GetList(QString& portList);

private slots:

};

#endif // SERIALPORT_CTL_H
