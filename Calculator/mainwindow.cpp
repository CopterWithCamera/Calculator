#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent), Height(0),PID_func(0x10),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    qRegisterMetaType<QString>("QString&");
    //qRegisterMetaType<QString>("QByteArray&");
    qRegisterMetaType<QString>("QByteArray");

    fontRed.setColor(QPalette::WindowText,Qt::red);
    fontGreen.setColor(QPalette::WindowText,Qt::green);
    fontBlue.setColor(QPalette::WindowText,Qt::blue);
    fontYellow.setColor(QPalette::WindowText,Qt::black);

    MyCom.moveToThread(&MyComThread);
    MyComThread.start();

    connect(this,&MainWindow::Open_SerialPort,&MyCom,&SerialPort_Ctl::SerialPort_Open);
    connect(this,&MainWindow::Close_SerialPort,&MyCom,&SerialPort_Ctl::SerialPort_Close);
    connect(this,&MainWindow::SendCmd,&MyCom,&SerialPort_Ctl::SerialPort_bytesWrite);
    connect(&MyCom,SIGNAL(SerialPort_Opened()),this,SLOT(SerialPort_Opened_SLOT()));
    connect(&MyCom,SIGNAL(SerialPort_Written()),this,SLOT(SerialPort_Written_SLOT()));
    connect(&MyCom,SIGNAL(SerialPort_Closed()),this,SLOT(SerialPort_Closed_SLOT()));

    MyCom2.moveToThread(&MyComThread2);
    MyComThread2.start();
    connect(this,&MainWindow::Open_SerialPort2,&MyCom2,&SerialPort_Ctl::SerialPort_Open);
    connect(this,&MainWindow::Close_SerialPort2,&MyCom2,&SerialPort_Ctl::SerialPort_Close);
    connect(this,&MainWindow::TransCmd,&MyCom2,&SerialPort_Ctl::SerialPort_bytesWrite);
    connect(&MyCom2,SIGNAL(SerialPort_Opened()),this,SLOT(SerialPort_Opened_SLOT()));
    //connect(&MyCom2,SIGNAL(SerialPort_Written()),this,SLOT(SerialPort_Written_SLOT()));
    connect(&MyCom2,SIGNAL(SerialPort_Closed()),this,SLOT(SerialPort_Closed_SLOT()));

    MyAna.moveToThread((&MyAnaThread));
    MyAnaThread.start();

    on_pushButton_UpdateSerialPortList_clicked();
    on_pushButton_UpdateSerialPortList_2_clicked();

    connect(&MyCom,SIGNAL(TranstoAna(QByteArray)),&MyAna,SLOT(ImportData(QByteArray)));
    connect(&MyAna,SIGNAL(StatusUpdated(char,QByteArray)),this,SLOT(StatusUpdate(char,QByteArray)));

    ui->plainTextEdit->setPlainText("Welcome, GroundStation Ready!\n");
}

MainWindow::~MainWindow()
{
    delete ui;

    MyComThread.quit();
    MyComThread.wait();

    MyComThread2.quit();
    MyComThread2.wait();

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
    }else{
        emit Close_SerialPort();
    }
}

void MainWindow::on_pushButton_UpdateSerialPortList_2_clicked()
{
    QList<QSerialPortInfo> availableList =QSerialPortInfo::availablePorts();
    QStringList portList;

    ui->comboBox_SerialPortList_2->clear();
    if(availableList.isEmpty()){
        ui->comboBox_SerialPortList_2->addItem("None");
    }else{
        foreach (QSerialPortInfo info, availableList) {
            portList<< info.portName();
        }
        ui->comboBox_SerialPortList_2->addItems(portList);
    }
}

void MainWindow::on_checkBox_SerialPortOpen_2_clicked()
{
    QString portName =ui->comboBox_SerialPortList_2->currentText();
    QString theOtherName =ui->comboBox_SerialPortList->currentText();
    if(ui->checkBox_SerialPortOpen_2->isChecked()){
        if(portName != theOtherName){
            int baud =ui->comboBox_SerialPortBaud_2->currentText().toInt();
            connect(&MyCom,SIGNAL(TranstoAna(QByteArray)),&MyCom2,SLOT(SerialPort_bytesWrite(QByteArray)));
            emit Open_SerialPort2(portName,baud);
        }
    }else{
        if(portName != theOtherName){
            emit Close_SerialPort2();
            disconnect(&MyCom,SIGNAL(TranstoAna(QByteArray)),&MyCom2,SLOT(SerialPort_bytesWrite(QByteArray)));
        }
    }
}

