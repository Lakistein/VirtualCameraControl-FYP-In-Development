/****************************************************************************
** Meta object code from reading C++ file 'VCCPane.h'
**
** Created: Sun 22. May 00:12:48 2016
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "VCCPane.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'VCCPane.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_VCCPaneAction[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_VCCPaneAction[] = {
    "VCCPaneAction\0"
};

void VCCPaneAction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData VCCPaneAction::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject VCCPaneAction::staticMetaObject = {
    { &DzPaneAction::staticMetaObject, qt_meta_stringdata_VCCPaneAction,
      qt_meta_data_VCCPaneAction, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &VCCPaneAction::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *VCCPaneAction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *VCCPaneAction::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_VCCPaneAction))
        return static_cast<void*>(const_cast< VCCPaneAction*>(this));
    return DzPaneAction::qt_metacast(_clname);
}

int VCCPaneAction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DzPaneAction::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_VCCPane[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       9,    8,    8,    8, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_VCCPane[] = {
    "VCCPane\0\0GenerateCamera()\0"
};

void VCCPane::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        VCCPane *_t = static_cast<VCCPane *>(_o);
        switch (_id) {
        case 0: _t->GenerateCamera(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData VCCPane::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject VCCPane::staticMetaObject = {
    { &DzPane::staticMetaObject, qt_meta_stringdata_VCCPane,
      qt_meta_data_VCCPane, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &VCCPane::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *VCCPane::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *VCCPane::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_VCCPane))
        return static_cast<void*>(const_cast< VCCPane*>(this));
    return DzPane::qt_metacast(_clname);
}

int VCCPane::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DzPane::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
