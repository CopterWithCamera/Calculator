#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent), Height(0),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    qRegisterMetaType<QString>("QString&");
    qRegisterMetaType<QString>("QByteArray&");
    qRegisterMetaType<QString>("QByteArray");
    MyCom.moveToThread(&MyComThread);
    MyComThread.start();

    connect(this, &MainWindow::Open_SerialPort,&MyCom,&SerialPort_Ctl::SerialPort_Open);
    connect(this,&MainWindow::Close_SerialPort,&MyCom,&SerialPort_Ctl::SerialPort_Close);
    connect(this,&MainWindow::SendCmd,&MyCom,&SerialPort_Ctl::SerialPort_bytesWrite);
    connect(&MyCom,SIGNAL(SerialPort_Closed()),this,SLOT(SerialPort_Closed_SLOT()));

    MyAna.moveToThread((&MyAnaThread));
    MyAnaThread.start();

    connect(&MyCom,SIGNAL(TranstoAna(QByteArray&)),&MyAna,SLOT(ImportData(QByteArray&)));
    connect(&MyAna,SIGNAL(StatusUpdated(char,QByteArray)),this,SLOT(StatusUpdate(char,QByteArray)));

    ui->plainTextEdit->setPlainText("Welcome, GroundStation Ready!\n");
}