void MainWindow::SerialPort_Opened_SLOT()
{
    ui->plainTextEdit->insertPlainText("SerialPort Opened\n");
}

void MainWindow::SerialPort_Closed_SLOT()
{
    ui->plainTextEdit->insertPlainText("SerialPort Closed\n");
}

void MainWindow::SerialPort_Written_SLOT()
{
    ui->plainTextEdit->insertPlainText("SerialPort cmd send\n");
}

void MainWindow::StatusUpdate(char type, QByteArray value)
{
    int a =(unsigned char)type, i;//len
    float fps;
    ushort PID_ReadBuffer[9];
    QString str;
    QByteArray Cmd;
    //char *CmdBuffer;
    switch(a){

        case 0x05:
            ushort voltage;
            float fvoltage;
            voltage =value[0];
            voltage *=256;
            voltage +=(uchar)value[1];
            fvoltage =voltage/100.0;
            str.setNum(fvoltage);ui->label_VoltageValue->setText(str);
            if(voltage >=900)
                ui->label_VoltageValue->setPalette(fontGreen);
            else
                ui->label_VoltageValue->setPalette(fontRed);
            break;
        case 0x07:
            ushort height;
            float fheight;
            height =(uchar)value[4];
            height *=256;
            height +=(uchar)value[5];
            fheight =height/100.0;
            str.setNum(fheight);ui->label_HeightValue->setText(str);
            if(height <=15000)
                ui->label_HeightValue->setPalette(fontGreen);
            else
                ui->label_HeightValue->setPalette(fontRed);
            break;
        case 0x10:
            for(i =0;i <9; i++){
                PID_ReadBuffer[i] =(uchar)value[i*2 +0];
                PID_ReadBuffer[i] *=256;
                PID_ReadBuffer[i] +=(uchar)value[i*2 +1];
            }
            if(PID_func ==0x10){
                str.setNum(PID_ReadBuffer[0]);ui->lineEdit_PID1_P->setText(str);
                str.setNum(PID_ReadBuffer[1]);ui->lineEdit_PID1_I->setText(str);
                str.setNum(PID_ReadBuffer[2]);ui->lineEdit_PID1_D->setText(str);
                str.setNum(PID_ReadBuffer[3]);ui->lineEdit_PID2_P->setText(str);
                str.setNum(PID_ReadBuffer[4]);ui->lineEdit_PID2_I->setText(str);
                str.setNum(PID_ReadBuffer[5]);ui->lineEdit_PID2_D->setText(str);
                str.setNum(PID_ReadBuffer[6]);ui->lineEdit_PID3_P->setText(str);
                str.setNum(PID_ReadBuffer[7]);ui->lineEdit_PID3_I->setText(str);
                str.setNum(PID_ReadBuffer[8]);ui->lineEdit_PID3_D->setText(str);
            }
            break;
        case 0x11:
            for(i =0;i <9; i++){
                PID_ReadBuffer[i] =(uchar)value[i*2 +0];
                PID_ReadBuffer[i] *=256;
                PID_ReadBuffer[i] +=(uchar)value[i*2 +1];
            }
            if(PID_func ==0x11){
                str.setNum(PID_ReadBuffer[0]);ui->lineEdit_PID1_P->setText(str);
                str.setNum(PID_ReadBuffer[1]);ui->lineEdit_PID1_I->setText(str);
                str.setNum(PID_ReadBuffer[2]);ui->lineEdit_PID1_D->setText(str);
                str.setNum(PID_ReadBuffer[3]);ui->lineEdit_PID2_P->setText(str);
                str.setNum(PID_ReadBuffer[4]);ui->lineEdit_PID2_I->setText(str);
                str.setNum(PID_ReadBuffer[5]);ui->lineEdit_PID2_D->setText(str);
                str.setNum(PID_ReadBuffer[6]);ui->lineEdit_PID3_P->setText(str);
                str.setNum(PID_ReadBuffer[7]);ui->lineEdit_PID3_I->setText(str);
                str.setNum(PID_ReadBuffer[8]);ui->lineEdit_PID3_D->setText(str);
            }
            break;
        case 0x12:
            for(i =0;i <9; i++){
                PID_ReadBuffer[i] =(uchar)value[i*2 +0];
                PID_ReadBuffer[i] *=256;
                PID_ReadBuffer[i] +=(uchar)value[i*2 +1];
            }
            if(PID_func ==0x12){
                str.setNum(PID_ReadBuffer[0]);ui->lineEdit_PID1_P->setText(str);
                str.setNum(PID_ReadBuffer[1]);ui->lineEdit_PID1_I->setText(str);
                str.setNum(PID_ReadBuffer[2]);ui->lineEdit_PID1_D->setText(str);
                str.setNum(PID_ReadBuffer[3]);ui->lineEdit_PID2_P->setText(str);
                str.setNum(PID_ReadBuffer[4]);ui->lineEdit_PID2_I->setText(str);
                str.setNum(PID_ReadBuffer[5]);ui->lineEdit_PID2_D->setText(str);
                str.setNum(PID_ReadBuffer[6]);ui->lineEdit_PID3_P->setText(str);
                str.setNum(PID_ReadBuffer[7]);ui->lineEdit_PID3_I->setText(str);
                str.setNum(PID_ReadBuffer[8]);ui->lineEdit_PID3_D->setText(str);
            }
            break;
        case 0x13:
            for(i =0;i <9; i++){
                PID_ReadBuffer[i] =(uchar)value[i*2 +0];
                PID_ReadBuffer[i] *=256;
                PID_ReadBuffer[i] +=(uchar)value[i*2 +1];
            }
            if(PID_func ==0x13){
                str.setNum(PID_ReadBuffer[0]);ui->lineEdit_PID1_P->setText(str);
                str.setNum(PID_ReadBuffer[1]);ui->lineEdit_PID1_I->setText(str);
                str.setNum(PID_ReadBuffer[2]);ui->lineEdit_PID1_D->setText(str);
                str.setNum(PID_ReadBuffer[3]);ui->lineEdit_PID2_P->setText(str);
                str.setNum(PID_ReadBuffer[4]);ui->lineEdit_PID2_I->setText(str);
                str.setNum(PID_ReadBuffer[5]);ui->lineEdit_PID2_D->setText(str);
                str.setNum(PID_ReadBuffer[6]);ui->lineEdit_PID3_P->setText(str);
                str.setNum(PID_ReadBuffer[7]);ui->lineEdit_PID3_I->setText(str);
                str.setNum(PID_ReadBuffer[8]);ui->lineEdit_PID3_D->setText(str);
            }
            break;
        case 0x14:
            for(i =0;i <9; i++){
                PID_ReadBuffer[i] =(uchar)value[i*2 +0];
                PID_ReadBuffer[i] *=256;
                PID_ReadBuffer[i] +=(uchar)value[i*2 +1];
            }
            if(PID_func ==0x14){
                str.setNum(PID_ReadBuffer[0]);ui->lineEdit_PID1_P->setText(str);
                str.setNum(PID_ReadBuffer[1]);ui->lineEdit_PID1_I->setText(str);
                str.setNum(PID_ReadBuffer[2]);ui->lineEdit_PID1_D->setText(str);
                str.setNum(PID_ReadBuffer[3]);ui->lineEdit_PID2_P->setText(str);
                str.setNum(PID_ReadBuffer[4]);ui->lineEdit_PID2_I->setText(str);
                str.setNum(PID_ReadBuffer[5]);ui->lineEdit_PID2_D->setText(str);
                str.setNum(PID_ReadBuffer[6]);ui->lineEdit_PID3_P->setText(str);
                str.setNum(PID_ReadBuffer[7]);ui->lineEdit_PID3_I->setText(str);
                str.setNum(PID_ReadBuffer[8]);ui->lineEdit_PID3_D->setText(str);
            }
            break;
        case 0x15:
            for(i =0;i <9; i++){
                PID_ReadBuffer[i] =(uchar)value[i*2 +0];
                PID_ReadBuffer[i] *=256;
                PID_ReadBuffer[i] +=(uchar)value[i*2 +1];
            }
            if(PID_func ==0x15){
                str.setNum(PID_ReadBuffer[0]);ui->lineEdit_PID1_P->setText(str);
                str.setNum(PID_ReadBuffer[1]);ui->lineEdit_PID1_I->setText(str);
                str.setNum(PID_ReadBuffer[2]);ui->lineEdit_PID1_D->setText(str);
                str.setNum(PID_ReadBuffer[3]);ui->lineEdit_PID2_P->setText(str);
                str.setNum(PID_ReadBuffer[4]);ui->lineEdit_PID2_I->setText(str);
                str.setNum(PID_ReadBuffer[5]);ui->lineEdit_PID2_D->setText(str);
                str.setNum(PID_ReadBuffer[6]);ui->lineEdit_PID3_P->setText(str);
                str.setNum(PID_ReadBuffer[7]);ui->lineEdit_PID3_I->setText(str);
                str.setNum(PID_ReadBuffer[8]);ui->lineEdit_PID3_D->setText(str);
            }
            break;
            /*
        case 0xF1:
            len =value.size() +5;
            CmdBuffer = new char[len];
            *(CmdBuffer+0) =0xAA;
            *(CmdBuffer+1) =0xAA;
            *(CmdBuffer+2) =0xF1;
            *(CmdBuffer+3) =len-5;
            for(int i =4; i<len-1; i++)
                *(CmdBuffer+i) =value[i-4];

            CmdBuffer[len-1] =SumVerify((uchar*)CmdBuffer,len-1);
            Cmd =QByteArray(CmdBuffer,len);

            emit SendCmd(Cmd);
            break;
            */
        case 0xF2:
            uchar tmp;

            tmp =value[0];
            switch(tmp){
                case 0:
                    ui->label_ModeValue->setText("姿态");
                    ui->label_ModeValue->setPalette(fontRed);
                    break;
                case 1:
                    ui->label_ModeValue->setText("气压计");
                    ui->label_ModeValue->setPalette(fontBlue);
                    break;
                case 2:
                    ui->label_ModeValue->setText("超声+气压计");
                    ui->label_ModeValue->setPalette(fontYellow);
                    break;
                case 3:
                    ui->label_ModeValue->setText("自动");
                    ui->label_ModeValue->setPalette(fontGreen);
                    break;
                default:
                    break;
            }
            tmp =value[1]; //copter_fly_mode
            switch(tmp){
                case 0:
                    ui->label_InterModeValue->setText("手动");
                    break;
                case 1:
                    ui->label_InterModeValue->setText("黑圆定点");
                    break;
                case 2:
                    ui->label_InterModeValue->setText("前进找车");
                    break;
                case 3:
                    ui->label_InterModeValue->setText("移动物体跟踪");
                    break;
                case 4:
                    ui->label_InterModeValue->setText("后退降落");
                    break;
               // case 5:
                    //     ui->label_InterModeValue->setText("前进");
                    //     break;
                    // case 6:
                    //     ui->label_InterModeValue->setText("后退");
                    //     break;
                    // case 7:
                    //     ui->label_InterModeValue->setText("前进中刹车");
                    //     break;
                    // case 8:
                    //     ui->label_InterModeValue->setText("后退中刹车");
                    //     break;
            }
            tmp =value[2];
            switch(tmp){
                case 0:
                    ui->label_FlyReadyValue->setText("锁定");
                    ui->label_FlyReadyValue->setPalette(fontRed);
                    break;
                case 1:
                    ui->label_FlyReadyValue->setText("解锁");
                    ui->label_FlyReadyValue->setPalette(fontGreen);
                    break;
                default:
                    break;
            }
            tmp =value[3];
            switch(tmp){
                case 0:
                    ui->label_All_OutValue->setText("急停");
                    ui->label_All_OutValue->setPalette(fontRed);
                    break;
                case 1:
                    ui->label_All_OutValue->setText("正常");
                    ui->label_All_OutValue->setPalette(fontGreen);
                    break;
                default:
                    break;
            }
            tmp =value[4];
            switch(tmp){
                case 0:
                    ui->label_UltraStatusValue->setText("丢失");
                    ui->label_UltraStatusValue->setPalette(fontRed);
                    break;
                case 1:
                    ui->label_UltraStatusValue->setText("正常");
                    ui->label_UltraStatusValue->setPalette(fontGreen);
                    break;
                default:
                    break;
            }
            tmp =value[5]; //copter_height_mode
            switch (tmp) {
                case 0:
                    ui->label_HeightModeValue->setText("手动");
                    ui->label_HeightModeValue->setPalette(fontYellow);
                    break;
                case 1:
                    ui->label_HeightModeValue->setText("定高");
                    ui->label_HeightModeValue->setPalette(fontGreen);
                    break;
                case 2:
                    ui->label_HeightModeValue->setText("起飞");
                    ui->label_HeightModeValue->setPalette(fontBlue);
                    break;
                case 3:
                    ui->label_HeightModeValue->setText("降落");
                    ui->label_HeightModeValue->setPalette(fontBlue);
                    break;
                default:
                    break;
            }
            tmp =value[6];
            fps =tmp/1.0;
            str.setNum(fps);ui->label_FpsValue->setText(str);
            if(fps >=9)
                ui->label_FpsValue->setPalette(fontGreen);
            else
                ui->label_FpsValue->setPalette(fontRed);
            break;
        default:
            break;
    }
    //ui->plainTextEdit->insertPlainText("SerialPort cmd receive\n");
    if(ui->plainTextEdit->blockCount() >2000)
        ui->plainTextEdit->clear();
}

