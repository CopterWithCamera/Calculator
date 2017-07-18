#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtGlobal>
#include <QList>
#include <QStringList>
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#include <QThread>

#include "main.h"
#include "serialport_ctl.h"
#include "packanalysis.h"

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
    char SumVerify(uchar* str, int n);
private:
    unsigned char Height;
    Ui::MainWindow *ui;

    QThread MyComThread;
    SerialPort_Ctl MyCom;

    QThread MyAnaThread;
    PackAnalysis MyAna;

signals:
    void Open_SerialPort(QString& portname, int Baud);
    void Close_SerialPort();
    void SendCmd(QByteArray cmd);

private slots:
    //SerialPort Ctl
    void on_pushButton_UpdateSerialPortList_clicked();
    void on_checkBox_SerialPortOpen_clicked();
    void SerialPort_Closed_SLOT();

    //Security Lock Ctl
    void on_pushButton_Lock_clicked();
    void on_pushButton_UnLock_clicked();

    //Height Cmd
    void on_pushButton_SendHeight_clicked();
    void on_pushButton_incHeight_clicked();
    void on_pushButton_decHeight_clicked();

    //Log Part
    void on_pushButton_SerialPortSend_clicked();

    //StatusUpdate
    void StatusUpdate(char type, QByteArray value);


    void on_pushButton_SaveCoef_clicked();
    void on_pushButton_Front_clicked();
    void on_pushButton_Back_clicked();
    void on_pushButton_Left_clicked();
    void on_pushButton_Right_clicked();
};

#endif // MAINWINDOW_H
