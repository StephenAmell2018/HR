/****************************************************************************
** Meta object code from reading C++ file 'cat.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "cat.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cat.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_cat_t {
    QByteArrayData data[10];
    char stringdata0[74];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cat_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cat_t qt_meta_stringdata_cat = {
    {
QT_MOC_LITERAL(0, 0, 3), // "cat"
QT_MOC_LITERAL(1, 4, 14), // "camera_clicked"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 8), // "getFrame"
QT_MOC_LITERAL(4, 29, 6), // "getROI"
QT_MOC_LITERAL(5, 36, 11), // "get_ipl_roi"
QT_MOC_LITERAL(6, 48, 9), // "IplImage*"
QT_MOC_LITERAL(7, 58, 3), // "src"
QT_MOC_LITERAL(8, 62, 6), // "CvRect"
QT_MOC_LITERAL(9, 69, 4) // "rect"

    },
    "cat\0camera_clicked\0\0getFrame\0getROI\0"
    "get_ipl_roi\0IplImage*\0src\0CvRect\0rect"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cat[] = {

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
       1,    0,   34,    2, 0x08 /* Private */,
       3,    0,   35,    2, 0x08 /* Private */,
       4,    0,   36,    2, 0x08 /* Private */,
       5,    2,   37,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    0x80000000 | 6, 0x80000000 | 6, 0x80000000 | 8,    7,    9,

       0        // eod
};

void cat::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        cat *_t = static_cast<cat *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->camera_clicked(); break;
        case 1: _t->getFrame(); break;
        case 2: _t->getROI(); break;
        case 3: { IplImage* _r = _t->get_ipl_roi((*reinterpret_cast< IplImage*(*)>(_a[1])),(*reinterpret_cast< CvRect(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< IplImage**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject cat::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_cat.data,
      qt_meta_data_cat,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *cat::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cat::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_cat.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int cat::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
