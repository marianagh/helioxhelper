/****************************************************************************
** Meta object code from reading C++ file 'helioxhelper.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "helioxhelper.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'helioxhelper.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_HelioxHelper[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      21,   14,   13,   13, 0x08,
      70,   13,   13,   13, 0x08,
      94,   13,   13,   13, 0x08,
     123,  111,   13,   13, 0x08,
     164,  157,   13,   13, 0x08,
     205,  194,   13,   13, 0x08,
     237,   13,   13,   13, 0x08,
     256,   13,   13,   13, 0x08,
     268,   13,   13,   13, 0x08,
     285,   13,   13,   13, 0x08,
     307,   13,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_HelioxHelper[] = {
    "HelioxHelper\0\0reason\0"
    "iconActivated(QSystemTrayIcon::ActivationReason)\0"
    "troggleShowMainWindow()\0minimizeWindow()\0"
    "string,prop\0startApplication(QString,QString)\0"
    "string\0activateWindowSignal(QString)\0"
    "prop,value\0changeLanguage(QString,QString)\0"
    "showLanguageMenu()\0showAbout()\0"
    "settingsWindow()\0reloadConfiguration()\0"
    "showMenu()\0"
};

void HelioxHelper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        HelioxHelper *_t = static_cast<HelioxHelper *>(_o);
        switch (_id) {
        case 0: _t->iconActivated((*reinterpret_cast< QSystemTrayIcon::ActivationReason(*)>(_a[1]))); break;
        case 1: _t->troggleShowMainWindow(); break;
        case 2: _t->minimizeWindow(); break;
        case 3: _t->startApplication((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 4: _t->activateWindowSignal((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->changeLanguage((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 6: _t->showLanguageMenu(); break;
        case 7: _t->showAbout(); break;
        case 8: _t->settingsWindow(); break;
        case 9: _t->reloadConfiguration(); break;
        case 10: _t->showMenu(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData HelioxHelper::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject HelioxHelper::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_HelioxHelper,
      qt_meta_data_HelioxHelper, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &HelioxHelper::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *HelioxHelper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *HelioxHelper::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_HelioxHelper))
        return static_cast<void*>(const_cast< HelioxHelper*>(this));
    return QWidget::qt_metacast(_clname);
}

int HelioxHelper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