void MainWindow::on_pushButton_SerialPortSend_clicked()
{
    QString CmdBuffer;
    CmdBuffer =ui->lineEdit_SerialPortOutput->text();

    QByteArray Cmd =StringToHex(CmdBuffer);
    emit SendCmd(Cmd);
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
}

void MainWindow::on_pushButton_SendHeight_clicked()
{
    char HeightCmdBuffer[6];
    HeightCmdBuffer[0] =0xAA;
    HeightCmdBuffer[1] =0xAF;
    HeightCmdBuffer[2] =0x42;
    HeightCmdBuffer[3] =1;
    Height = ui->label_HeightValue->text().toInt();
    HeightCmdBuffer[4] =Height;
    HeightCmdBuffer[5] =SumVerify((uchar*)HeightCmdBuffer,5);
    QByteArray HeightCmd(HeightCmdBuffer,6);
    ui->lineEdit_HeightValue->setText(QString::number(Height));

    emit SendCmd(HeightCmd);
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
}

void MainWindow::on_pushButton_ClearOffset_clicked()
{
    char CmdBuffer[6];
    CmdBuffer[0] =0xAA;
    CmdBuffer[1] =0xAF;
    CmdBuffer[2] =0x41;
    CmdBuffer[3] =1;
    CmdBuffer[4] =0x06;
    CmdBuffer[5] =SumVerify((uchar*)CmdBuffer,5);
    QByteArray Cmd(CmdBuffer,6);
    emit SendCmd(Cmd);
}

