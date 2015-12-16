/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *BTNdijkstra;
    QLabel *LABde;
    QLabel *LABa;
    QLabel *mapa;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QComboBox *DBsrc;
    QComboBox *DBdest;
    QPushButton *BTNfloyd;
    QPushButton *BTNkruskal;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(2000, 1500);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        BTNdijkstra = new QPushButton(centralWidget);
        BTNdijkstra->setObjectName(QStringLiteral("BTNdijkstra"));
        BTNdijkstra->setGeometry(QRect(0, 640, 96, 31));
        LABde = new QLabel(centralWidget);
        LABde->setObjectName(QStringLiteral("LABde"));
        LABde->setGeometry(QRect(110, 645, 31, 21));
        LABa = new QLabel(centralWidget);
        LABa->setObjectName(QStringLiteral("LABa"));
        LABa->setGeometry(QRect(240, 645, 21, 21));
        mapa = new QLabel(centralWidget);
        mapa->setObjectName(QStringLiteral("mapa"));
        mapa->setGeometry(QRect(0, 0, 998, 606));
        scrollArea = new QScrollArea(centralWidget);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setGeometry(QRect(1030, 10, 921, 1431));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 919, 1429));
        scrollArea->setWidget(scrollAreaWidgetContents);
        DBsrc = new QComboBox(centralWidget);
        DBsrc->setObjectName(QStringLiteral("DBsrc"));
        DBsrc->setGeometry(QRect(140, 640, 83, 29));
        DBdest = new QComboBox(centralWidget);
        DBdest->setObjectName(QStringLiteral("DBdest"));
        DBdest->setGeometry(QRect(260, 640, 83, 29));
        BTNfloyd = new QPushButton(centralWidget);
        BTNfloyd->setObjectName(QStringLiteral("BTNfloyd"));
        BTNfloyd->setGeometry(QRect(360, 640, 96, 31));
        BTNkruskal = new QPushButton(centralWidget);
        BTNkruskal->setObjectName(QStringLiteral("BTNkruskal"));
        BTNkruskal->setGeometry(QRect(130, 710, 96, 31));
        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        BTNdijkstra->setText(QApplication::translate("MainWindow", "Dijkstra", 0));
        LABde->setText(QApplication::translate("MainWindow", "DE: ", 0));
        LABa->setText(QApplication::translate("MainWindow", "A: ", 0));
        mapa->setText(QString());
        BTNfloyd->setText(QApplication::translate("MainWindow", "Floyd", 0));
        BTNkruskal->setText(QApplication::translate("MainWindow", "Kruskal", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
