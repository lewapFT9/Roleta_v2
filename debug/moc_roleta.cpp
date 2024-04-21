/****************************************************************************
** Meta object code from reading C++ file 'roleta.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Roleta/roleta.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'roleta.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.2. It"
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
struct qt_meta_stringdata_CLASSRoletaENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSRoletaENDCLASS = QtMocHelpers::stringData(
    "Roleta",
    "roletaConnected",
    "",
    "roletaDisconnected",
    "roletaStateChanged",
    "QAbstractSocket::SocketState",
    "roletaErrorOccurred",
    "QAbstractSocket::SocketError",
    "roletaDataReady",
    "data",
    "action",
    "rollDown",
    "rollUp"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSRoletaENDCLASS_t {
    uint offsetsAndSizes[26];
    char stringdata0[7];
    char stringdata1[16];
    char stringdata2[1];
    char stringdata3[19];
    char stringdata4[19];
    char stringdata5[29];
    char stringdata6[20];
    char stringdata7[29];
    char stringdata8[16];
    char stringdata9[5];
    char stringdata10[7];
    char stringdata11[9];
    char stringdata12[7];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSRoletaENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSRoletaENDCLASS_t qt_meta_stringdata_CLASSRoletaENDCLASS = {
    {
        QT_MOC_LITERAL(0, 6),  // "Roleta"
        QT_MOC_LITERAL(7, 15),  // "roletaConnected"
        QT_MOC_LITERAL(23, 0),  // ""
        QT_MOC_LITERAL(24, 18),  // "roletaDisconnected"
        QT_MOC_LITERAL(43, 18),  // "roletaStateChanged"
        QT_MOC_LITERAL(62, 28),  // "QAbstractSocket::SocketState"
        QT_MOC_LITERAL(91, 19),  // "roletaErrorOccurred"
        QT_MOC_LITERAL(111, 28),  // "QAbstractSocket::SocketError"
        QT_MOC_LITERAL(140, 15),  // "roletaDataReady"
        QT_MOC_LITERAL(156, 4),  // "data"
        QT_MOC_LITERAL(161, 6),  // "action"
        QT_MOC_LITERAL(168, 8),  // "rollDown"
        QT_MOC_LITERAL(177, 6)   // "rollUp"
    },
    "Roleta",
    "roletaConnected",
    "",
    "roletaDisconnected",
    "roletaStateChanged",
    "QAbstractSocket::SocketState",
    "roletaErrorOccurred",
    "QAbstractSocket::SocketError",
    "roletaDataReady",
    "data",
    "action",
    "rollDown",
    "rollUp"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSRoletaENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   62,    2, 0x08,    1 /* Private */,
       3,    0,   63,    2, 0x08,    2 /* Private */,
       4,    1,   64,    2, 0x08,    3 /* Private */,
       6,    1,   67,    2, 0x08,    5 /* Private */,
       8,    1,   70,    2, 0x08,    7 /* Private */,
      10,    1,   73,    2, 0x08,    9 /* Private */,
      11,    0,   76,    2, 0x08,   11 /* Private */,
      12,    0,   77,    2, 0x08,   12 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void, 0x80000000 | 7,    2,
    QMetaType::Void, QMetaType::QByteArray,    9,
    QMetaType::Void, QMetaType::QByteArray,    9,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject Roleta::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSRoletaENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSRoletaENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSRoletaENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Roleta, std::true_type>,
        // method 'roletaConnected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'roletaDisconnected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'roletaStateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAbstractSocket::SocketState, std::false_type>,
        // method 'roletaErrorOccurred'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAbstractSocket::SocketError, std::false_type>,
        // method 'roletaDataReady'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QByteArray, std::false_type>,
        // method 'action'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QByteArray, std::false_type>,
        // method 'rollDown'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'rollUp'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Roleta::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Roleta *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->roletaConnected(); break;
        case 1: _t->roletaDisconnected(); break;
        case 2: _t->roletaStateChanged((*reinterpret_cast< std::add_pointer_t<QAbstractSocket::SocketState>>(_a[1]))); break;
        case 3: _t->roletaErrorOccurred((*reinterpret_cast< std::add_pointer_t<QAbstractSocket::SocketError>>(_a[1]))); break;
        case 4: _t->roletaDataReady((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1]))); break;
        case 5: _t->action((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1]))); break;
        case 6: _t->rollDown(); break;
        case 7: _t->rollUp(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAbstractSocket::SocketState >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAbstractSocket::SocketError >(); break;
            }
            break;
        }
    }
}

const QMetaObject *Roleta::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Roleta::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSRoletaENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int Roleta::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
