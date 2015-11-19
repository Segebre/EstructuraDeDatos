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
    piezas.cpp \
    game.cpp \
    siguientes.cpp \
    log.cpp \
    score.cpp \
    nodoarbol.cpp \
    nodocola.cpp \
    cola.cpp \
    nodopila.cpp \
    pila.cpp

HEADERS  += \
    arbolexpr.h \
    piezas.h \
    game.h \
    siguientes.h \
    log.h \
    score.h \
    nodoarbol.h \
    nodocola.h \
    cola.h \
    nodopila.h \
    pila.h

RESOURCES += \
    res.qrc
