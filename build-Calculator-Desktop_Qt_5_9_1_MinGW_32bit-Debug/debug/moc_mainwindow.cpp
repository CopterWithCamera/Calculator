/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Calculator/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[43];
    char stringdata0[1010];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 15), // "Open_SerialPort"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 8), // "QString&"
QT_MOC_LITERAL(4, 37, 8), // "portname"
QT_MOC_LITERAL(5, 46, 4), // "Baud"
QT_MOC_LITERAL(6, 51, 16), // "Open_SerialPort2"
QT_MOC_LITERAL(7, 68, 16), // "Close_SerialPort"
QT_MOC_LITERAL(8, 85, 17), // "Close_SerialPort2"
QT_MOC_LITERAL(9, 103, 7), // "SendCmd"
QT_MOC_LITERAL(10, 111, 3), // "cmd"
QT_MOC_LITERAL(11, 115, 8), // "TransCmd"
QT_MOC_LITERAL(12, 124, 42), // "on_pushButton_UpdateSerialPor..."
QT_MOC_LITERAL(13, 167, 34), // "on_checkBox_SerialPortOpen_cl..."
QT_MOC_LITERAL(14, 202, 44), // "on_pushButton_UpdateSerialPor..."
QT_MOC_LITERAL(15, 247, 36), // "on_checkBox_SerialPortOpen_2_..."
QT_MOC_LITERAL(16, 284, 22), // "SerialPort_Opened_SLOT"
QT_MOC_LITERAL(17, 307, 22), // "SerialPort_Closed_SLOT"
QT_MOC_LITERAL(18, 330, 23), // "SerialPort_Written_SLOT"
QT_MOC_LITERAL(19, 354, 26), // "on_pushButton_Lock_clicked"
QT_MOC_LITERAL(20, 381, 28), // "on_pushButton_UnLock_clicked"
QT_MOC_LITERAL(21, 410, 32), // "on_pushButton_SendHeight_clicked"
QT_MOC_LITERAL(22, 443, 31), // "on_pushButton_incHeight_clicked"
QT_MOC_LITERAL(23, 475, 31), // "on_pushButton_decHeight_clicked"
QT_MOC_LITERAL(24, 507, 36), // "on_pushButton_SerialPortSend_..."
QT_MOC_LITERAL(25, 544, 12), // "StatusUpdate"
QT_MOC_LITERAL(26, 557, 4), // "type"
QT_MOC_LITERAL(27, 562, 5), // "value"
QT_MOC_LITERAL(28, 568, 27), // "on_pushButton_Front_clicked"
QT_MOC_LITERAL(29, 596, 26), // "on_pushButton_Back_clicked"
QT_MOC_LITERAL(30, 623, 26), // "on_pushButton_Left_clicked"
QT_MOC_LITERAL(31, 650, 27), // "on_pushButton_Right_clicked"
QT_MOC_LITERAL(32, 678, 30), // "on_pushButton_SaveCoef_clicked"
QT_MOC_LITERAL(33, 709, 33), // "on_pushButton_ClearOffset_cli..."
QT_MOC_LITERAL(34, 743, 29), // "on_pushButton_SendPID_clicked"
QT_MOC_LITERAL(35, 773, 29), // "on_pushButton_ReadPID_clicked"
QT_MOC_LITERAL(36, 803, 31), // "on_comboBox_currentIndexChanged"
QT_MOC_LITERAL(37, 835, 4), // "arg1"
QT_MOC_LITERAL(38, 840, 30), // "on_pushButton_Gyro_Cal_clicked"
QT_MOC_LITERAL(39, 871, 29), // "on_pushButton_Acc_Cal_clicked"
QT_MOC_LITERAL(40, 901, 30), // "on_pushButton_Comp_Cal_clicked"
QT_MOC_LITERAL(41, 932, 37), // "on_pushButton_SendCtrlCommend..."
QT_MOC_LITERAL(42, 970, 39) // "on_pushButton_SendHeightComme..."

    },
    "MainWindow\0Open_SerialPort\0\0QString&\0"
    "portname\0Baud\0Open_SerialPort2\0"
    "Close_SerialPort\0Close_SerialPort2\0"
    "SendCmd\0cmd\0TransCmd\0"
    "on_pushButton_UpdateSerialPortList_clicked\0"
    "on_checkBox_SerialPortOpen_clicked\0"
    "on_pushButton_UpdateSerialPortList_2_clicked\0"
    "on_checkBox_SerialPortOpen_2_clicked\0"
    "SerialPort_Opened_SLOT\0SerialPort_Closed_SLOT\0"
    "SerialPort_Written_SLOT\0"
    "on_pushButton_Lock_clicked\0"
    "on_pushButton_UnLock_clicked\0"
    "on_pushButton_SendHeight_clicked\0"
    "on_pushButton_incHeight_clicked\0"
    "on_pushButton_decHeight_clicked\0"
    "on_pushButton_SerialPortSend_clicked\0"
    "StatusUpdate\0type\0value\0"
    "on_pushButton_Front_clicked\0"
    "on_pushButton_Back_clicked\0"
    "on_pushButton_Left_clicked\0"
    "on_pushButton_Right_clicked\0"
    "on_pushButton_SaveCoef_clicked\0"
    "on_pushButton_ClearOffset_clicked\0"
    "on_pushButton_SendPID_clicked\0"
    "on_pushButton_ReadPID_clicked\0"
    "on_comboBox_currentIndexChanged\0arg1\0"
    "on_pushButton_Gyro_Cal_clicked\0"
    "on_pushButton_Acc_Cal_clicked\0"
    "on_pushButton_Comp_Cal_clicked\0"
    "on_pushButton_SendCtrlCommend_clicked\0"
    "on_pushButton_SendHeightCommend_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      34,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,  184,    2, 0x06 /* Public */,
       6,    2,  189,    2, 0x06 /* Public */,
       7,    0,  194,    2, 0x06 /* Public */,
       8,    0,  195,    2, 0x06 /* Public */,
       9,    1,  196,    2, 0x06 /* Public */,
      11,    1,  199,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    0,  202,    2, 0x08 /* Private */,
      13,    0,  203,    2, 0x08 /* Private */,
      14,    0,  204,    2, 0x08 /* Private */,
      15,    0,  205,    2, 0x08 /* Private */,
      16,    0,  206,    2, 0x08 /* Private */,
      17,    0,  207,    2, 0x08 /* Private */,
      18,    0,  208,    2, 0x08 /* Private */,
      19,    0,  209,    2, 0x08 /* Private */,
      20,    0,  210,    2, 0x08 /* Private */,
      21,    0,  211,    2, 0x08 /* Private */,
      22,    0,  212,    2, 0x08 /* Private */,
      23,    0,  213,    2, 0x08 /* Private */,
      24,    0,  214,    2, 0x08 /* Private */,
      25,    2,  215,    2, 0x08 /* Private */,
      28,    0,  220,    2, 0x08 /* Private */,
      29,    0,  221,    2, 0x08 /* Private */,
      30,    0,  222,    2, 0x08 /* Private */,
      31,    0,  223,    2, 0x08 /* Private */,
      32,    0,  224,    2, 0x08 /* Private */,
      33,    0,  225,    2, 0x08 /* Private */,
      34,    0,  226,    2, 0x08 /* Private */,
      35,    0,  227,    2, 0x08 /* Private */,
      36,    1,  228,    2, 0x08 /* Private */,
      38,    0,  231,    2, 0x08 /* Private */,
      39,    0,  232,    2, 0x08 /* Private */,
      40,    0,  233,    2, 0x08 /* Private */,
      41,    0,  234,    2, 0x08 /* Private */,
      42,    0,  235,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    4,    5,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,   10,
    QMetaType::Void, QMetaType::QByteArray,   10,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Char, QMetaType::QByteArray,   26,   27,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   37,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->Open_SerialPort((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->Open_SerialPort2((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->Close_SerialPort(); break;
        case 3: _t->Close_SerialPort2(); break;
        case 4: _t->SendCmd((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 5: _t->TransCmd((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 6: _t->on_pushButton_UpdateSerialPortList_clicked(); break;
        case 7: _t->on_checkBox_SerialPortOpen_clicked(); break;
        case 8: _t->on_pushButton_UpdateSerialPortList_2_clicked(); break;
        case 9: _t->on_checkBox_SerialPortOpen_2_clicked(); break;
        case 10: _t->SerialPort_Opened_SLOT(); break;
        case 11: _t->SerialPort_Closed_SLOT(); break;
        case 12: _t->SerialPort_Written_SLOT(); break;
        case 13: _t->on_pushButton_Lock_clicked(); break;
        case 14: _t->on_pushButton_UnLock_clicked(); break;
        case 15: _t->on_pushButton_SendHeight_clicked(); break;
        case 16: _t->on_pushButton_incHeight_clicked(); break;
        case 17: _t->on_pushButton_decHeight_clicked(); break;
        case 18: _t->on_pushButton_SerialPortSend_clicked(); break;
        case 19: _t->StatusUpdate((*reinterpret_cast< char(*)>(_a[1])),(*reinterpret_cast< QByteArray(*)>(_a[2]))); break;
        case 20: _t->on_pushButton_Front_clicked(); break;
        case 21: _t->on_pushButton_Back_clicked(); break;
        case 22: _t->on_pushButton_Left_clicked(); break;
        case 23: _t->on_pushButton_Right_clicked(); break;
        case 24: _t->on_pushButton_SaveCoef_clicked(); break;
        case 25: _t->on_pushButton_ClearOffset_clicked(); break;
        case 26: _t->on_pushButton_SendPID_clicked(); break;
        case 27: _t->on_pushButton_ReadPID_clicked(); break;
        case 28: _t->on_comboBox_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 29: _t->on_pushButton_Gyro_Cal_clicked(); break;
        case 30: _t->on_pushButton_Acc_Cal_clicked(); break;
        case 31: _t->on_pushButton_Comp_Cal_clicked(); break;
        case 32: _t->on_pushButton_SendCtrlCommend_clicked(); break;
        case 33: _t->on_pushButton_SendHeightCommend_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MainWindow::*_t)(QString & , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::Open_SerialPort)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)(QString & , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::Open_SerialPort2)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::Close_SerialPort)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::Close_SerialPort2)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)(QByteArray );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::SendCmd)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)(QByteArray );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::TransCmd)) {
                *result = 5;
                return;
            }
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 34)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 34;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 34)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 34;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::Open_SerialPort(QString & _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MainWindow::Open_SerialPort2(QString & _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MainWindow::Close_SerialPort()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void MainWindow::Close_SerialPort2()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void MainWindow::SendCmd(QByteArray _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void MainWindow::TransCmd(QByteArray _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
