/****************************************************************************
** Meta object code from reading C++ file 'dialog.h'
**
** Created: Mon Dec 26 19:43:33 2011
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "dialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ByteConverterDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      21,   20,   20,   20, 0x08,
      41,   20,   20,   20, 0x08,
      61,   20,   20,   20, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ByteConverterDialog[] = {
    "ByteConverterDialog\0\0decChanged(QString)\0"
    "hexChanged(QString)\0binChanged(QString)\0"
};

void ByteConverterDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ByteConverterDialog *_t = static_cast<ByteConverterDialog *>(_o);
        switch (_id) {
        case 0: _t->decChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->hexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->binChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ByteConverterDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ByteConverterDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ByteConverterDialog,
      qt_meta_data_ByteConverterDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ByteConverterDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ByteConverterDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ByteConverterDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ByteConverterDialog))
        return static_cast<void*>(const_cast< ByteConverterDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int ByteConverterDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
