#-------------------------------------------------
#
# Project created by QtCreator 2016-03-20T16:30:23
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = QK-IconaTest
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h

FORMS    += mainwindow.ui


win32:CONFIG(release, debug|release): LIBS += -L../QKIcona-lib/ -llibQKIcona
else:win32:CONFIG(debug, debug|release): LIBS += -L../QKIcona-lib/ -llibQKIcona
else:symbian: LIBS += -llibQKIcona
else:unix: LIBS += -L../QKIcona-lib/ -lQKIcona

INCLUDEPATH += ../QKIcona
#DEPENDPATH += . ../libjpconj-bin
