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
    QLabel *label_HeightValue;
    QFrame *frame_Log;
    QLineEdit *lineEdit_SerialPortOutput;
    QPushButton *pushButton_SerialPortSend;
    QCheckBox *checkBox_ShowInput;
    QPlainTextEdit *plainTextEdit;
    QPushButton *pushButton_incHeight;
    QPushButton *pushButton_decHeight;
    QPushButton *pushButton_Lock;
    QPushButton *pushButton_UnLock;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(408, 382);
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
        label_Height->setGeometry(QRect(20, 170, 91, 16));
        label_HeightValue = new QLabel(centralWidget);
        label_HeightValue->setObjectName(QStringLiteral("label_HeightValue"));
        label_HeightValue->setGeometry(QRect(20, 200, 81, 21));
        label_HeightValue->setFrameShape(QFrame::Panel);
        label_HeightValue->setFrameShadow(QFrame::Sunken);
        label_HeightValue->setScaledContents(false);
        frame_Log = new QFrame(centralWidget);
        frame_Log->setObjectName(QStringLiteral("frame_Log"));
        frame_Log->setGeometry(QRect(130, 10, 271, 261));
        frame_Log->setFrameShape(QFrame::StyledPanel);
        frame_Log->setFrameShadow(QFrame::Raised);
        lineEdit_SerialPortOutput = new QLineEdit(frame_Log);
        lineEdit_SerialPortOutput->setObjectName(QStringLiteral("lineEdit_SerialPortOutput"));
        lineEdit_SerialPortOutput->setGeometry(QRect(10, 220, 111, 21));
        pushButton_SerialPortSend = new QPushButton(frame_Log);
        pushButton_SerialPortSend->setObjectName(QStringLiteral("pushButton_SerialPortSend"));
        pushButton_SerialPortSend->setGeometry(QRect(130, 220, 61, 21));
        checkBox_ShowInput = new QCheckBox(frame_Log);
        checkBox_ShowInput->setObjectName(QStringLiteral("checkBox_ShowInput"));
        checkBox_ShowInput->setGeometry(QRect(200, 220, 61, 21));
        plainTextEdit = new QPlainTextEdit(frame_Log);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(10, 10, 251, 201));
        pushButton_incHeight = new QPushButton(centralWidget);
        pushButton_incHeight->setObjectName(QStringLiteral("pushButton_incHeight"));
        pushButton_incHeight->setGeometry(QRect(20, 230, 41, 31));
        pushButton_decHeight = new QPushButton(centralWidget);
        pushButton_decHeight->setObjectName(QStringLiteral("pushButton_decHeight"));
        pushButton_decHeight->setGeometry(QRect(60, 230, 41, 31));
        pushButton_Lock = new QPushButton(centralWidget);
        pushButton_Lock->setObjectName(QStringLiteral("pushButton_Lock"));
        pushButton_Lock->setGeometry(QRect(20, 280, 121, 71));
        pushButton_Lock->setStyleSheet(QStringLiteral("background-color: red; border-color: red;"));
        pushButton_UnLock = new QPushButton(centralWidget);
        pushButton_UnLock->setObjectName(QStringLiteral("pushButton_UnLock"));
        pushButton_UnLock->setGeometry(QRect(160, 280, 121, 71));
        pushButton_UnLock->setStyleSheet(QStringLiteral("background-color: red; border-color: red;"));
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
        label_HeightValue->setText(QString());
        pushButton_SerialPortSend->setText(QApplication::translate("MainWindow", "\345\217\221\351\200\201", Q_NULLPTR));
        checkBox_ShowInput->setText(QApplication::translate("MainWindow", "Show", Q_NULLPTR));
        pushButton_incHeight->setText(QApplication::translate("MainWindow", "+", Q_NULLPTR));
        pushButton_decHeight->setText(QApplication::translate("MainWindow", "-", Q_NULLPTR));
        pushButton_Lock->setText(QApplication::translate("MainWindow", "LOCK", Q_NULLPTR));
        pushButton_UnLock->setText(QApplication::translate("MainWindow", "UNLOCK", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
