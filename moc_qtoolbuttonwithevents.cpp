/****************************************************************************
** Meta object code from reading C++ file 'qtoolbuttonwithevents.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qtoolbuttonwithevents.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtoolbuttonwithevents.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QToolButtonWithEvents[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      50,   23,   22,   22, 0x05,

 // slots: signature, parameters, type, tag, flags
      87,   81,   22,   22, 0x0a,
     109,   22,   22,   22, 0x0a,
     133,   22,   22,   22, 0x0a,
     160,   22,   22,   22, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QToolButtonWithEvents[] = {
    "QToolButtonWithEvents\0\0"
    "m_property,m_propertyValue\0"
    "buttonClicked(QString,QString)\0label\0"
    "readCaption(QString*)\0buttonClickedFunction()\0"
    "reactivateBlockedSignals()\0"
    "setFalseSpeechingVar()\0"
};

void QToolButtonWithEvents::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QToolButtonWithEvents *_t = static_cast<QToolButtonWithEvents *>(_o);
        switch (_id) {
        case 0: _t->buttonClicked((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 1: _t->readCaption((*reinterpret_cast< QString*(*)>(_a[1]))); break;
        case 2: _t->buttonClickedFunction(); break;
        case 3: _t->reactivateBlockedSignals(); break;
        case 4: _t->setFalseSpeechingVar(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QToolButtonWithEvents::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QToolButtonWithEvents::staticMetaObject = {
    { &QToolButton::staticMetaObject, qt_meta_stringdata_QToolButtonWithEvents,
      qt_meta_data_QToolButtonWithEvents, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QToolButtonWithEvents::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QToolButtonWithEvents::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QToolButtonWithEvents::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QToolButtonWithEvents))
        return static_cast<void*>(const_cast< QToolButtonWithEvents*>(this));
    return QToolButton::qt_metacast(_clname);
}

int QToolButtonWithEvents::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QToolButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void QToolButtonWithEvents::buttonClicked(QString _t1, QString _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
