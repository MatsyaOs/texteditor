/****************************************************************************
** Meta object code from reading C++ file 'documenthandler.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/documenthandler.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'documenthandler.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DocumentAlert_t {
    QByteArrayData data[11];
    char stringdata0[93];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DocumentAlert_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DocumentAlert_t qt_meta_stringdata_DocumentAlert = {
    {
QT_MOC_LITERAL(0, 0, 13), // "DocumentAlert"
QT_MOC_LITERAL(1, 14, 4), // "done"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 5), // "index"
QT_MOC_LITERAL(4, 26, 13), // "triggerAction"
QT_MOC_LITERAL(5, 40, 11), // "actionIndex"
QT_MOC_LITERAL(6, 52, 10), // "alertIndex"
QT_MOC_LITERAL(7, 63, 5), // "title"
QT_MOC_LITERAL(8, 69, 4), // "body"
QT_MOC_LITERAL(9, 74, 5), // "level"
QT_MOC_LITERAL(10, 80, 12) // "actionLabels"

    },
    "DocumentAlert\0done\0\0index\0triggerAction\0"
    "actionIndex\0alertIndex\0title\0body\0"
    "level\0actionLabels"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DocumentAlert[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       4,   32, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    2,   27,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    5,    6,

 // properties: name, type, flags
       7, QMetaType::QString, 0x00095c01,
       8, QMetaType::QString, 0x00095c01,
       9, QMetaType::UInt, 0x00095c01,
      10, QMetaType::QStringList, 0x00095c01,

       0        // eod
};

void DocumentAlert::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DocumentAlert *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->done((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->triggerAction((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DocumentAlert::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DocumentAlert::done)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<DocumentAlert *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->m_title; break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->m_body; break;
        case 2: *reinterpret_cast< uint*>(_v) = _t->m_level; break;
        case 3: *reinterpret_cast< QStringList*>(_v) = _t->actionLabels(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject DocumentAlert::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_DocumentAlert.data,
    qt_meta_data_DocumentAlert,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DocumentAlert::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DocumentAlert::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DocumentAlert.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int DocumentAlert::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void DocumentAlert::done(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_Alerts_t {
    QByteArrayData data[1];
    char stringdata0[7];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Alerts_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Alerts_t qt_meta_stringdata_Alerts = {
    {
QT_MOC_LITERAL(0, 0, 6) // "Alerts"

    },
    "Alerts"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Alerts[] = {

 // content:
       8,       // revision
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

void Alerts::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject Alerts::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractListModel::staticMetaObject>(),
    qt_meta_stringdata_Alerts.data,
    qt_meta_data_Alerts,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Alerts::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Alerts::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Alerts.stringdata0))
        return static_cast<void*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int Alerts::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_FileLoader_t {
    QByteArrayData data[6];
    char stringdata0[41];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FileLoader_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FileLoader_t qt_meta_stringdata_FileLoader = {
    {
QT_MOC_LITERAL(0, 0, 10), // "FileLoader"
QT_MOC_LITERAL(1, 11, 9), // "fileReady"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 5), // "array"
QT_MOC_LITERAL(4, 28, 3), // "url"
QT_MOC_LITERAL(5, 32, 8) // "loadFile"

    },
    "FileLoader\0fileReady\0\0array\0url\0"
    "loadFile"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FileLoader[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   29,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QUrl,    3,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::QUrl,    4,

       0        // eod
};

void FileLoader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FileLoader *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->fileReady((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QUrl(*)>(_a[2]))); break;
        case 1: _t->loadFile((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FileLoader::*)(QString , QUrl );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileLoader::fileReady)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject FileLoader::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_FileLoader.data,
    qt_meta_data_FileLoader,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FileLoader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FileLoader::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FileLoader.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int FileLoader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void FileLoader::fileReady(QString _t1, QUrl _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_DocumentHandler_t {
    QByteArrayData data[94];
    char stringdata0[1219];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DocumentHandler_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DocumentHandler_t qt_meta_stringdata_DocumentHandler = {
    {
QT_MOC_LITERAL(0, 0, 15), // "DocumentHandler"
QT_MOC_LITERAL(1, 16, 15), // "documentChanged"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 9), // "fileSaved"
QT_MOC_LITERAL(4, 43, 21), // "cursorPositionChanged"
QT_MOC_LITERAL(5, 65, 21), // "selectionStartChanged"
QT_MOC_LITERAL(6, 87, 19), // "selectionEndChanged"
QT_MOC_LITERAL(7, 107, 17), // "fontFamilyChanged"
QT_MOC_LITERAL(8, 125, 16), // "textColorChanged"
QT_MOC_LITERAL(9, 142, 16), // "alignmentChanged"
QT_MOC_LITERAL(10, 159, 11), // "boldChanged"
QT_MOC_LITERAL(11, 171, 16), // "uppercaseChanged"
QT_MOC_LITERAL(12, 188, 13), // "italicChanged"
QT_MOC_LITERAL(13, 202, 16), // "underlineChanged"
QT_MOC_LITERAL(14, 219, 13), // "isRichChanged"
QT_MOC_LITERAL(15, 233, 16), // "lineCountChanged"
QT_MOC_LITERAL(16, 250, 15), // "fontSizeChanged"
QT_MOC_LITERAL(17, 266, 15), // "tabSpaceChanged"
QT_MOC_LITERAL(18, 282, 11), // "textChanged"
QT_MOC_LITERAL(19, 294, 14), // "fileUrlChanged"
QT_MOC_LITERAL(20, 309, 15), // "fileInfoChanged"
QT_MOC_LITERAL(21, 325, 6), // "loaded"
QT_MOC_LITERAL(22, 332, 3), // "url"
QT_MOC_LITERAL(23, 336, 5), // "error"
QT_MOC_LITERAL(24, 342, 7), // "message"
QT_MOC_LITERAL(25, 350, 8), // "loadFile"
QT_MOC_LITERAL(26, 359, 17), // "autoReloadChanged"
QT_MOC_LITERAL(27, 377, 15), // "autoSaveChanged"
QT_MOC_LITERAL(28, 393, 25), // "externallyModifiedChanged"
QT_MOC_LITERAL(29, 419, 22), // "backgroundColorChanged"
QT_MOC_LITERAL(30, 442, 17), // "formatNameChanged"
QT_MOC_LITERAL(31, 460, 15), // "modifiedChanged"
QT_MOC_LITERAL(32, 476, 23), // "currentLineIndexChanged"
QT_MOC_LITERAL(33, 500, 31), // "enableSyntaxHighlightingChanged"
QT_MOC_LITERAL(34, 532, 12), // "themeChanged"
QT_MOC_LITERAL(35, 545, 11), // "searchFound"
QT_MOC_LITERAL(36, 557, 5), // "start"
QT_MOC_LITERAL(37, 563, 3), // "end"
QT_MOC_LITERAL(38, 567, 26), // "findCaseSensitivelyChanged"
QT_MOC_LITERAL(39, 594, 21), // "findWholeWordsChanged"
QT_MOC_LITERAL(40, 616, 15), // "fileNameChanged"
QT_MOC_LITERAL(41, 632, 4), // "load"
QT_MOC_LITERAL(42, 637, 6), // "saveAs"
QT_MOC_LITERAL(43, 644, 4), // "find"
QT_MOC_LITERAL(44, 649, 5), // "query"
QT_MOC_LITERAL(45, 655, 7), // "forward"
QT_MOC_LITERAL(46, 663, 7), // "replace"
QT_MOC_LITERAL(47, 671, 5), // "value"
QT_MOC_LITERAL(48, 677, 10), // "replaceAll"
QT_MOC_LITERAL(49, 688, 10), // "isFoldable"
QT_MOC_LITERAL(50, 699, 4), // "line"
QT_MOC_LITERAL(51, 704, 8), // "isFolded"
QT_MOC_LITERAL(52, 713, 10), // "toggleFold"
QT_MOC_LITERAL(53, 724, 10), // "lineHeight"
QT_MOC_LITERAL(54, 735, 9), // "lineCount"
QT_MOC_LITERAL(55, 745, 19), // "getCurrentLineIndex"
QT_MOC_LITERAL(56, 765, 8), // "goToLine"
QT_MOC_LITERAL(57, 774, 19), // "getLanguageNameList"
QT_MOC_LITERAL(58, 794, 27), // "getLanguageNameFromFileName"
QT_MOC_LITERAL(59, 822, 8), // "fileName"
QT_MOC_LITERAL(60, 831, 9), // "getThemes"
QT_MOC_LITERAL(61, 841, 8), // "document"
QT_MOC_LITERAL(62, 850, 19), // "QQuickTextDocument*"
QT_MOC_LITERAL(63, 870, 14), // "cursorPosition"
QT_MOC_LITERAL(64, 885, 14), // "selectionStart"
QT_MOC_LITERAL(65, 900, 12), // "selectionEnd"
QT_MOC_LITERAL(66, 913, 9), // "textColor"
QT_MOC_LITERAL(67, 923, 10), // "fontFamily"
QT_MOC_LITERAL(68, 934, 9), // "alignment"
QT_MOC_LITERAL(69, 944, 13), // "Qt::Alignment"
QT_MOC_LITERAL(70, 958, 4), // "bold"
QT_MOC_LITERAL(71, 963, 9), // "uppercase"
QT_MOC_LITERAL(72, 973, 6), // "italic"
QT_MOC_LITERAL(73, 980, 9), // "underline"
QT_MOC_LITERAL(74, 990, 6), // "isRich"
QT_MOC_LITERAL(75, 997, 8), // "fontSize"
QT_MOC_LITERAL(76, 1006, 8), // "tabSpace"
QT_MOC_LITERAL(77, 1015, 8), // "fileType"
QT_MOC_LITERAL(78, 1024, 8), // "fileInfo"
QT_MOC_LITERAL(79, 1033, 7), // "fileUrl"
QT_MOC_LITERAL(80, 1041, 4), // "text"
QT_MOC_LITERAL(81, 1046, 18), // "externallyModified"
QT_MOC_LITERAL(82, 1065, 8), // "modified"
QT_MOC_LITERAL(83, 1074, 10), // "autoReload"
QT_MOC_LITERAL(84, 1085, 8), // "autoSave"
QT_MOC_LITERAL(85, 1094, 10), // "formatName"
QT_MOC_LITERAL(86, 1105, 16), // "currentLineIndex"
QT_MOC_LITERAL(87, 1122, 6), // "alerts"
QT_MOC_LITERAL(88, 1129, 7), // "Alerts*"
QT_MOC_LITERAL(89, 1137, 15), // "backgroundColor"
QT_MOC_LITERAL(90, 1153, 5), // "theme"
QT_MOC_LITERAL(91, 1159, 24), // "enableSyntaxHighlighting"
QT_MOC_LITERAL(92, 1184, 14), // "findWholeWords"
QT_MOC_LITERAL(93, 1199, 19) // "findCaseSensitively"

    },
    "DocumentHandler\0documentChanged\0\0"
    "fileSaved\0cursorPositionChanged\0"
    "selectionStartChanged\0selectionEndChanged\0"
    "fontFamilyChanged\0textColorChanged\0"
    "alignmentChanged\0boldChanged\0"
    "uppercaseChanged\0italicChanged\0"
    "underlineChanged\0isRichChanged\0"
    "lineCountChanged\0fontSizeChanged\0"
    "tabSpaceChanged\0textChanged\0fileUrlChanged\0"
    "fileInfoChanged\0loaded\0url\0error\0"
    "message\0loadFile\0autoReloadChanged\0"
    "autoSaveChanged\0externallyModifiedChanged\0"
    "backgroundColorChanged\0formatNameChanged\0"
    "modifiedChanged\0currentLineIndexChanged\0"
    "enableSyntaxHighlightingChanged\0"
    "themeChanged\0searchFound\0start\0end\0"
    "findCaseSensitivelyChanged\0"
    "findWholeWordsChanged\0fileNameChanged\0"
    "load\0saveAs\0find\0query\0forward\0replace\0"
    "value\0replaceAll\0isFoldable\0line\0"
    "isFolded\0toggleFold\0lineHeight\0lineCount\0"
    "getCurrentLineIndex\0goToLine\0"
    "getLanguageNameList\0getLanguageNameFromFileName\0"
    "fileName\0getThemes\0document\0"
    "QQuickTextDocument*\0cursorPosition\0"
    "selectionStart\0selectionEnd\0textColor\0"
    "fontFamily\0alignment\0Qt::Alignment\0"
    "bold\0uppercase\0italic\0underline\0isRich\0"
    "fontSize\0tabSpace\0fileType\0fileInfo\0"
    "fileUrl\0text\0externallyModified\0"
    "modified\0autoReload\0autoSave\0formatName\0"
    "currentLineIndex\0alerts\0Alerts*\0"
    "backgroundColor\0theme\0enableSyntaxHighlighting\0"
    "findWholeWords\0findCaseSensitively"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DocumentHandler[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      51,   14, // methods
      33,  360, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      35,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  269,    2, 0x06 /* Public */,
       3,    0,  270,    2, 0x06 /* Public */,
       4,    0,  271,    2, 0x06 /* Public */,
       5,    0,  272,    2, 0x06 /* Public */,
       6,    0,  273,    2, 0x06 /* Public */,
       7,    0,  274,    2, 0x06 /* Public */,
       8,    0,  275,    2, 0x06 /* Public */,
       9,    0,  276,    2, 0x06 /* Public */,
      10,    0,  277,    2, 0x06 /* Public */,
      11,    0,  278,    2, 0x06 /* Public */,
      12,    0,  279,    2, 0x06 /* Public */,
      13,    0,  280,    2, 0x06 /* Public */,
      14,    0,  281,    2, 0x06 /* Public */,
      15,    0,  282,    2, 0x06 /* Public */,
      16,    0,  283,    2, 0x06 /* Public */,
      17,    0,  284,    2, 0x06 /* Public */,
      18,    0,  285,    2, 0x06 /* Public */,
      19,    0,  286,    2, 0x06 /* Public */,
      20,    0,  287,    2, 0x06 /* Public */,
      21,    1,  288,    2, 0x06 /* Public */,
      23,    1,  291,    2, 0x06 /* Public */,
      25,    1,  294,    2, 0x06 /* Public */,
      26,    0,  297,    2, 0x06 /* Public */,
      27,    0,  298,    2, 0x06 /* Public */,
      28,    0,  299,    2, 0x06 /* Public */,
      29,    0,  300,    2, 0x06 /* Public */,
      30,    0,  301,    2, 0x06 /* Public */,
      31,    0,  302,    2, 0x06 /* Public */,
      32,    0,  303,    2, 0x06 /* Public */,
      33,    0,  304,    2, 0x06 /* Public */,
      34,    0,  305,    2, 0x06 /* Public */,
      35,    2,  306,    2, 0x06 /* Public */,
      38,    0,  311,    2, 0x06 /* Public */,
      39,    0,  312,    2, 0x06 /* Public */,
      40,    0,  313,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      41,    1,  314,    2, 0x0a /* Public */,
      42,    1,  317,    2, 0x0a /* Public */,
      43,    2,  320,    2, 0x0a /* Public */,
      43,    1,  325,    2, 0x2a /* Public | MethodCloned */,
      46,    2,  328,    2, 0x0a /* Public */,
      48,    2,  333,    2, 0x0a /* Public */,
      49,    1,  338,    2, 0x0a /* Public */,
      51,    1,  341,    2, 0x0a /* Public */,
      52,    1,  344,    2, 0x0a /* Public */,
      53,    1,  347,    2, 0x0a /* Public */,
      54,    0,  350,    2, 0x0a /* Public */,
      55,    0,  351,    2, 0x0a /* Public */,
      56,    1,  352,    2, 0x0a /* Public */,
      57,    0,  355,    2, 0x0a /* Public */,
      58,    1,  356,    2, 0x0a /* Public */,
      60,    0,  359,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QUrl,   22,
    QMetaType::Void, QMetaType::QString,   24,
    QMetaType::Void, QMetaType::QUrl,   22,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   36,   37,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QUrl,   22,
    QMetaType::Void, QMetaType::QUrl,   22,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,   44,   45,
    QMetaType::Void, QMetaType::QString,   44,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   44,   47,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   44,   47,
    QMetaType::Bool, QMetaType::Int,   50,
    QMetaType::Bool, QMetaType::Int,   50,
    QMetaType::Void, QMetaType::Int,   50,
    QMetaType::Int, QMetaType::Int,   50,
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::Int, QMetaType::Int,   50,
    QMetaType::QStringList,
    QMetaType::QString, QMetaType::QUrl,   59,
    QMetaType::QStringList,

 // properties: name, type, flags
      61, 0x80000000 | 62, 0x0049510b,
      63, QMetaType::Int, 0x00495103,
      64, QMetaType::Int, 0x00495103,
      65, QMetaType::Int, 0x00495103,
      66, QMetaType::QColor, 0x00495103,
      67, QMetaType::QString, 0x00495103,
      68, 0x80000000 | 69, 0x0049510b,
      70, QMetaType::Bool, 0x00495103,
      71, QMetaType::Bool, 0x00495103,
      72, QMetaType::Bool, 0x00495103,
      73, QMetaType::Bool, 0x00495103,
      74, QMetaType::Bool, 0x00495001,
      54, QMetaType::Int, 0x00495001,
      75, QMetaType::Int, 0x00495103,
      76, QMetaType::QReal, 0x00495103,
      59, QMetaType::QString, 0x00495001,
      77, QMetaType::QString, 0x00495001,
      78, QMetaType::QVariantMap, 0x00495001,
      79, QMetaType::QUrl, 0x00495103,
      80, QMetaType::QString, 0x00495103,
      81, QMetaType::Bool, 0x00495103,
      82, QMetaType::Bool, 0x00495001,
      83, QMetaType::Bool, 0x00495103,
      84, QMetaType::Bool, 0x00495103,
      85, QMetaType::QString, 0x00495103,
      86, QMetaType::Int, 0x00495001,
      87, 0x80000000 | 88, 0x00095c09,
      89, QMetaType::QColor, 0x00495103,
      90, QMetaType::QString, 0x00495103,
      91, QMetaType::Bool, 0x00495103,
      92, QMetaType::Bool, 0x00495003,
      93, QMetaType::Bool, 0x00495003,
      59, QMetaType::QString, 0x00495003,

 // properties: notify_signal_id
       0,
       2,
       3,
       4,
       6,
       5,
       7,
       8,
       9,
      10,
      11,
      12,
      13,
      14,
      15,
      17,
      17,
      18,
      17,
      16,
      24,
      27,
      22,
      23,
      26,
      28,
       0,
      25,
      30,
      29,
      33,
      32,
      34,

       0        // eod
};

void DocumentHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DocumentHandler *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->documentChanged(); break;
        case 1: _t->fileSaved(); break;
        case 2: _t->cursorPositionChanged(); break;
        case 3: _t->selectionStartChanged(); break;
        case 4: _t->selectionEndChanged(); break;
        case 5: _t->fontFamilyChanged(); break;
        case 6: _t->textColorChanged(); break;
        case 7: _t->alignmentChanged(); break;
        case 8: _t->boldChanged(); break;
        case 9: _t->uppercaseChanged(); break;
        case 10: _t->italicChanged(); break;
        case 11: _t->underlineChanged(); break;
        case 12: _t->isRichChanged(); break;
        case 13: _t->lineCountChanged(); break;
        case 14: _t->fontSizeChanged(); break;
        case 15: _t->tabSpaceChanged(); break;
        case 16: _t->textChanged(); break;
        case 17: _t->fileUrlChanged(); break;
        case 18: _t->fileInfoChanged(); break;
        case 19: _t->loaded((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 20: _t->error((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 21: _t->loadFile((*reinterpret_cast< QUrl(*)>(_a[1]))); break;
        case 22: _t->autoReloadChanged(); break;
        case 23: _t->autoSaveChanged(); break;
        case 24: _t->externallyModifiedChanged(); break;
        case 25: _t->backgroundColorChanged(); break;
        case 26: _t->formatNameChanged(); break;
        case 27: _t->modifiedChanged(); break;
        case 28: _t->currentLineIndexChanged(); break;
        case 29: _t->enableSyntaxHighlightingChanged(); break;
        case 30: _t->themeChanged(); break;
        case 31: _t->searchFound((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 32: _t->findCaseSensitivelyChanged(); break;
        case 33: _t->findWholeWordsChanged(); break;
        case 34: _t->fileNameChanged(); break;
        case 35: _t->load((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 36: _t->saveAs((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 37: _t->find((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const bool(*)>(_a[2]))); break;
        case 38: _t->find((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 39: _t->replace((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 40: _t->replaceAll((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 41: { bool _r = _t->isFoldable((*reinterpret_cast< const int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 42: { bool _r = _t->isFolded((*reinterpret_cast< const int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 43: _t->toggleFold((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 44: { int _r = _t->lineHeight((*reinterpret_cast< const int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 45: { int _r = _t->lineCount();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 46: { int _r = _t->getCurrentLineIndex();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 47: { int _r = _t->goToLine((*reinterpret_cast< const int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 48: { QStringList _r = _t->getLanguageNameList();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 49: { QString _r = _t->getLanguageNameFromFileName((*reinterpret_cast< const QUrl(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 50: { QStringList _r = _t->getThemes();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DocumentHandler::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DocumentHandler::documentChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DocumentHandler::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DocumentHandler::fileSaved)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DocumentHandler::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DocumentHandler::cursorPositionChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (DocumentHandler::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DocumentHandler::selectionStartChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (DocumentHandler::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DocumentHandler::selectionEndChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (DocumentHandler::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DocumentHandler::fontFamilyChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (DocumentHandler::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DocumentHandler::textColorChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (DocumentHandler::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DocumentHandler::alignmentChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (DocumentHandler::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DocumentHandler::boldChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (DocumentHandler::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DocumentHandler::uppercaseChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (DocumentHandler::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DocumentHandler::italicChanged)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (DocumentHandler::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DocumentHandler::underlineChanged)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (DocumentHandler::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DocumentHandler::isRichChanged)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (DocumentHandler::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DocumentHandler::lineCountChanged)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (DocumentHandler::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DocumentHandler::fontSizeChanged)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (DocumentHandler::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DocumentHandler::tabSpaceChanged)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (DocumentHandler::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DocumentHandler::textChanged)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (DocumentHandler::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DocumentHandler::fileUrlChanged)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (DocumentHandler::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DocumentHandler::fileInfoChanged)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (DocumentHandler::*)(const QUrl & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DocumentHandler::loaded)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (DocumentHandler::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DocumentHandler::error)) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (DocumentHandler::*)(QUrl );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DocumentHandler::loadFile)) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (DocumentHandler::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DocumentHandler::autoReloadChanged)) {
                *result = 22;
                return;
            }
        }
        {
            using _t = void (DocumentHandler::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DocumentHandler::autoSaveChanged)) {
                *result = 23;
                return;
            }
        }
        {
            using _t = void (DocumentHandler::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DocumentHandler::externallyModifiedChanged)) {
                *result = 24;
                return;
            }
        }
        {
            using _t = void (DocumentHandler::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DocumentHandler::backgroundColorChanged)) {
                *result = 25;
                return;
            }
        }
        {
            using _t = void (DocumentHandler::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DocumentHandler::formatNameChanged)) {
                *result = 26;
                return;
            }
        }
        {
            using _t = void (DocumentHandler::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DocumentHandler::modifiedChanged)) {
                *result = 27;
                return;
            }
        }
        {
            using _t = void (DocumentHandler::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DocumentHandler::currentLineIndexChanged)) {
                *result = 28;
                return;
            }
        }
        {
            using _t = void (DocumentHandler::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DocumentHandler::enableSyntaxHighlightingChanged)) {
                *result = 29;
                return;
            }
        }
        {
            using _t = void (DocumentHandler::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DocumentHandler::themeChanged)) {
                *result = 30;
                return;
            }
        }
        {
            using _t = void (DocumentHandler::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DocumentHandler::searchFound)) {
                *result = 31;
                return;
            }
        }
        {
            using _t = void (DocumentHandler::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DocumentHandler::findCaseSensitivelyChanged)) {
                *result = 32;
                return;
            }
        }
        {
            using _t = void (DocumentHandler::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DocumentHandler::findWholeWordsChanged)) {
                *result = 33;
                return;
            }
        }
        {
            using _t = void (DocumentHandler::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DocumentHandler::fileNameChanged)) {
                *result = 34;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 26:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Alerts* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<DocumentHandler *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QQuickTextDocument**>(_v) = _t->document(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->cursorPosition(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->selectionStart(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->selectionEnd(); break;
        case 4: *reinterpret_cast< QColor*>(_v) = _t->textColor(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->fontFamily(); break;
        case 6: *reinterpret_cast< Qt::Alignment*>(_v) = _t->alignment(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->bold(); break;
        case 8: *reinterpret_cast< bool*>(_v) = _t->uppercase(); break;
        case 9: *reinterpret_cast< bool*>(_v) = _t->italic(); break;
        case 10: *reinterpret_cast< bool*>(_v) = _t->underline(); break;
        case 11: *reinterpret_cast< bool*>(_v) = _t->getIsRich(); break;
        case 12: *reinterpret_cast< int*>(_v) = _t->lineCount(); break;
        case 13: *reinterpret_cast< int*>(_v) = _t->fontSize(); break;
        case 14: *reinterpret_cast< qreal*>(_v) = _t->tabSpace(); break;
        case 15: *reinterpret_cast< QString*>(_v) = _t->fileName(); break;
        case 16: *reinterpret_cast< QString*>(_v) = _t->fileType(); break;
        case 17: *reinterpret_cast< QVariantMap*>(_v) = _t->fileInfo(); break;
        case 18: *reinterpret_cast< QUrl*>(_v) = _t->fileUrl(); break;
        case 19: *reinterpret_cast< QString*>(_v) = _t->text(); break;
        case 20: *reinterpret_cast< bool*>(_v) = _t->getExternallyModified(); break;
        case 21: *reinterpret_cast< bool*>(_v) = _t->getModified(); break;
        case 22: *reinterpret_cast< bool*>(_v) = _t->getAutoReload(); break;
        case 23: *reinterpret_cast< bool*>(_v) = _t->autoSave(); break;
        case 24: *reinterpret_cast< QString*>(_v) = _t->formatName(); break;
        case 25: *reinterpret_cast< int*>(_v) = _t->getCurrentLineIndex(); break;
        case 26: *reinterpret_cast< Alerts**>(_v) = _t->getAlerts(); break;
        case 27: *reinterpret_cast< QColor*>(_v) = _t->getBackgroundColor(); break;
        case 28: *reinterpret_cast< QString*>(_v) = _t->theme(); break;
        case 29: *reinterpret_cast< bool*>(_v) = _t->enableSyntaxHighlighting(); break;
        case 30: *reinterpret_cast< bool*>(_v) = _t->m_findWholeWords; break;
        case 31: *reinterpret_cast< bool*>(_v) = _t->m_findCaseSensitively; break;
        case 32: *reinterpret_cast< QString*>(_v) = _t->m_fileName; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<DocumentHandler *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setDocument(*reinterpret_cast< QQuickTextDocument**>(_v)); break;
        case 1: _t->setCursorPosition(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setSelectionStart(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setSelectionEnd(*reinterpret_cast< int*>(_v)); break;
        case 4: _t->setTextColor(*reinterpret_cast< QColor*>(_v)); break;
        case 5: _t->setFontFamily(*reinterpret_cast< QString*>(_v)); break;
        case 6: _t->setAlignment(*reinterpret_cast< Qt::Alignment*>(_v)); break;
        case 7: _t->setBold(*reinterpret_cast< bool*>(_v)); break;
        case 8: _t->setUppercase(*reinterpret_cast< bool*>(_v)); break;
        case 9: _t->setItalic(*reinterpret_cast< bool*>(_v)); break;
        case 10: _t->setUnderline(*reinterpret_cast< bool*>(_v)); break;
        case 13: _t->setFontSize(*reinterpret_cast< int*>(_v)); break;
        case 14: _t->setTabSpace(*reinterpret_cast< qreal*>(_v)); break;
        case 18: _t->setFileUrl(*reinterpret_cast< QUrl*>(_v)); break;
        case 19: _t->setText(*reinterpret_cast< QString*>(_v)); break;
        case 20: _t->setExternallyModified(*reinterpret_cast< bool*>(_v)); break;
        case 22: _t->setAutoReload(*reinterpret_cast< bool*>(_v)); break;
        case 23: _t->setAutoSave(*reinterpret_cast< bool*>(_v)); break;
        case 24: _t->setFormatName(*reinterpret_cast< QString*>(_v)); break;
        case 27: _t->setBackgroundColor(*reinterpret_cast< QColor*>(_v)); break;
        case 28: _t->setTheme(*reinterpret_cast< QString*>(_v)); break;
        case 29: _t->setEnableSyntaxHighlighting(*reinterpret_cast< bool*>(_v)); break;
        case 30:
            if (_t->m_findWholeWords != *reinterpret_cast< bool*>(_v)) {
                _t->m_findWholeWords = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->findWholeWordsChanged();
            }
            break;
        case 31:
            if (_t->m_findCaseSensitively != *reinterpret_cast< bool*>(_v)) {
                _t->m_findCaseSensitively = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->findCaseSensitivelyChanged();
            }
            break;
        case 32:
            if (_t->m_fileName != *reinterpret_cast< QString*>(_v)) {
                _t->m_fileName = *reinterpret_cast< QString*>(_v);
                Q_EMIT _t->fileNameChanged();
            }
            break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject DocumentHandler::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_DocumentHandler.data,
    qt_meta_data_DocumentHandler,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DocumentHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DocumentHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DocumentHandler.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int DocumentHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 51)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 51;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 51)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 51;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 33;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 33;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 33;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 33;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 33;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 33;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void DocumentHandler::documentChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void DocumentHandler::fileSaved()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void DocumentHandler::cursorPositionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void DocumentHandler::selectionStartChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void DocumentHandler::selectionEndChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void DocumentHandler::fontFamilyChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void DocumentHandler::textColorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void DocumentHandler::alignmentChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void DocumentHandler::boldChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void DocumentHandler::uppercaseChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void DocumentHandler::italicChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void DocumentHandler::underlineChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void DocumentHandler::isRichChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void DocumentHandler::lineCountChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}

// SIGNAL 14
void DocumentHandler::fontSizeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 14, nullptr);
}

// SIGNAL 15
void DocumentHandler::tabSpaceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 15, nullptr);
}

// SIGNAL 16
void DocumentHandler::textChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 16, nullptr);
}

// SIGNAL 17
void DocumentHandler::fileUrlChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 17, nullptr);
}

// SIGNAL 18
void DocumentHandler::fileInfoChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 18, nullptr);
}

// SIGNAL 19
void DocumentHandler::loaded(const QUrl & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void DocumentHandler::error(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void DocumentHandler::loadFile(QUrl _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void DocumentHandler::autoReloadChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 22, nullptr);
}

// SIGNAL 23
void DocumentHandler::autoSaveChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 23, nullptr);
}

// SIGNAL 24
void DocumentHandler::externallyModifiedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 24, nullptr);
}

// SIGNAL 25
void DocumentHandler::backgroundColorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 25, nullptr);
}

// SIGNAL 26
void DocumentHandler::formatNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 26, nullptr);
}

// SIGNAL 27
void DocumentHandler::modifiedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 27, nullptr);
}

// SIGNAL 28
void DocumentHandler::currentLineIndexChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 28, nullptr);
}

// SIGNAL 29
void DocumentHandler::enableSyntaxHighlightingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 29, nullptr);
}

// SIGNAL 30
void DocumentHandler::themeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 30, nullptr);
}

// SIGNAL 31
void DocumentHandler::searchFound(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 31, _a);
}

// SIGNAL 32
void DocumentHandler::findCaseSensitivelyChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 32, nullptr);
}

// SIGNAL 33
void DocumentHandler::findWholeWordsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 33, nullptr);
}

// SIGNAL 34
void DocumentHandler::fileNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 34, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
