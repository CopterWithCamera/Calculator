#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent), Height(0),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    MyCom.moveToThread(&MyComThread);
    MyComThread.start();

    connect(this, &MainWindow::Open_SerialPort,&MyCom,&SerialPort_Ctl::SerialPort_Open);
    connect(this,&MainWindow::Close_SerialPort,&MyCom,&SerialPort_Ctl::SerialPort_Close);
    connect(this,&MainWindow::SendCmd,&MyCom,&SerialPort_Ctl::SerialPort_bytesWrite);

    ui->plainTextEdit->setPlainText("Welcome, GroundStation Ready!\n");
}

MainWindow::~MainWindow()
{
    delete ui;

    MyComThread.quit();
    MyComThread.wait();
}


//字符串转16进制（处理字符串部分）
QByteArray MainWindow::StringToHex(QString str) //字符串转换为十六进制数据0-F
{
    QByteArray senddata;
    int hexdata,lowhexdata;
    int hexdatalen = 0;
    int len = str.length();
    senddata.resize(len/2);
    char lstr,hstr;

    for(int i=0; i<len; )
    {
        hstr=str[i].toLatin1();

        //忽略空格
        if(hstr == ' ')
        {
            i++;
            continue;
        }

        //长度计数
        i++;
        if(i >= len)
            break;

        lstr = str[i].toLatin1();
        hexdata = ConvertHexChar(hstr);
        lowhexdata = ConvertHexChar(lstr);

        if((hexdata == 16) || (lowhexdata == 16))
            break;
        else
            hexdata = hexdata*16+lowhexdata;

        i++;
        senddata[hexdatalen] = (char)hexdata;
        hexdatalen++;
    }
    senddata.resize(hexdatalen);

    return senddata;
}

//字符串转16进制（ASCII码转换部分）
char MainWindow::ConvertHexChar(char ch)
{
    if((ch >= '0') && (ch <= '9'))
        return ch-0x30;
    else if((ch >= 'A') && (ch <= 'F'))
        return ch-'A'+10;
    else if((ch >= 'a') && (ch <= 'f'))
        return ch-'a'+10;
    else return ch-ch;//不在0-f范围内的会发送成0
}


void MainWindow::on_pushButton_UpdateSerialPortList_clicked()
{
    QList<QSerialPortInfo> portInfoList =QSerialPortInfo::availablePorts();
    QStringList portList;

    ui->comboBox_SerialPortList->clear();
    if(portInfoList.isEmpty()){
        ui->comboBox_SerialPortList->addItem("None");
    }else{
        foreach (QSerialPortInfo info, portInfoList) {
            portList<< info.portName();
        }
        ui->comboBox_SerialPortList->addItems(portList);
    }
}

void MainWindow::on_checkBox_SerialPortOpen_clicked()
{
    if(ui->checkBox_SerialPortOpen->isChecked()){
        QString portName =ui->comboBox_SerialPortList->currentText();
        int baud =ui->comboBox_SerialPortBaud->currentText().toInt();
        emit Open_SerialPort(portName,baud);

        ui->plainTextEdit->insertPlainText("SerialPort Opened!\n");
    }else{
        emit Close_SerialPort();

        ui->plainTextEdit->insertPlainText("SerialPort Closed!\n");
    }
}

void MainWindow::on_pushButton_Lock_clicked()
{
    char LockCmdBuffer[4];
    LockCmdBuffer[0] =0xAA;
    LockCmdBuffer[1] =0xAA;
    LockCmdBuffer[2] =1;
    LockCmdBuffer[3] =0x58;
    QByteArray LockCmd =LockCmdBuffer;

    emit SendCmd(LockCmd);

    ui->plainTextEdit->insertPlainText("SerialPort cmd send\n");
}

void MainWindow::on_pushButton_UnLock_clicked()
{
    char UnLockCmdBuffer[4];
    UnLockCmdBuffer[0] =0xAA;
    UnLockCmdBuffer[1] =0xAA;
    UnLockCmdBuffer[2] =1;
    UnLockCmdBuffer[3] =0x59;
    QByteArray UnLockCmd =UnLockCmdBuffer;

    emit SendCmd(UnLockCmd);

    ui->plainTextEdit->insertPlainText("SerialPort cmd send\n");
}

void MainWindow::on_pushButton_incHeight_clicked()
{
    char IncHeightCmdBuffer[5];
    IncHeightCmdBuffer[0] =0xAA;
    IncHeightCmdBuffer[1] =0xAA;
    IncHeightCmdBuffer[2] =2;
    IncHeightCmdBuffer[3] =0x50;
    Height += 1;
    IncHeightCmdBuffer[4] =Height;
    QByteArray IncHeightCmd =IncHeightCmdBuffer;
    ui->label_HeightValue->setText(QString::number(Height));

    emit SendCmd(IncHeightCmd);

    ui->plainTextEdit->insertPlainText("SerialPort cmd send\n");
}

void MainWindow::on_pushButton_decHeight_clicked()
{
    char DecHeightCmdBuffer[5];
    DecHeightCmdBuffer[0] =0xAA;
    DecHeightCmdBuffer[1] =0xAA;
    DecHeightCmdBuffer[2] =2;
    DecHeightCmdBuffer[3] =0x50;
    Height -= 1;
    DecHeightCmdBuffer[4] =Height;
    QByteArray DecHeightCmd =DecHeightCmdBuffer;
    ui->label_HeightValue->setText(QString::number(Height));

    emit SendCmd(DecHeightCmd);

    ui->plainTextEdit->insertPlainText("SerialPort cmd send\n");
}



void MainWindow::on_pushButton_SerialPortSend_clicked()
{
    QString CmdBuffer;
    CmdBuffer =ui->lineEdit_SerialPortOutput->text();

    QByteArray Cmd =StringToHex(CmdBuffer);
    emit SendCmd(Cmd);
}


