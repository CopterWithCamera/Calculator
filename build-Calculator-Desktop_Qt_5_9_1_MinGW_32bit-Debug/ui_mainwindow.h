/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGroupBox *groupBox_SerialCtl;
    QPushButton *pushButton_UpdateSerialPortList;
    QCheckBox *checkBox_SerialPortOpen;
    QComboBox *comboBox_SerialPortList;
    QComboBox *comboBox_SerialPortBaud;
    QLabel *label_Height;
    QFrame *frame_Log;
    QPushButton *pushButton_SerialPortSend;
    QCheckBox *checkBox_ShowInput;
    QPlainTextEdit *plainTextEdit;
    QLineEdit *lineEdit_SerialPortOutput;
    QPushButton *pushButton_incHeight;
    QPushButton *pushButton_decHeight;
    QPushButton *pushButton_Lock;
    QPushButton *pushButton_UnLock;
    QLineEdit *lineEdit_HeightValue;
    QGroupBox *groupBox_Status;
    QLabel *label_Mode;
    QLabel *label_ModeValue;
    QLabel *label_InterModeValue;
    QLabel *label_InterMode;
    QLabel *label_FlyReadyValue;
    QLabel *label_FlyReady;
    QLabel *label_All_OutValue;
    QLabel *label_All_Out;
    QLabel *label_UltraStatusValue;
    QLabel *label_UltraStatus;
    QLabel *label_VoltageValue;
    QLabel *label_Voltage;
    QLabel *label_HeightModeValue;
    QLabel *label_HeightMode;
    QLabel *label_Height_2;
    QLabel *label_HeightValue;
    QLabel *label_Fps;
    QLabel *label_FpsValue;
    QFrame *frame_AdjustButton;
    QPushButton *pushButton_Right;
    QPushButton *pushButton_Front;
    QPushButton *pushButton_Left;
    QPushButton *pushButton_Back;
    QPushButton *pushButton_SaveCoef;
    QPushButton *pushButton_ClearOffset;
    QPushButton *pushButton_SendHeight;
    QGroupBox *groupBox_PID;
    QLabel *label_8;
    QLineEdit *lineEdit_PID1_P;
    QLabel *label;
    QLineEdit *lineEdit_PID1_I;
    QLabel *label_6;
    QLineEdit *lineEdit_PID3_I;
    QLineEdit *lineEdit_PID2_D;
    QLineEdit *lineEdit_PID1_D;
    QLineEdit *lineEdit_PID2_I;
    QLabel *label_7;
    QLineEdit *lineEdit_PID2_P;
    QLabel *label_9;
    QLabel *label_5;
    QLineEdit *lineEdit_PID3_D;
    QLineEdit *lineEdit_PID3_P;
    QComboBox *comboBox;
    QLabel *label_4;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton_SendPID;
    QPushButton *pushButton_ReadPID;
    QGroupBox *groupBox_Cal;
    QPushButton *pushButton_Gyro_Cal;
    QPushButton *pushButton_Acc_Cal;
    QPushButton *pushButton_Comp_Cal;
    QGroupBox *groupBox_SerialCtl_2;
    QPushButton *pushButton_UpdateSerialPortList_2;
    QCheckBox *checkBox_SerialPortOpen_2;
    QComboBox *comboBox_SerialPortList_2;
    QComboBox *comboBox_SerialPortBaud_2;
    QGroupBox *groupBox;
    QPushButton *pushButton_SendCtrlCommend;
    QComboBox *comboBox_Ctrl_Command;
    QGroupBox *groupBox_2;
    QPushButton *pushButton_SendHeightCommend;
    QComboBox *comboBox_Height_Command;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1070, 494);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        groupBox_SerialCtl = new QGroupBox(centralWidget);
        groupBox_SerialCtl->setObjectName(QStringLiteral("groupBox_SerialCtl"));
        groupBox_SerialCtl->setGeometry(QRect(10, 10, 111, 161));
        pushButton_UpdateSerialPortList = new QPushButton(groupBox_SerialCtl);
        pushButton_UpdateSerialPortList->setObjectName(QStringLiteral("pushButton_UpdateSerialPortList"));
        pushButton_UpdateSerialPortList->setGeometry(QRect(10, 90, 91, 31));
        checkBox_SerialPortOpen = new QCheckBox(groupBox_SerialCtl);
        checkBox_SerialPortOpen->setObjectName(QStringLiteral("checkBox_SerialPortOpen"));
        checkBox_SerialPortOpen->setGeometry(QRect(10, 130, 91, 21));
        comboBox_SerialPortList = new QComboBox(groupBox_SerialCtl);
        comboBox_SerialPortList->setObjectName(QStringLiteral("comboBox_SerialPortList"));
        comboBox_SerialPortList->setGeometry(QRect(10, 30, 91, 21));
        comboBox_SerialPortBaud = new QComboBox(groupBox_SerialCtl);
        comboBox_SerialPortBaud->setObjectName(QStringLiteral("comboBox_SerialPortBaud"));
        comboBox_SerialPortBaud->setGeometry(QRect(10, 60, 91, 21));
        comboBox_SerialPortList->raise();
        pushButton_UpdateSerialPortList->raise();
        checkBox_SerialPortOpen->raise();
        comboBox_SerialPortBaud->raise();
        label_Height = new QLabel(centralWidget);
        label_Height->setObjectName(QStringLiteral("label_Height"));
        label_Height->setGeometry(QRect(20, 180, 91, 16));
        frame_Log = new QFrame(centralWidget);
        frame_Log->setObjectName(QStringLiteral("frame_Log"));
        frame_Log->setGeometry(QRect(130, 10, 331, 281));
        frame_Log->setFrameShape(QFrame::StyledPanel);
        frame_Log->setFrameShadow(QFrame::Raised);
        pushButton_SerialPortSend = new QPushButton(frame_Log);
        pushButton_SerialPortSend->setObjectName(QStringLiteral("pushButton_SerialPortSend"));
        pushButton_SerialPortSend->setGeometry(QRect(190, 250, 61, 21));
        checkBox_ShowInput = new QCheckBox(frame_Log);
        checkBox_ShowInput->setObjectName(QStringLiteral("checkBox_ShowInput"));
        checkBox_ShowInput->setGeometry(QRect(260, 250, 61, 21));
        plainTextEdit = new QPlainTextEdit(frame_Log);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(10, 10, 311, 231));
        lineEdit_SerialPortOutput = new QLineEdit(frame_Log);
        lineEdit_SerialPortOutput->setObjectName(QStringLiteral("lineEdit_SerialPortOutput"));
        lineEdit_SerialPortOutput->setGeometry(QRect(10, 250, 171, 21));
        pushButton_incHeight = new QPushButton(centralWidget);
        pushButton_incHeight->setObjectName(QStringLiteral("pushButton_incHeight"));
        pushButton_incHeight->setGeometry(QRect(20, 240, 41, 31));
        pushButton_decHeight = new QPushButton(centralWidget);
        pushButton_decHeight->setObjectName(QStringLiteral("pushButton_decHeight"));
        pushButton_decHeight->setGeometry(QRect(60, 240, 41, 31));
        pushButton_Lock = new QPushButton(centralWidget);
        pushButton_Lock->setObjectName(QStringLiteral("pushButton_Lock"));
        pushButton_Lock->setGeometry(QRect(20, 320, 121, 71));
        pushButton_Lock->setStyleSheet(QStringLiteral("background-color: red; border-color: red;"));
        pushButton_UnLock = new QPushButton(centralWidget);
        pushButton_UnLock->setObjectName(QStringLiteral("pushButton_UnLock"));
        pushButton_UnLock->setGeometry(QRect(20, 410, 121, 71));
        pushButton_UnLock->setStyleSheet(QStringLiteral("background-color: red; border-color: red;"));
        lineEdit_HeightValue = new QLineEdit(centralWidget);
        lineEdit_HeightValue->setObjectName(QStringLiteral("lineEdit_HeightValue"));
        lineEdit_HeightValue->setGeometry(QRect(20, 210, 81, 21));
        groupBox_Status = new QGroupBox(centralWidget);
        groupBox_Status->setObjectName(QStringLiteral("groupBox_Status"));
        groupBox_Status->setGeometry(QRect(470, 10, 211, 451));
        label_Mode = new QLabel(groupBox_Status);
        label_Mode->setObjectName(QStringLiteral("label_Mode"));
        label_Mode->setGeometry(QRect(10, 30, 91, 16));
        label_ModeValue = new QLabel(groupBox_Status);
        label_ModeValue->setObjectName(QStringLiteral("label_ModeValue"));
        label_ModeValue->setGeometry(QRect(10, 50, 191, 41));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(20);
        label_ModeValue->setFont(font);
        label_ModeValue->setFrameShape(QFrame::Panel);
        label_ModeValue->setFrameShadow(QFrame::Sunken);
        label_ModeValue->setAlignment(Qt::AlignCenter);
        label_InterModeValue = new QLabel(groupBox_Status);
        label_InterModeValue->setObjectName(QStringLiteral("label_InterModeValue"));
        label_InterModeValue->setGeometry(QRect(10, 120, 191, 41));
        label_InterModeValue->setFont(font);
        label_InterModeValue->setFrameShape(QFrame::Panel);
        label_InterModeValue->setFrameShadow(QFrame::Sunken);
        label_InterModeValue->setAlignment(Qt::AlignCenter);
        label_InterMode = new QLabel(groupBox_Status);
        label_InterMode->setObjectName(QStringLiteral("label_InterMode"));
        label_InterMode->setGeometry(QRect(10, 100, 91, 16));
        label_FlyReadyValue = new QLabel(groupBox_Status);
        label_FlyReadyValue->setObjectName(QStringLiteral("label_FlyReadyValue"));
        label_FlyReadyValue->setGeometry(QRect(10, 190, 91, 41));
        label_FlyReadyValue->setFont(font);
        label_FlyReadyValue->setFrameShape(QFrame::Panel);
        label_FlyReadyValue->setFrameShadow(QFrame::Sunken);
        label_FlyReadyValue->setAlignment(Qt::AlignCenter);
        label_FlyReady = new QLabel(groupBox_Status);
        label_FlyReady->setObjectName(QStringLiteral("label_FlyReady"));
        label_FlyReady->setGeometry(QRect(10, 170, 91, 16));
        label_All_OutValue = new QLabel(groupBox_Status);
        label_All_OutValue->setObjectName(QStringLiteral("label_All_OutValue"));
        label_All_OutValue->setGeometry(QRect(10, 400, 91, 41));
        label_All_OutValue->setFont(font);
        label_All_OutValue->setFrameShape(QFrame::Panel);
        label_All_OutValue->setFrameShadow(QFrame::Sunken);
        label_All_OutValue->setAlignment(Qt::AlignCenter);
        label_All_Out = new QLabel(groupBox_Status);
        label_All_Out->setObjectName(QStringLiteral("label_All_Out"));
        label_All_Out->setGeometry(QRect(10, 380, 91, 16));
        label_UltraStatusValue = new QLabel(groupBox_Status);
        label_UltraStatusValue->setObjectName(QStringLiteral("label_UltraStatusValue"));
        label_UltraStatusValue->setGeometry(QRect(10, 260, 91, 41));
        label_UltraStatusValue->setFont(font);
        label_UltraStatusValue->setFrameShape(QFrame::Panel);
        label_UltraStatusValue->setFrameShadow(QFrame::Sunken);
        label_UltraStatusValue->setAlignment(Qt::AlignCenter);
        label_UltraStatus = new QLabel(groupBox_Status);
        label_UltraStatus->setObjectName(QStringLiteral("label_UltraStatus"));
        label_UltraStatus->setGeometry(QRect(10, 239, 91, 16));
        label_VoltageValue = new QLabel(groupBox_Status);
        label_VoltageValue->setObjectName(QStringLiteral("label_VoltageValue"));
        label_VoltageValue->setGeometry(QRect(110, 260, 91, 41));
        label_VoltageValue->setFont(font);
        label_VoltageValue->setFrameShape(QFrame::Panel);
        label_VoltageValue->setFrameShadow(QFrame::Sunken);
        label_VoltageValue->setAlignment(Qt::AlignCenter);
        label_Voltage = new QLabel(groupBox_Status);
        label_Voltage->setObjectName(QStringLiteral("label_Voltage"));
        label_Voltage->setGeometry(QRect(110, 239, 91, 16));
        label_HeightModeValue = new QLabel(groupBox_Status);
        label_HeightModeValue->setObjectName(QStringLiteral("label_HeightModeValue"));
        label_HeightModeValue->setGeometry(QRect(110, 190, 91, 41));
        label_HeightModeValue->setFont(font);
        label_HeightModeValue->setFrameShape(QFrame::Panel);
        label_HeightModeValue->setFrameShadow(QFrame::Sunken);
        label_HeightModeValue->setAlignment(Qt::AlignCenter);
        label_HeightMode = new QLabel(groupBox_Status);
        label_HeightMode->setObjectName(QStringLiteral("label_HeightMode"));
        label_HeightMode->setGeometry(QRect(110, 170, 91, 16));
        label_Height_2 = new QLabel(groupBox_Status);
        label_Height_2->setObjectName(QStringLiteral("label_Height_2"));
        label_Height_2->setGeometry(QRect(10, 309, 91, 16));
        label_HeightValue = new QLabel(groupBox_Status);
        label_HeightValue->setObjectName(QStringLiteral("label_HeightValue"));
        label_HeightValue->setGeometry(QRect(10, 330, 91, 41));
        label_HeightValue->setFont(font);
        label_HeightValue->setFrameShape(QFrame::Panel);
        label_HeightValue->setFrameShadow(QFrame::Sunken);
        label_HeightValue->setAlignment(Qt::AlignCenter);
        label_Fps = new QLabel(groupBox_Status);
        label_Fps->setObjectName(QStringLiteral("label_Fps"));
        label_Fps->setGeometry(QRect(110, 309, 91, 16));
        label_FpsValue = new QLabel(groupBox_Status);
        label_FpsValue->setObjectName(QStringLiteral("label_FpsValue"));
        label_FpsValue->setGeometry(QRect(110, 330, 91, 41));
        label_FpsValue->setFont(font);
        label_FpsValue->setFrameShape(QFrame::Panel);
        label_FpsValue->setFrameShadow(QFrame::Sunken);
        label_FpsValue->setAlignment(Qt::AlignCenter);
        frame_AdjustButton = new QFrame(centralWidget);
        frame_AdjustButton->setObjectName(QStringLiteral("frame_AdjustButton"));
        frame_AdjustButton->setGeometry(QRect(160, 310, 301, 161));
        frame_AdjustButton->setFrameShape(QFrame::StyledPanel);
        frame_AdjustButton->setFrameShadow(QFrame::Raised);
        pushButton_Right = new QPushButton(frame_AdjustButton);
        pushButton_Right->setObjectName(QStringLiteral("pushButton_Right"));
        pushButton_Right->setGeometry(QRect(190, 50, 93, 28));
        pushButton_Front = new QPushButton(frame_AdjustButton);
        pushButton_Front->setObjectName(QStringLiteral("pushButton_Front"));
        pushButton_Front->setGeometry(QRect(100, 10, 93, 28));
        pushButton_Left = new QPushButton(frame_AdjustButton);
        pushButton_Left->setObjectName(QStringLiteral("pushButton_Left"));
        pushButton_Left->setGeometry(QRect(10, 50, 93, 28));
        pushButton_Back = new QPushButton(frame_AdjustButton);
        pushButton_Back->setObjectName(QStringLiteral("pushButton_Back"));
        pushButton_Back->setGeometry(QRect(100, 90, 93, 28));
        pushButton_SaveCoef = new QPushButton(frame_AdjustButton);
        pushButton_SaveCoef->setObjectName(QStringLiteral("pushButton_SaveCoef"));
        pushButton_SaveCoef->setGeometry(QRect(200, 120, 81, 31));
        pushButton_ClearOffset = new QPushButton(frame_AdjustButton);
        pushButton_ClearOffset->setObjectName(QStringLiteral("pushButton_ClearOffset"));
        pushButton_ClearOffset->setGeometry(QRect(100, 50, 93, 28));
        pushButton_SendHeight = new QPushButton(centralWidget);
        pushButton_SendHeight->setObjectName(QStringLiteral("pushButton_SendHeight"));
        pushButton_SendHeight->setGeometry(QRect(20, 280, 81, 28));
        groupBox_PID = new QGroupBox(centralWidget);
        groupBox_PID->setObjectName(QStringLiteral("groupBox_PID"));
        groupBox_PID->setGeometry(QRect(690, 10, 251, 211));
        label_8 = new QLabel(groupBox_PID);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(170, 60, 61, 16));
        lineEdit_PID1_P = new QLineEdit(groupBox_PID);
        lineEdit_PID1_P->setObjectName(QStringLiteral("lineEdit_PID1_P"));
        lineEdit_PID1_P->setGeometry(QRect(10, 80, 71, 21));
        label = new QLabel(groupBox_PID);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 60, 61, 16));
        lineEdit_PID1_I = new QLineEdit(groupBox_PID);
        lineEdit_PID1_I->setObjectName(QStringLiteral("lineEdit_PID1_I"));
        lineEdit_PID1_I->setGeometry(QRect(90, 80, 71, 21));
        label_6 = new QLabel(groupBox_PID);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(90, 160, 61, 16));
        lineEdit_PID3_I = new QLineEdit(groupBox_PID);
        lineEdit_PID3_I->setObjectName(QStringLiteral("lineEdit_PID3_I"));
        lineEdit_PID3_I->setGeometry(QRect(90, 180, 71, 21));
        lineEdit_PID2_D = new QLineEdit(groupBox_PID);
        lineEdit_PID2_D->setObjectName(QStringLiteral("lineEdit_PID2_D"));
        lineEdit_PID2_D->setGeometry(QRect(170, 130, 71, 21));
        lineEdit_PID1_D = new QLineEdit(groupBox_PID);
        lineEdit_PID1_D->setObjectName(QStringLiteral("lineEdit_PID1_D"));
        lineEdit_PID1_D->setGeometry(QRect(170, 80, 71, 21));
        lineEdit_PID2_I = new QLineEdit(groupBox_PID);
        lineEdit_PID2_I->setObjectName(QStringLiteral("lineEdit_PID2_I"));
        lineEdit_PID2_I->setGeometry(QRect(90, 130, 71, 21));
        label_7 = new QLabel(groupBox_PID);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(170, 110, 61, 16));
        lineEdit_PID2_P = new QLineEdit(groupBox_PID);
        lineEdit_PID2_P->setObjectName(QStringLiteral("lineEdit_PID2_P"));
        lineEdit_PID2_P->setGeometry(QRect(10, 130, 71, 21));
        label_9 = new QLabel(groupBox_PID);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(170, 160, 61, 16));
        label_5 = new QLabel(groupBox_PID);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(90, 60, 61, 16));
        lineEdit_PID3_D = new QLineEdit(groupBox_PID);
        lineEdit_PID3_D->setObjectName(QStringLiteral("lineEdit_PID3_D"));
        lineEdit_PID3_D->setGeometry(QRect(170, 180, 71, 21));
        lineEdit_PID3_P = new QLineEdit(groupBox_PID);
        lineEdit_PID3_P->setObjectName(QStringLiteral("lineEdit_PID3_P"));
        lineEdit_PID3_P->setGeometry(QRect(10, 180, 71, 21));
        comboBox = new QComboBox(groupBox_PID);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(10, 20, 87, 22));
        label_4 = new QLabel(groupBox_PID);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(90, 110, 61, 16));
        label_2 = new QLabel(groupBox_PID);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 110, 61, 16));
        label_3 = new QLabel(groupBox_PID);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 160, 61, 16));
        pushButton_SendPID = new QPushButton(groupBox_PID);
        pushButton_SendPID->setObjectName(QStringLiteral("pushButton_SendPID"));
        pushButton_SendPID->setGeometry(QRect(100, 20, 71, 22));
        pushButton_ReadPID = new QPushButton(groupBox_PID);
        pushButton_ReadPID->setObjectName(QStringLiteral("pushButton_ReadPID"));
        pushButton_ReadPID->setGeometry(QRect(170, 20, 71, 22));
        groupBox_Cal = new QGroupBox(centralWidget);
        groupBox_Cal->setObjectName(QStringLiteral("groupBox_Cal"));
        groupBox_Cal->setGeometry(QRect(690, 230, 131, 201));
        pushButton_Gyro_Cal = new QPushButton(groupBox_Cal);
        pushButton_Gyro_Cal->setObjectName(QStringLiteral("pushButton_Gyro_Cal"));
        pushButton_Gyro_Cal->setGeometry(QRect(10, 20, 111, 51));
        pushButton_Acc_Cal = new QPushButton(groupBox_Cal);
        pushButton_Acc_Cal->setObjectName(QStringLiteral("pushButton_Acc_Cal"));
        pushButton_Acc_Cal->setGeometry(QRect(10, 80, 111, 51));
        pushButton_Comp_Cal = new QPushButton(groupBox_Cal);
        pushButton_Comp_Cal->setObjectName(QStringLiteral("pushButton_Comp_Cal"));
        pushButton_Comp_Cal->setGeometry(QRect(10, 140, 111, 51));
        groupBox_SerialCtl_2 = new QGroupBox(centralWidget);
        groupBox_SerialCtl_2->setObjectName(QStringLiteral("groupBox_SerialCtl_2"));
        groupBox_SerialCtl_2->setGeometry(QRect(950, 10, 111, 161));
        pushButton_UpdateSerialPortList_2 = new QPushButton(groupBox_SerialCtl_2);
        pushButton_UpdateSerialPortList_2->setObjectName(QStringLiteral("pushButton_UpdateSerialPortList_2"));
        pushButton_UpdateSerialPortList_2->setGeometry(QRect(10, 90, 91, 31));
        checkBox_SerialPortOpen_2 = new QCheckBox(groupBox_SerialCtl_2);
        checkBox_SerialPortOpen_2->setObjectName(QStringLiteral("checkBox_SerialPortOpen_2"));
        checkBox_SerialPortOpen_2->setGeometry(QRect(10, 130, 91, 21));
        comboBox_SerialPortList_2 = new QComboBox(groupBox_SerialCtl_2);
        comboBox_SerialPortList_2->setObjectName(QStringLiteral("comboBox_SerialPortList_2"));
        comboBox_SerialPortList_2->setGeometry(QRect(10, 30, 91, 21));
        comboBox_SerialPortBaud_2 = new QComboBox(groupBox_SerialCtl_2);
        comboBox_SerialPortBaud_2->setObjectName(QStringLiteral("comboBox_SerialPortBaud_2"));
        comboBox_SerialPortBaud_2->setGeometry(QRect(10, 60, 91, 21));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(820, 230, 111, 91));
        pushButton_SendCtrlCommend = new QPushButton(groupBox);
        pushButton_SendCtrlCommend->setObjectName(QStringLiteral("pushButton_SendCtrlCommend"));
        pushButton_SendCtrlCommend->setGeometry(QRect(10, 50, 91, 28));
        comboBox_Ctrl_Command = new QComboBox(groupBox);
        comboBox_Ctrl_Command->setObjectName(QStringLiteral("comboBox_Ctrl_Command"));
        comboBox_Ctrl_Command->setGeometry(QRect(10, 20, 91, 21));
        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(820, 320, 111, 91));
        pushButton_SendHeightCommend = new QPushButton(groupBox_2);
        pushButton_SendHeightCommend->setObjectName(QStringLiteral("pushButton_SendHeightCommend"));
        pushButton_SendHeightCommend->setGeometry(QRect(10, 50, 91, 28));
        comboBox_Height_Command = new QComboBox(groupBox_2);
        comboBox_Height_Command->setObjectName(QStringLiteral("comboBox_Height_Command"));
        comboBox_Height_Command->setGeometry(QRect(10, 20, 91, 21));
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        pushButton_Lock->setDefault(false);
        pushButton_UnLock->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        groupBox_SerialCtl->setTitle(QApplication::translate("MainWindow", "Serial Port", Q_NULLPTR));
        pushButton_UpdateSerialPortList->setText(QApplication::translate("MainWindow", "\346\233\264\346\226\260\344\270\262\345\217\243", Q_NULLPTR));
        checkBox_SerialPortOpen->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200\344\270\262\345\217\243", Q_NULLPTR));
        comboBox_SerialPortBaud->clear();
        comboBox_SerialPortBaud->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "115200", Q_NULLPTR)
         << QApplication::translate("MainWindow", "57600", Q_NULLPTR)
        );
        label_Height->setText(QApplication::translate("MainWindow", "Height:(cm)", Q_NULLPTR));
        pushButton_SerialPortSend->setText(QApplication::translate("MainWindow", "\345\217\221\351\200\201", Q_NULLPTR));
        checkBox_ShowInput->setText(QApplication::translate("MainWindow", "Show", Q_NULLPTR));
        pushButton_incHeight->setText(QApplication::translate("MainWindow", "+", Q_NULLPTR));
        pushButton_decHeight->setText(QApplication::translate("MainWindow", "-", Q_NULLPTR));
        pushButton_Lock->setText(QApplication::translate("MainWindow", "\346\200\245\345\201\234", Q_NULLPTR));
        pushButton_UnLock->setText(QApplication::translate("MainWindow", "\346\201\242\345\244\215", Q_NULLPTR));
        groupBox_Status->setTitle(QApplication::translate("MainWindow", "Status", Q_NULLPTR));
        label_Mode->setText(QApplication::translate("MainWindow", "\346\250\241\345\274\217\357\274\232", Q_NULLPTR));
        label_ModeValue->setText(QString());
        label_InterModeValue->setText(QString());
        label_InterMode->setText(QApplication::translate("MainWindow", "\351\243\236\350\241\214\346\250\241\345\274\217\357\274\232", Q_NULLPTR));
        label_FlyReadyValue->setText(QString());
        label_FlyReady->setText(QApplication::translate("MainWindow", "\351\224\201\357\274\232", Q_NULLPTR));
        label_All_OutValue->setText(QString());
        label_All_Out->setText(QApplication::translate("MainWindow", "\347\224\265\346\234\272\350\276\223\345\207\272\357\274\232", Q_NULLPTR));
        label_UltraStatusValue->setText(QString());
        label_UltraStatus->setText(QApplication::translate("MainWindow", "\350\266\205\345\243\260\347\212\266\346\200\201\357\274\232", Q_NULLPTR));
        label_VoltageValue->setText(QString());
        label_Voltage->setText(QApplication::translate("MainWindow", "\347\224\265\345\216\213\357\274\232", Q_NULLPTR));
        label_HeightModeValue->setText(QString());
        label_HeightMode->setText(QApplication::translate("MainWindow", "\346\216\247\351\253\230\346\250\241\345\274\217\357\274\232", Q_NULLPTR));
        label_Height_2->setText(QApplication::translate("MainWindow", "\351\253\230\345\272\246\357\274\232", Q_NULLPTR));
        label_HeightValue->setText(QString());
        label_Fps->setText(QApplication::translate("MainWindow", "\345\270\247\347\216\207\357\274\232", Q_NULLPTR));
        label_FpsValue->setText(QString());
        pushButton_Right->setText(QApplication::translate("MainWindow", "\345\217\263", Q_NULLPTR));
        pushButton_Front->setText(QApplication::translate("MainWindow", "\345\211\215", Q_NULLPTR));
        pushButton_Left->setText(QApplication::translate("MainWindow", "\345\267\246", Q_NULLPTR));
        pushButton_Back->setText(QApplication::translate("MainWindow", "\345\220\216", Q_NULLPTR));
        pushButton_SaveCoef->setText(QApplication::translate("MainWindow", "\345\255\230\345\202\250", Q_NULLPTR));
        pushButton_ClearOffset->setText(QApplication::translate("MainWindow", "\346\270\205\351\233\266", Q_NULLPTR));
        pushButton_SendHeight->setText(QApplication::translate("MainWindow", "Send", Q_NULLPTR));
        groupBox_PID->setTitle(QApplication::translate("MainWindow", "PID Adjust", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "PID1.D", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "PID1.P", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "PID3.I", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "PID2.D", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "PID3.D", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "PID1.I", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "1", Q_NULLPTR)
         << QApplication::translate("MainWindow", "4", Q_NULLPTR)
         << QApplication::translate("MainWindow", "7", Q_NULLPTR)
         << QApplication::translate("MainWindow", "10", Q_NULLPTR)
         << QApplication::translate("MainWindow", "13", Q_NULLPTR)
         << QApplication::translate("MainWindow", "16", Q_NULLPTR)
        );
        label_4->setText(QApplication::translate("MainWindow", "PID2.I", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "PID2.P", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "PID3.P", Q_NULLPTR));
        pushButton_SendPID->setText(QApplication::translate("MainWindow", "Send", Q_NULLPTR));
        pushButton_ReadPID->setText(QApplication::translate("MainWindow", "Read", Q_NULLPTR));
        groupBox_Cal->setTitle(QApplication::translate("MainWindow", "Calibration", Q_NULLPTR));
        pushButton_Gyro_Cal->setText(QApplication::translate("MainWindow", "\351\231\200\350\236\272\344\273\252\346\240\241\345\207\206", Q_NULLPTR));
        pushButton_Acc_Cal->setText(QApplication::translate("MainWindow", "\345\212\240\351\200\237\345\272\246\346\240\241\345\207\206", Q_NULLPTR));
        pushButton_Comp_Cal->setText(QApplication::translate("MainWindow", "\347\275\227\347\233\230\346\240\241\345\207\206", Q_NULLPTR));
        groupBox_SerialCtl_2->setTitle(QApplication::translate("MainWindow", "SerialPort2", Q_NULLPTR));
        pushButton_UpdateSerialPortList_2->setText(QApplication::translate("MainWindow", "\346\233\264\346\226\260\344\270\262\345\217\243", Q_NULLPTR));
        checkBox_SerialPortOpen_2->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200\344\270\262\345\217\243", Q_NULLPTR));
        comboBox_SerialPortBaud_2->clear();
        comboBox_SerialPortBaud_2->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "115200", Q_NULLPTR)
         << QApplication::translate("MainWindow", "57600", Q_NULLPTR)
        );
        groupBox->setTitle(QApplication::translate("MainWindow", "\346\216\247\345\210\266\346\214\207\344\273\244", Q_NULLPTR));
        pushButton_SendCtrlCommend->setText(QApplication::translate("MainWindow", "Send", Q_NULLPTR));
        comboBox_Ctrl_Command->clear();
        comboBox_Ctrl_Command->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "1 \346\211\213\345\212\250", Q_NULLPTR)
         << QApplication::translate("MainWindow", "2 \346\211\213\345\212\250", Q_NULLPTR)
         << QApplication::translate("MainWindow", "3 \346\202\254\345\201\234", Q_NULLPTR)
         << QApplication::translate("MainWindow", "4 \345\211\215\350\277\233", Q_NULLPTR)
         << QApplication::translate("MainWindow", "5 \350\267\237\350\270\252", Q_NULLPTR)
         << QApplication::translate("MainWindow", "6 \345\220\216\351\200\200\351\231\215\350\220\275", Q_NULLPTR)
        );
        groupBox_2->setTitle(QApplication::translate("MainWindow", "\351\253\230\345\272\246\346\214\207\344\273\244", Q_NULLPTR));
        pushButton_SendHeightCommend->setText(QApplication::translate("MainWindow", "Send", Q_NULLPTR));
        comboBox_Height_Command->clear();
        comboBox_Height_Command->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "1 \346\211\213\345\212\250", Q_NULLPTR)
         << QApplication::translate("MainWindow", "2 \345\256\232\351\253\230", Q_NULLPTR)
         << QApplication::translate("MainWindow", "3 \351\231\215\350\220\275", Q_NULLPTR)
         << QApplication::translate("MainWindow", "4 \350\265\267\351\243\236", Q_NULLPTR)
        );
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
