#-------------------------------------------------
#
# Project created by QtCreator 2015-12-15T14:34:00
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Proyecto2
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    arista.cpp \
    nodo.cpp \
    dijkstra.cpp \
    kruskal.cpp \
    floyd.cpp

HEADERS  += mainwindow.h \
    arista.h \
    nodo.h \
    dijkstra.h \
    kruskal.h \
    floyd.h

FORMS    += mainwindow.ui

RESOURCES += \
    resources.qrc
