/****************************************************************************
** Meta object code from reading C++ file 'CWFilteringEditor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "CWFilteringEditor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CWFilteringEditor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CWFilterUsageEdit_t {
    QByteArrayData data[8];
    char stringdata0[123];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CWFilterUsageEdit_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CWFilterUsageEdit_t qt_meta_stringdata_CWFilterUsageEdit = {
    {
QT_MOC_LITERAL(0, 0, 17), // "CWFilterUsageEdit"
QT_MOC_LITERAL(1, 18, 27), // "slotCalibrationStateChanged"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 5), // "state"
QT_MOC_LITERAL(4, 53, 23), // "slotFittingStateChanged"
QT_MOC_LITERAL(5, 77, 19), // "slotSubtractToggled"
QT_MOC_LITERAL(6, 97, 7), // "checked"
QT_MOC_LITERAL(7, 105, 17) // "slotDivideToggled"

    },
    "CWFilterUsageEdit\0slotCalibrationStateChanged\0"
    "\0state\0slotFittingStateChanged\0"
    "slotSubtractToggled\0checked\0"
    "slotDivideToggled"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CWFilterUsageEdit[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x0a /* Public */,
       4,    1,   37,    2, 0x0a /* Public */,
       5,    1,   40,    2, 0x0a /* Public */,
       7,    1,   43,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Bool,    6,

       0        // eod
};

void CWFilterUsageEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CWFilterUsageEdit *_t = static_cast<CWFilterUsageEdit *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotCalibrationStateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->slotFittingStateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->slotSubtractToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->slotDivideToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject CWFilterUsageEdit::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_CWFilterUsageEdit.data,
      qt_meta_data_CWFilterUsageEdit,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CWFilterUsageEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CWFilterUsageEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CWFilterUsageEdit.stringdata0))
        return static_cast<void*>(const_cast< CWFilterUsageEdit*>(this));
    return QFrame::qt_metacast(_clname);
}

int CWFilterUsageEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
