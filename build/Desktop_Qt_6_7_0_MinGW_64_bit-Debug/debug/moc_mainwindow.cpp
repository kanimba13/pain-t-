/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../mainwindow.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSMainWindowENDCLASS = QtMocHelpers::stringData(
    "MainWindow",
    "dibujarLinea",
    "",
    "inicio",
    "final",
    "color",
    "tama",
    "dibujarCuadrado",
    "start",
    "end",
    "on_actionGuardar_triggered",
    "on_actionAbrir_triggered",
    "on_actionLimpiar_triggered",
    "on_actionGrosor_triggered",
    "on_actionColor_triggered",
    "on_actionBorrador_triggered",
    "on_actionLibre_triggered",
    "on_actionLinea_triggered",
    "on_actionCuadrado_triggered"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMainWindowENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    4,   80,    2, 0x0a,    1 /* Public */,
       7,    4,   89,    2, 0x0a,    6 /* Public */,
      10,    0,   98,    2, 0x08,   11 /* Private */,
      11,    0,   99,    2, 0x08,   12 /* Private */,
      12,    0,  100,    2, 0x08,   13 /* Private */,
      13,    0,  101,    2, 0x08,   14 /* Private */,
      14,    0,  102,    2, 0x08,   15 /* Private */,
      15,    0,  103,    2, 0x08,   16 /* Private */,
      16,    0,  104,    2, 0x08,   17 /* Private */,
      17,    0,  105,    2, 0x08,   18 /* Private */,
      18,    0,  106,    2, 0x08,   19 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QPoint, QMetaType::QPoint, QMetaType::QColor, QMetaType::Int,    3,    4,    5,    6,
    QMetaType::Void, QMetaType::QPoint, QMetaType::QPoint, QMetaType::QColor, QMetaType::Int,    8,    9,    5,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSMainWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMainWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMainWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'dibujarLinea'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPoint &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPoint &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QColor &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'dibujarCuadrado'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPoint &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPoint &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QColor &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_actionGuardar_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionAbrir_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionLimpiar_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionGrosor_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionColor_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionBorrador_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionLibre_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionLinea_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionCuadrado_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->dibujarLinea((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QColor>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4]))); break;
        case 1: _t->dibujarCuadrado((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QColor>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4]))); break;
        case 2: _t->on_actionGuardar_triggered(); break;
        case 3: _t->on_actionAbrir_triggered(); break;
        case 4: _t->on_actionLimpiar_triggered(); break;
        case 5: _t->on_actionGrosor_triggered(); break;
        case 6: _t->on_actionColor_triggered(); break;
        case 7: _t->on_actionBorrador_triggered(); break;
        case 8: _t->on_actionLibre_triggered(); break;
        case 9: _t->on_actionLinea_triggered(); break;
        case 10: _t->on_actionCuadrado_triggered(); break;
        default: ;
        }
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMainWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
