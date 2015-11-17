#-------------------------------------------------
#
# Project created by QtCreator 2015-11-12T08:28:40
#
#-------------------------------------------------

QT       += core gui\
            multimedia

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Proyecto1
TEMPLATE = app


SOURCES += main.cpp \
    arbolexpr.cpp \
    nodo.cpp \
    piezas.cpp \
    game.cpp \
    siguientes.cpp \
    log.cpp \
    score.cpp

HEADERS  += \
    arbolexpr.h \
    nodo.h \
    piezas.h \
    game.h \
    siguientes.h \
    log.h \
    score.h

RESOURCES += \
    res.qrc
