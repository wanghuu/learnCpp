/****************************************************************************
** Meta object code from reading C++ file 'widget.h'
**
** Created: Sat Sep 24 21:02:55 2016
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../IShop/widget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Widget[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       8,    7,    7,    7, 0x08,
      26,    7,    7,    7, 0x08,
      44,    7,    7,    7, 0x08,
      66,    7,    7,    7, 0x08,
      87,    7,    7,    7, 0x08,
     105,    7,    7,    7, 0x08,
     127,    7,    7,    7, 0x08,
     152,  146,    7,    7, 0x08,
     180,    7,    7,    7, 0x08,
     207,    7,    7,    7, 0x08,
     230,  228,    7,    7, 0x08,
     257,    7,    7,    7, 0x08,
     270,    7,    7,    7, 0x08,
     288,    7,    7,    7, 0x08,
     319,  310,    7,    7, 0x08,
     348,    7,    7,    7, 0x08,
     373,    7,    7,    7, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Widget[] = {
    "Widget\0\0on_play_clicked()\0on_stop_clicked()\0"
    "on_backward_clicked()\0on_forward_clicked()\0"
    "on_next_clicked()\0on_preivous_clicked()\0"
    "proc_finished(int)\0value\0"
    "on_volume_valueChanged(int)\0"
    "on_volume_sliderReleased()\0"
    "on_monitor_clicked()\0,\0"
    "recv_image_slot(char*,int)\0timer_slot()\0"
    "play_timer_slot()\0proc_read_proc_slot()\0"
    "position\0on_progress_sliderMoved(int)\0"
    "on_full_screen_clicked()\0on_sound_clicked()\0"
};

const QMetaObject Widget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Widget,
      qt_meta_data_Widget, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Widget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Widget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Widget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Widget))
        return static_cast<void*>(const_cast< Widget*>(this));
    return QWidget::qt_metacast(_clname);
}

int Widget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_play_clicked(); break;
        case 1: on_stop_clicked(); break;
        case 2: on_backward_clicked(); break;
        case 3: on_forward_clicked(); break;
        case 4: on_next_clicked(); break;
        case 5: on_preivous_clicked(); break;
        case 6: proc_finished((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: on_volume_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: on_volume_sliderReleased(); break;
        case 9: on_monitor_clicked(); break;
        case 10: recv_image_slot((*reinterpret_cast< char*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 11: timer_slot(); break;
        case 12: play_timer_slot(); break;
        case 13: proc_read_proc_slot(); break;
        case 14: on_progress_sliderMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: on_full_screen_clicked(); break;
        case 16: on_sound_clicked(); break;
        default: ;
        }
        _id -= 17;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
