#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtGlobal>
#include <QList>
#include <QStringList>
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#include <QThread>

#include "serialport_ctl.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    QByteArray StringToHex(QString str);
    char ConvertHexChar(char ch);
private:
    Ui::MainWindow *ui;

    QThread MyComThread;
    SerialPort_Ctl MyCom;

    uchar Height;

signals:
    void Open_SerialPort(QString& portname, int Baud);
    void Close_SerialPort();
    void SendCmd(QByteArray cmd);

private slots:
    void on_pushButton_UpdateSerialPortList_clicked();
    void on_checkBox_SerialPortOpen_clicked();
    void on_pushButton_Lock_clicked();
    void on_pushButton_UnLock_clicked();
    void on_pushButton_incHeight_clicked();
    void on_pushButton_decHeight_clicked();

    void on_pushButton_SerialPortSend_clicked();

    void SerialPort_Closed_SLOT();
};

#endif // MAINWINDOW_H