void MainWindow::on_pushButton_SendPID_clicked()
{
    QString str; ushort PID_Buffer[9];

    str =ui->lineEdit_PID1_P->text();PID_Buffer[0] =str.toShort();
    str =ui->lineEdit_PID1_I->text();PID_Buffer[1] =str.toShort();
    str =ui->lineEdit_PID1_D->text();PID_Buffer[2] =str.toShort();
    str =ui->lineEdit_PID2_P->text();PID_Buffer[3] =str.toShort();
    str =ui->lineEdit_PID2_I->text();PID_Buffer[4] =str.toShort();
    str =ui->lineEdit_PID2_D->text();PID_Buffer[5] =str.toShort();
    str =ui->lineEdit_PID3_P->text();PID_Buffer[6] =str.toShort();
    str =ui->lineEdit_PID3_I->text();PID_Buffer[7] =str.toShort();
    str =ui->lineEdit_PID3_D->text();PID_Buffer[8] =str.toShort();

    char CmdBuffer[23];
    CmdBuffer[0] =0xAA;
    CmdBuffer[1] =0xAF;
    CmdBuffer[2] =PID_func;
    CmdBuffer[3] =18;

    int i;
    for(i =0; i<9; i++){
        CmdBuffer[i*2+1+4] =((ushort)PID_Buffer[i])%256;
        CmdBuffer[i*2+4] =((ushort)PID_Buffer[i])/256;
    }
    CmdBuffer[22] =SumVerify((uchar*)CmdBuffer,22);
    QByteArray Cmd(CmdBuffer,23);
    emit SendCmd(Cmd);
}

