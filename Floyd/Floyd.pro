QT += core
QT -= gui

TARGET = Floyd
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    arista.cpp \
    nodo.cpp \
    floyd.cpp

HEADERS += \
    arista.h \
    nodo.h \
    floyd.h

