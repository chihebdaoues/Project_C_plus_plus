/****************************************************************************
** Meta object code from reading C++ file 'employeform.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Application/employeform.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'employeform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_EmployeForm[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
      28,   12,   12,   12, 0x08,
      48,   44,   12,   12, 0x08,
      66,   12,   12,   12, 0x08,
      83,   12,   12,   12, 0x08,
     100,   12,   12,   12, 0x08,
     116,   12,   12,   12, 0x08,
     134,   12,   12,   12, 0x08,
     152,   12,   12,   12, 0x08,
     168,   12,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_EmployeForm[] = {
    "EmployeForm\0\0goBackScreen()\0updateForm(int)\0"
    "val\0updateButton(int)\0updateSelected()\0"
    "pbSupp_clicked()\0pbMod_clicked()\0"
    "pbAjout_clicked()\0pbClear_clicked()\0"
    "search(QString)\0on_pbSearch_clicked()\0"
};

void EmployeForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        EmployeForm *_t = static_cast<EmployeForm *>(_o);
        switch (_id) {
        case 0: _t->goBackScreen(); break;
        case 1: _t->updateForm((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->updateButton((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->updateSelected(); break;
        case 4: _t->pbSupp_clicked(); break;
        case 5: _t->pbMod_clicked(); break;
        case 6: _t->pbAjout_clicked(); break;
        case 7: _t->pbClear_clicked(); break;
        case 8: _t->search((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: _t->on_pbSearch_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData EmployeForm::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject EmployeForm::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_EmployeForm,
      qt_meta_data_EmployeForm, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &EmployeForm::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *EmployeForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *EmployeForm::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_EmployeForm))
        return static_cast<void*>(const_cast< EmployeForm*>(this));
    return QWidget::qt_metacast(_clname);
}

int EmployeForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void EmployeForm::goBackScreen()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
