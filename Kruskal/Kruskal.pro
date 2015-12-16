QT += core
QT -= gui

TARGET = Kruskal
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    arista.cpp \
    kruskal.cpp

HEADERS += \
    arista.h \
    kruskal.h

