/****************************************************************************
** Meta object code from reading C++ file 'qactionwithevents.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qactionwithevents.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qactionwithevents.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QActionWithEvents[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      46,   19,   18,   18, 0x05,

 // slots: signature, parameters, type, tag, flags
      77,   18,   18,   18, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QActionWithEvents[] = {
    "QActionWithEvents\0\0m_property,m_propertyValue\0"
    "actionClicked(QString,QString)\0"
    "actionClickedFunction()\0"
};

void QActionWithEvents::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QActionWithEvents *_t = static_cast<QActionWithEvents *>(_o);
        switch (_id) {
        case 0: _t->actionClicked((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 1: _t->actionClickedFunction(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QActionWithEvents::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QActionWithEvents::staticMetaObject = {
    { &QAction::staticMetaObject, qt_meta_stringdata_QActionWithEvents,
      qt_meta_data_QActionWithEvents, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QActionWithEvents::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QActionWithEvents::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QActionWithEvents::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QActionWithEvents))
        return static_cast<void*>(const_cast< QActionWithEvents*>(this));
    return QAction::qt_metacast(_clname);
}

int QActionWithEvents::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAction::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void QActionWithEvents::actionClicked(QString _t1, QString _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
