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
    QByteArrayData data[18];
    char stringdata0[218];
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
QT_MOC_LITERAL(5, 71, 10), // "TranstoAna"
QT_MOC_LITERAL(6, 82, 11), // "QByteArray&"
QT_MOC_LITERAL(7, 94, 4), // "data"
QT_MOC_LITERAL(8, 99, 15), // "SerialPort_Open"
QT_MOC_LITERAL(9, 115, 8), // "QString&"
QT_MOC_LITERAL(10, 124, 8), // "portname"
QT_MOC_LITERAL(11, 133, 4), // "Baud"
QT_MOC_LITERAL(12, 138, 16), // "SerialPort_Close"
QT_MOC_LITERAL(13, 155, 21), // "SerialPort_bytesWrite"
QT_MOC_LITERAL(14, 177, 8), // "sendData"
QT_MOC_LITERAL(15, 186, 12), // "CallAnalysis"
QT_MOC_LITERAL(16, 199, 8), // "Readport"
QT_MOC_LITERAL(17, 208, 9) // "Writeport"

    },
    "SerialPort_Ctl\0SerialPort_Opened\0\0"
    "SerialPort_Closed\0SerialPort_Written\0"
    "TranstoAna\0QByteArray&\0data\0SerialPort_Open\0"
    "QString&\0portname\0Baud\0SerialPort_Close\0"
    "SerialPort_bytesWrite\0sendData\0"
    "CallAnalysis\0Readport\0Writeport"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SerialPort_Ctl[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,
       3,    0,   65,    2, 0x06 /* Public */,
       4,    0,   66,    2, 0x06 /* Public */,
       5,    1,   67,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    2,   70,    2, 0x0a /* Public */,
      12,    0,   75,    2, 0x0a /* Public */,
      13,    1,   76,    2, 0x0a /* Public */,
      15,    0,   79,    2, 0x08 /* Private */,
      16,    0,   80,    2, 0x08 /* Private */,
      17,    0,   81,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 9, QMetaType::Int,   10,   11,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

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
        case 3: _t->TranstoAna((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 4: _t->SerialPort_Open((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->SerialPort_Close(); break;
        case 6: _t->SerialPort_bytesWrite((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 7: _t->CallAnalysis(); break;
        case 8: _t->Readport(); break;
        case 9: _t->Writeport(); break;
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
            typedef void (SerialPort_Ctl::*_t)(QByteArray & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SerialPort_Ctl::TranstoAna)) {
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
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
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
void SerialPort_Ctl::TranstoAna(QByteArray & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