MainWindow::~MainWindow()
{
    delete ui;

    MyComThread.quit();
    MyComThread.wait();

    MyAnaThread.quit();
    MyAnaThread.wait();
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

char MainWindow::SumVerify(uchar* str, int n)
{
    int i;
    uchar sum;

    for(i =0, sum =0; i <n; i++){
        sum +=*(str+i);
    }

    return (char)sum;
}


void MainWindow::on_pushButton_UpdateSerialPortList_clicked()
{
    QList<QSerialPortInfo> availableList =QSerialPortInfo::availablePorts();
    QStringList portList;

    ui->comboBox_SerialPortList->clear();
    if(availableList.isEmpty()){
        ui->comboBox_SerialPortList->addItem("None");
    }else{
        foreach (QSerialPortInfo info, availableList) {
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

        //ui->plainTextEdit->insertPlainText("SerialPort Closed!\n");
    }
}

void MainWindow::on_pushButton_Lock_clicked()
{
    char LockCmdBuffer[6];
    LockCmdBuffer[0] =0xAA;
    LockCmdBuffer[1] =0xAF;
    LockCmdBuffer[2] =0x40;
    LockCmdBuffer[3] =1;
    LockCmdBuffer[4] =0x01;
    LockCmdBuffer[5] =SumVerify((uchar*)LockCmdBuffer,5);
    QByteArray LockCmd(LockCmdBuffer,6);

    emit SendCmd(LockCmd);

    ui->plainTextEdit->insertPlainText("SerialPort cmd send\n");
}

void MainWindow::on_pushButton_UnLock_clicked()
{
    char UnLockCmdBuffer[6];
    UnLockCmdBuffer[0] =0xAA;
    UnLockCmdBuffer[1] =0xAF;
    UnLockCmdBuffer[2] =0x40;
    UnLockCmdBuffer[3] =1;
    UnLockCmdBuffer[4] =0x02;
    UnLockCmdBuffer[5] =SumVerify((uchar*)UnLockCmdBuffer,5);
    QByteArray UnLockCmd(UnLockCmdBuffer,6);

    emit SendCmd(UnLockCmd);

    ui->plainTextEdit->insertPlainText("SerialPort cmd send\n");
}

void MainWindow::on_pushButton_SendHeight_clicked()
{
    Height =ui->lineEdit_HeightValue->text().toInt();

    char HeightCmdBuffer[6];
    HeightCmdBuffer[0] =0xAA;
    HeightCmdBuffer[1] =0xAF;
    HeightCmdBuffer[2] =0x42;
    HeightCmdBuffer[3] =1;
    HeightCmdBuffer[4] =Height;
    HeightCmdBuffer[5] =SumVerify((uchar*)HeightCmdBuffer,5);
    QByteArray HeightCmd(HeightCmdBuffer,6);
    emit SendCmd(HeightCmd);

    ui->plainTextEdit->insertPlainText("SerialPort cmd send\n");
}

void MainWindow::on_pushButton_incHeight_clicked()
{
    char IncHeightCmdBuffer[6];
    IncHeightCmdBuffer[0] =0xAA;
    IncHeightCmdBuffer[1] =0xAF;
    IncHeightCmdBuffer[2] =0x42;
    IncHeightCmdBuffer[3] =1;
    Height += 1;
    IncHeightCmdBuffer[4] =Height;
    IncHeightCmdBuffer[5] =SumVerify((uchar*)IncHeightCmdBuffer,5);
    QByteArray IncHeightCmd(IncHeightCmdBuffer,6);
    ui->lineEdit_HeightValue->setText(QString::number(Height));

    emit SendCmd(IncHeightCmd);

    ui->plainTextEdit->insertPlainText("SerialPort cmd send\n");
}

void MainWindow::on_pushButton_decHeight_clicked()
{
    char DecHeightCmdBuffer[6];
    DecHeightCmdBuffer[0] =0xAA;
    DecHeightCmdBuffer[1] =0xAF;
    DecHeightCmdBuffer[2] =0x42;
    DecHeightCmdBuffer[3] =1;
    Height -= 1;
    DecHeightCmdBuffer[4] =Height;
    DecHeightCmdBuffer[5] =SumVerify((uchar*)DecHeightCmdBuffer,5);
    QByteArray DecHeightCmd(DecHeightCmdBuffer,6);
    ui->lineEdit_HeightValue->setText(QString::number(Height));

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

void MainWindow::SerialPort_Closed_SLOT()
{
    ui->plainTextEdit->insertPlainText("SerialPort Closed\n");
}

void MainWindow::StatusUpdate(char type, QByteArray value)
{
    int a =(unsigned char)type;
    uchar tmp;
    QString str;
    switch(a){
        case 0xF2:
            tmp =value[0];str.setNum(tmp);ui->label_ModeValue->setText(str);
            tmp =value[1];str.setNum(tmp);ui->label_InterModeValue->setText(str);
            tmp =value[2];str.setNum(tmp);ui->label_FlyReadyValue->setText(str);
            tmp =value[3];str.setNum(tmp);ui->label_All_OutValue->setText(str);
            tmp =value[4];str.setNum(tmp);ui->label_UltraStatusValue->setText(str);
            break;
        default:
            break;
    }
    ui->plainTextEdit->insertPlainText("SerialPort cmd receive\n");
}

void MainWindow::on_pushButton_SaveCoef_clicked()
{
    char CmdBuffer[6];
    CmdBuffer[0] =0xAA;
    CmdBuffer[1] =0xAF;
    CmdBuffer[2] =0x41;
    CmdBuffer[3] =1;
    CmdBuffer[4] =0x05;
    CmdBuffer[5] =SumVerify((uchar*)CmdBuffer,5);
    QByteArray Cmd(CmdBuffer,6);
    emit SendCmd(Cmd);

    ui->plainTextEdit->insertPlainText("SerialPort cmd send\n");
}

void MainWindow::on_pushButton_Front_clicked()
{
    char CmdBuffer[6];
    CmdBuffer[0] =0xAA;
    CmdBuffer[1] =0xAF;
    CmdBuffer[2] =0x41;
    CmdBuffer[3] =1;
    CmdBuffer[4] =0x01;
    CmdBuffer[5] =SumVerify((uchar*)CmdBuffer,5);
    QByteArray Cmd(CmdBuffer,6);
    emit SendCmd(Cmd);

    ui->plainTextEdit->insertPlainText("SerialPort cmd send\n");
}

void MainWindow::on_pushButton_Back_clicked()
{
    char CmdBuffer[6];
    CmdBuffer[0] =0xAA;
    CmdBuffer[1] =0xAF;
    CmdBuffer[2] =0x41;
    CmdBuffer[3] =1;
    CmdBuffer[4] =0x02;
    CmdBuffer[5] =SumVerify((uchar*)CmdBuffer,5);
    QByteArray Cmd(CmdBuffer,6);
    emit SendCmd(Cmd);

    ui->plainTextEdit->insertPlainText("SerialPort cmd send\n");
}

void MainWindow::on_pushButton_Left_clicked()
{
    char CmdBuffer[6];
    CmdBuffer[0] =0xAA;
    CmdBuffer[1] =0xAF;
    CmdBuffer[2] =0x41;
    CmdBuffer[3] =1;
    CmdBuffer[4] =0x03;
    CmdBuffer[5] =SumVerify((uchar*)CmdBuffer,5);
    QByteArray Cmd(CmdBuffer,6);
    emit SendCmd(Cmd);

    ui->plainTextEdit->insertPlainText("SerialPort cmd send\n");
}

void MainWindow::on_pushButton_Right_clicked()
{
    char CmdBuffer[6];
    CmdBuffer[0] =0xAA;
    CmdBuffer[1] =0xAF;
    CmdBuffer[2] =0x41;
    CmdBuffer[3] =1;
    CmdBuffer[4] =0x04;
    CmdBuffer[5] =SumVerify((uchar*)CmdBuffer,5);
    QByteArray Cmd(CmdBuffer,6);
    emit SendCmd(Cmd);

    ui->plainTextEdit->insertPlainText("SerialPort cmd send\n");
}
