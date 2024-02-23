/****************************************************************************
** Meta object code from reading C++ file 'system.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../TeslaUI/Controllers/system.h"
#include <QtNetwork/QSslPreSharedKeyAuthenticator>
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'system.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSSystemENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSSystemENDCLASS = QtMocHelpers::stringData(
    "System",
    "QML.Element",
    "auto",
    "CarLockedChanged",
    "",
    "OutdoorTempChanged",
    "UserNameChanged",
    "CurrentTimeChanged",
    "CurrentTimeTimerTimeout",
    "CarLocked",
    "OutdoorTemp",
    "UserName",
    "CurrentTime"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSSystemENDCLASS_t {
    uint offsetsAndSizes[26];
    char stringdata0[7];
    char stringdata1[12];
    char stringdata2[5];
    char stringdata3[17];
    char stringdata4[1];
    char stringdata5[19];
    char stringdata6[16];
    char stringdata7[19];
    char stringdata8[24];
    char stringdata9[10];
    char stringdata10[12];
    char stringdata11[9];
    char stringdata12[12];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSSystemENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSSystemENDCLASS_t qt_meta_stringdata_CLASSSystemENDCLASS = {
    {
        QT_MOC_LITERAL(0, 6),  // "System"
        QT_MOC_LITERAL(7, 11),  // "QML.Element"
        QT_MOC_LITERAL(19, 4),  // "auto"
        QT_MOC_LITERAL(24, 16),  // "CarLockedChanged"
        QT_MOC_LITERAL(41, 0),  // ""
        QT_MOC_LITERAL(42, 18),  // "OutdoorTempChanged"
        QT_MOC_LITERAL(61, 15),  // "UserNameChanged"
        QT_MOC_LITERAL(77, 18),  // "CurrentTimeChanged"
        QT_MOC_LITERAL(96, 23),  // "CurrentTimeTimerTimeout"
        QT_MOC_LITERAL(120, 9),  // "CarLocked"
        QT_MOC_LITERAL(130, 11),  // "OutdoorTemp"
        QT_MOC_LITERAL(142, 8),  // "UserName"
        QT_MOC_LITERAL(151, 11)   // "CurrentTime"
    },
    "System",
    "QML.Element",
    "auto",
    "CarLockedChanged",
    "",
    "OutdoorTempChanged",
    "UserNameChanged",
    "CurrentTimeChanged",
    "CurrentTimeTimerTimeout",
    "CarLocked",
    "OutdoorTemp",
    "UserName",
    "CurrentTime"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSSystemENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       1,   14, // classinfo
       5,   16, // methods
       4,   51, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // classinfo: key, value
       1,    2,

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   46,    4, 0x06,    5 /* Public */,
       5,    0,   47,    4, 0x06,    6 /* Public */,
       6,    0,   48,    4, 0x06,    7 /* Public */,
       7,    0,   49,    4, 0x06,    8 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       8,    0,   50,    4, 0x0a,    9 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
       9, QMetaType::Bool, 0x00015903, uint(0), 0,
      10, QMetaType::Int, 0x00015903, uint(1), 0,
      11, QMetaType::QString, 0x00015903, uint(2), 0,
      12, QMetaType::QString, 0x00015903, uint(3), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject System::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSSystemENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSSystemENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_metaTypeArray<
        // property 'CarLocked'
        bool,
        // property 'OutdoorTemp'
        int,
        // property 'UserName'
        QString,
        // property 'CurrentTime'
        QString,
        // Q_OBJECT / Q_GADGET
        System,
        // method 'CarLockedChanged'
        void,
        // method 'OutdoorTempChanged'
        void,
        // method 'UserNameChanged'
        void,
        // method 'CurrentTimeChanged'
        void,
        // method 'CurrentTimeTimerTimeout'
        void
    >,
    nullptr
} };

void System::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<System *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->CarLockedChanged(); break;
        case 1: _t->OutdoorTempChanged(); break;
        case 2: _t->UserNameChanged(); break;
        case 3: _t->CurrentTimeChanged(); break;
        case 4: _t->CurrentTimeTimerTimeout(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (System::*)();
            if (_t _q_method = &System::CarLockedChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (System::*)();
            if (_t _q_method = &System::OutdoorTempChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (System::*)();
            if (_t _q_method = &System::UserNameChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (System::*)();
            if (_t _q_method = &System::CurrentTimeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<System *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->CarLocked(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->OutdoorTemp(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->UserName(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->CurrentTime(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<System *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setCarLocked(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setOutdoorTemp(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setUserName(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setCurrentTime(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_a;
}

const QMetaObject *System::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *System::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSSystemENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int System::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void System::CarLockedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void System::OutdoorTempChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void System::UserNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void System::CurrentTimeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
