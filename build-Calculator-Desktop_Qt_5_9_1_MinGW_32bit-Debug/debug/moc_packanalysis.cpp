/****************************************************************************
** Meta object code from reading C++ file 'packanalysis.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Calculator/packanalysis.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'packanalysis.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PackAnalysis_t {
    QByteArrayData data[10];
    char stringdata0[90];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PackAnalysis_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PackAnalysis_t qt_meta_stringdata_PackAnalysis = {
    {
QT_MOC_LITERAL(0, 0, 12), // "PackAnalysis"
QT_MOC_LITERAL(1, 13, 13), // "StatusUpdated"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 4), // "type"
QT_MOC_LITERAL(4, 33, 5), // "value"
QT_MOC_LITERAL(5, 39, 12), // "DataImported"
QT_MOC_LITERAL(6, 52, 10), // "ImportData"
QT_MOC_LITERAL(7, 63, 11), // "QByteArray&"
QT_MOC_LITERAL(8, 75, 7), // "newData"
QT_MOC_LITERAL(9, 83, 6) // "unPack"

    },
    "PackAnalysis\0StatusUpdated\0\0type\0value\0"
    "DataImported\0ImportData\0QByteArray&\0"
    "newData\0unPack"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PackAnalysis[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   34,    2, 0x06 /* Public */,
       5,    0,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   40,    2, 0x0a /* Public */,
       9,    0,   43,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Char, QMetaType::QByteArray,    3,    4,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void,

       0        // eod
};

void PackAnalysis::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PackAnalysis *_t = static_cast<PackAnalysis *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->StatusUpdated((*reinterpret_cast< char(*)>(_a[1])),(*reinterpret_cast< QByteArray(*)>(_a[2]))); break;
        case 1: _t->DataImported(); break;
        case 2: _t->ImportData((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 3: _t->unPack(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (PackAnalysis::*_t)(char , QByteArray );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PackAnalysis::StatusUpdated)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (PackAnalysis::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PackAnalysis::DataImported)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject PackAnalysis::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PackAnalysis.data,
      qt_meta_data_PackAnalysis,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *PackAnalysis::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PackAnalysis::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PackAnalysis.stringdata0))
        return static_cast<void*>(const_cast< PackAnalysis*>(this));
    return QObject::qt_metacast(_clname);
}

int PackAnalysis::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void PackAnalysis::StatusUpdated(char _t1, QByteArray _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PackAnalysis::DataImported()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