void MainWindow::on_pushButton_ReadPID_clicked()
{
    char CmdBuffer[6];
    CmdBuffer[0] =0xAA;
    CmdBuffer[1] =0xAF;
    CmdBuffer[2] =0x02;
    CmdBuffer[3] =1;
    CmdBuffer[4] =0x01;
    CmdBuffer[5] =SumVerify((uchar*)CmdBuffer,5);
    QByteArray Cmd(CmdBuffer,6);
    emit SendCmd(Cmd);
}

void MainWindow::on_pushButton_Gyro_Cal_clicked()
{
    char CmdBuffer[6];
    CmdBuffer[0] =0xAA;
    CmdBuffer[1] =0xAF;
    CmdBuffer[2] =0x01;
    CmdBuffer[3] =1;
    CmdBuffer[4] =0x02;
    CmdBuffer[5] =SumVerify((uchar*)CmdBuffer,5);
    QByteArray Cmd(CmdBuffer,6);
    emit SendCmd(Cmd);
}

void MainWindow::on_pushButton_Acc_Cal_clicked()
{
    char CmdBuffer[6];
    CmdBuffer[0] =0xAA;
    CmdBuffer[1] =0xAF;
    CmdBuffer[2] =0x01;
    CmdBuffer[3] =1;
    CmdBuffer[4] =0x01;
    CmdBuffer[5] =SumVerify((uchar*)CmdBuffer,5);
    QByteArray Cmd(CmdBuffer,6);
    emit SendCmd(Cmd);
}

