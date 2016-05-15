#-------------------------------------------------
#
# Project created by QtCreator 2016-03-20T15:58:50
#
#-------------------------------------------------



TARGET = QKIcona
TEMPLATE = lib

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
