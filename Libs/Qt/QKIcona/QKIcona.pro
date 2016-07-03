#-------------------------------------------------
#
# Project created by QtCreator 2016-03-20T15:58:50
#
#-------------------------------------------------

win32{
TARGET = libQKIcona
TARGET_EXT = .dll
}
unix: TARGET = QKIcona

TEMPLATE = lib

VERSION = 1.0.0

DEFINES += QKICONA_LIBRARY

SOURCES += qkicona.cpp

HEADERS += qkicona.h\
        qkicona_global.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}

RESOURCES += \
    Icons.qrc
