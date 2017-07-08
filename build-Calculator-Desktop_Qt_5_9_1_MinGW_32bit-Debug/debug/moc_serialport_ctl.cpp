/****************************************************************************
** Meta object code from reading C++ file 'serialport_ctl.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Calculator/serialport_ctl.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'serialport_ctl.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SerialPort_Ctl_t {
    QByteArrayData data[16];
    char stringdata0[216];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SerialPort_Ctl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SerialPort_Ctl_t qt_meta_stringdata_SerialPort_Ctl = {
    {
QT_MOC_LITERAL(0, 0, 14), // "SerialPort_Ctl"
QT_MOC_LITERAL(1, 15, 17), // "SerialPort_Opened"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 17), // "SerialPort_Closed"
QT_MOC_LITERAL(4, 52, 18), // "SerialPort_Written"
QT_MOC_LITERAL(5, 71, 15), // "SerialPort_Read"
QT_MOC_LITERAL(6, 87, 15), // "SerialPort_Open"
QT_MOC_LITERAL(7, 103, 8), // "QString&"
QT_MOC_LITERAL(8, 112, 8), // "portname"
QT_MOC_LITERAL(9, 121, 4), // "Baud"
QT_MOC_LITERAL(10, 126, 16), // "SerialPort_Close"
QT_MOC_LITERAL(11, 143, 21), // "SerialPort_bytesWrite"
QT_MOC_LITERAL(12, 165, 8), // "sendData"
QT_MOC_LITERAL(13, 174, 20), // "SerialPort_bytesRead"
QT_MOC_LITERAL(14, 195, 11), // "QByteArray&"
QT_MOC_LITERAL(15, 207, 8) // "readData"

    },
    "SerialPort_Ctl\0SerialPort_Opened\0\0"
    "SerialPort_Closed\0SerialPort_Written\0"
    "SerialPort_Read\0SerialPort_Open\0"
    "QString&\0portname\0Baud\0SerialPort_Close\0"
    "SerialPort_bytesWrite\0sendData\0"
    "SerialPort_bytesRead\0QByteArray&\0"
    "readData"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SerialPort_Ctl[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    0,   55,    2, 0x06 /* Public */,
       4,    0,   56,    2, 0x06 /* Public */,
       5,    0,   57,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    2,   58,    2, 0x0a /* Public */,
      10,    0,   63,    2, 0x0a /* Public */,
      11,    1,   64,    2, 0x0a /* Public */,
      13,    1,   67,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 7, QMetaType::Int,    8,    9,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,   12,
    QMetaType::Void, 0x80000000 | 14,   15,

       0        // eod
};

void SerialPort_Ctl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SerialPort_Ctl *_t = static_cast<SerialPort_Ctl *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SerialPort_Opened(); break;
        case 1: _t->SerialPort_Closed(); break;
        case 2: _t->SerialPort_Written(); break;
        case 3: _t->SerialPort_Read(); break;
        case 4: _t->SerialPort_Open((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->SerialPort_Close(); break;
        case 6: _t->SerialPort_bytesWrite((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 7: _t->SerialPort_bytesRead((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SerialPort_Ctl::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SerialPort_Ctl::SerialPort_Opened)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (SerialPort_Ctl::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SerialPort_Ctl::SerialPort_Closed)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (SerialPort_Ctl::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SerialPort_Ctl::SerialPort_Written)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (SerialPort_Ctl::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SerialPort_Ctl::SerialPort_Read)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject SerialPort_Ctl::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SerialPort_Ctl.data,
      qt_meta_data_SerialPort_Ctl,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SerialPort_Ctl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SerialPort_Ctl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SerialPort_Ctl.stringdata0))
        return static_cast<void*>(const_cast< SerialPort_Ctl*>(this));
    return QObject::qt_metacast(_clname);
}

int SerialPort_Ctl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void SerialPort_Ctl::SerialPort_Opened()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void SerialPort_Ctl::SerialPort_Closed()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void SerialPort_Ctl::SerialPort_Written()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void SerialPort_Ctl::SerialPort_Read()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
