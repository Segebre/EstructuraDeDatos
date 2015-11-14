QT += core
QT -= gui

TARGET = borrame
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    nodo.cpp \
    arbolexpr.cpp

HEADERS += \
    nodo.h \
    arbolexpr.h

