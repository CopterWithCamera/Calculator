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
    QLineEdit *lineEdit_SerialPortOutput;
    QPushButton *pushButton_SerialPortSend;
    QCheckBox *checkBox_ShowInput;
    QPlainTextEdit *plainTextEdit;
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
    QFrame *frame_AdjustButton;
    QPushButton *pushButton_Right;
    QPushButton *pushButton_Front;
    QPushButton *pushButton_Left;
    QPushButton *pushButton_Back;
    QPushButton *pushButton_SaveCoef;
    QPushButton *pushButton_SendHeight;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(660, 421);
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
        frame_Log->setGeometry(QRect(310, 10, 331, 241));
        frame_Log->setFrameShape(QFrame::StyledPanel);
        frame_Log->setFrameShadow(QFrame::Raised);
        lineEdit_SerialPortOutput = new QLineEdit(frame_Log);
        lineEdit_SerialPortOutput->setObjectName(QStringLiteral("lineEdit_SerialPortOutput"));
        lineEdit_SerialPortOutput->setGeometry(QRect(10, 210, 171, 21));
        pushButton_SerialPortSend = new QPushButton(frame_Log);
        pushButton_SerialPortSend->setObjectName(QStringLiteral("pushButton_SerialPortSend"));
        pushButton_SerialPortSend->setGeometry(QRect(190, 210, 61, 21));
        checkBox_ShowInput = new QCheckBox(frame_Log);
        checkBox_ShowInput->setObjectName(QStringLiteral("checkBox_ShowInput"));
        checkBox_ShowInput->setGeometry(QRect(260, 210, 61, 21));
        plainTextEdit = new QPlainTextEdit(frame_Log);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(10, 10, 311, 181));
        pushButton_incHeight = new QPushButton(centralWidget);
        pushButton_incHeight->setObjectName(QStringLiteral("pushButton_incHeight"));
        pushButton_incHeight->setGeometry(QRect(20, 240, 41, 31));
        pushButton_decHeight = new QPushButton(centralWidget);
        pushButton_decHeight->setObjectName(QStringLiteral("pushButton_decHeight"));
        pushButton_decHeight->setGeometry(QRect(60, 240, 41, 31));
        pushButton_Lock = new QPushButton(centralWidget);
        pushButton_Lock->setObjectName(QStringLiteral("pushButton_Lock"));
        pushButton_Lock->setGeometry(QRect(30, 330, 121, 71));
        pushButton_Lock->setStyleSheet(QStringLiteral("background-color: red; border-color: red;"));
        pushButton_UnLock = new QPushButton(centralWidget);
        pushButton_UnLock->setObjectName(QStringLiteral("pushButton_UnLock"));
        pushButton_UnLock->setGeometry(QRect(170, 330, 121, 71));
        pushButton_UnLock->setStyleSheet(QStringLiteral("background-color: red; border-color: red;"));
        lineEdit_HeightValue = new QLineEdit(centralWidget);
        lineEdit_HeightValue->setObjectName(QStringLiteral("lineEdit_HeightValue"));
        lineEdit_HeightValue->setGeometry(QRect(20, 210, 81, 21));
        groupBox_Status = new QGroupBox(centralWidget);
        groupBox_Status->setObjectName(QStringLiteral("groupBox_Status"));
        groupBox_Status->setGeometry(QRect(120, 10, 191, 261));
        label_Mode = new QLabel(groupBox_Status);
        label_Mode->setObjectName(QStringLiteral("label_Mode"));
        label_Mode->setGeometry(QRect(10, 30, 91, 16));
        label_ModeValue = new QLabel(groupBox_Status);
        label_ModeValue->setObjectName(QStringLiteral("label_ModeValue"));
        label_ModeValue->setGeometry(QRect(10, 50, 81, 21));
        label_ModeValue->setFrameShape(QFrame::Panel);
        label_ModeValue->setFrameShadow(QFrame::Sunken);
        label_InterModeValue = new QLabel(groupBox_Status);
        label_InterModeValue->setObjectName(QStringLiteral("label_InterModeValue"));
        label_InterModeValue->setGeometry(QRect(10, 110, 81, 21));
        label_InterModeValue->setFrameShape(QFrame::Panel);
        label_InterModeValue->setFrameShadow(QFrame::Sunken);
        label_InterMode = new QLabel(groupBox_Status);
        label_InterMode->setObjectName(QStringLiteral("label_InterMode"));
        label_InterMode->setGeometry(QRect(10, 90, 91, 16));
        label_FlyReadyValue = new QLabel(groupBox_Status);
        label_FlyReadyValue->setObjectName(QStringLiteral("label_FlyReadyValue"));
        label_FlyReadyValue->setGeometry(QRect(10, 170, 81, 21));
        label_FlyReadyValue->setFrameShape(QFrame::Panel);
        label_FlyReadyValue->setFrameShadow(QFrame::Sunken);
        label_FlyReady = new QLabel(groupBox_Status);
        label_FlyReady->setObjectName(QStringLiteral("label_FlyReady"));
        label_FlyReady->setGeometry(QRect(10, 150, 91, 16));
        label_All_OutValue = new QLabel(groupBox_Status);
        label_All_OutValue->setObjectName(QStringLiteral("label_All_OutValue"));
        label_All_OutValue->setGeometry(QRect(10, 230, 81, 21));
        label_All_OutValue->setFrameShape(QFrame::Panel);
        label_All_OutValue->setFrameShadow(QFrame::Sunken);
        label_All_Out = new QLabel(groupBox_Status);
        label_All_Out->setObjectName(QStringLiteral("label_All_Out"));
        label_All_Out->setGeometry(QRect(10, 210, 81, 16));
        label_UltraStatusValue = new QLabel(groupBox_Status);
        label_UltraStatusValue->setObjectName(QStringLiteral("label_UltraStatusValue"));
        label_UltraStatusValue->setGeometry(QRect(100, 51, 81, 20));
        label_UltraStatusValue->setFrameShape(QFrame::Panel);
        label_UltraStatusValue->setFrameShadow(QFrame::Sunken);
        label_UltraStatus = new QLabel(groupBox_Status);
        label_UltraStatus->setObjectName(QStringLiteral("label_UltraStatus"));
        label_UltraStatus->setGeometry(QRect(100, 30, 81, 16));
        frame_AdjustButton = new QFrame(centralWidget);
        frame_AdjustButton->setObjectName(QStringLiteral("frame_AdjustButton"));
        frame_AdjustButton->setGeometry(QRect(340, 270, 291, 131));
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
        pushButton_SaveCoef->setGeometry(QRect(120, 50, 51, 31));
        pushButton_SendHeight = new QPushButton(centralWidget);
        pushButton_SendHeight->setObjectName(QStringLiteral("pushButton_SendHeight"));
        pushButton_SendHeight->setGeometry(QRect(20, 280, 81, 28));
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
        pushButton_Lock->setText(QApplication::translate("MainWindow", "LOCK", Q_NULLPTR));
        pushButton_UnLock->setText(QApplication::translate("MainWindow", "UNLOCK", Q_NULLPTR));
        groupBox_Status->setTitle(QApplication::translate("MainWindow", "Status", Q_NULLPTR));
        label_Mode->setText(QApplication::translate("MainWindow", "\346\250\241\345\274\217\357\274\232", Q_NULLPTR));
        label_ModeValue->setText(QString());
        label_InterModeValue->setText(QString());
        label_InterMode->setText(QApplication::translate("MainWindow", "\345\206\205\351\203\250\346\250\241\345\274\217\345\217\267\357\274\232", Q_NULLPTR));
        label_FlyReadyValue->setText(QString());
        label_FlyReady->setText(QApplication::translate("MainWindow", "\351\224\201\357\274\232", Q_NULLPTR));
        label_All_OutValue->setText(QString());
        label_All_Out->setText(QApplication::translate("MainWindow", "\346\200\245\345\201\234\357\274\232", Q_NULLPTR));
        label_UltraStatusValue->setText(QString());
        label_UltraStatus->setText(QApplication::translate("MainWindow", "\350\266\205\345\243\260\347\212\266\346\200\201\357\274\232", Q_NULLPTR));
        pushButton_Right->setText(QApplication::translate("MainWindow", "\345\217\263", Q_NULLPTR));
        pushButton_Front->setText(QApplication::translate("MainWindow", "\345\211\215", Q_NULLPTR));
        pushButton_Left->setText(QApplication::translate("MainWindow", "\345\267\246", Q_NULLPTR));
        pushButton_Back->setText(QApplication::translate("MainWindow", "\345\220\216", Q_NULLPTR));
        pushButton_SaveCoef->setText(QApplication::translate("MainWindow", "\345\255\230\345\202\250", Q_NULLPTR));
        pushButton_SendHeight->setText(QApplication::translate("MainWindow", "Send", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