void MainWindow::on_pushButton_Comp_Cal_clicked()
{
    char CmdBuffer[6];
    CmdBuffer[0] =0xAA;
    CmdBuffer[1] =0xAF;
    CmdBuffer[2] =0x01;
    CmdBuffer[3] =1;
    CmdBuffer[4] =0x04;
    CmdBuffer[5] =SumVerify((uchar*)CmdBuffer,5);
    QByteArray Cmd(CmdBuffer,6);
    emit SendCmd(Cmd);
}

void MainWindow::on_comboBox_currentIndexChanged(const QString &arg1)
{
    int index =arg1.toInt();
    switch (index) {
    case 1:
        PID_func =0x10;
        break;
    case 4:
        PID_func =0x11;
        break;
    case 7:
        PID_func =0x12;
        break;
    case 10:
        PID_func =0x13;
        break;
    case 13:
        PID_func =0x14;
        break;
    case 16:
        PID_func =0x15;
        break;
    default:
        break;
    }
}

void MainWindow::on_pushButton_SendCtrlCommend_clicked()
{
    QString str;
    char CmdBuffer[6];

    CmdBuffer[0] =0xAA;
    CmdBuffer[1] =0xAF;
    CmdBuffer[2] =0x43;
    CmdBuffer[3] =1;

    str = ui->comboBox_Ctrl_Command->currentText();
    if(str == "1 手动")
        CmdBuffer[4] =0x01;
    else if(str == "2 手动")
        CmdBuffer[4] =0x02;
    else if(str == "3 悬停")
        CmdBuffer[4] =0x03;
    else if(str == "4 前进")
        CmdBuffer[4] =0x04;
    else if(str == "5 跟踪")
        CmdBuffer[4] =0x05;
    else if(str == "6 后退降落")
        CmdBuffer[4] =0x06;

    CmdBuffer[5] =SumVerify((uchar*)CmdBuffer,5);
    QByteArray Cmd(CmdBuffer,6);
    emit SendCmd(Cmd);
}

void MainWindow::on_pushButton_SendHeightCommend_clicked()
{
    QString str;
    char CmdBuffer[6];

    CmdBuffer[0] =0xAA;
    CmdBuffer[1] =0xAF;
    CmdBuffer[2] =0x44;
    CmdBuffer[3] =1;

    str = ui->comboBox_Height_Command->currentText();
    if(str == "1 手动")
        CmdBuffer[4] =0x01;
    else if(str == "2 定高")
        CmdBuffer[4] =0x02;
    else if(str == "3 降落")
        CmdBuffer[4] =0x03;
    else if(str == "4 起飞")
        CmdBuffer[4] =0x04;
    //else if(str == "5 跟踪")
    //    CmdBuffer[4] =0x05;
    //else if(str == "6 后退降落")
    //    CmdBuffer[4] =0x06;

    CmdBuffer[5] =SumVerify((uchar*)CmdBuffer,5);
    QByteArray Cmd(CmdBuffer,6);
    emit SendCmd(Cmd);
}
