QT += core
QT -= gui

TARGET = Dijkstra
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    arista.cpp \
    nodo.cpp \
    dijkstra.cpp

HEADERS += \
    arista.h \
    nodo.h \
    dijkstra.h

