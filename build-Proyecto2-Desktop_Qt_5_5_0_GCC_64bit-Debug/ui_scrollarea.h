/********************************************************************************
** Form generated from reading UI file 'scrollarea.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCROLLAREA_H
#define UI_SCROLLAREA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ScrollArea
{
public:
    QWidget *scrollAreaWidgetContents;

    void setupUi(QScrollArea *ScrollArea)
    {
        if (ScrollArea->objectName().isEmpty())
            ScrollArea->setObjectName(QStringLiteral("ScrollArea"));
        ScrollArea->setWidgetResizable(true);
        ScrollArea->resize(400, 300);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        ScrollArea->setWidget(scrollAreaWidgetContents);

        retranslateUi(ScrollArea);

        QMetaObject::connectSlotsByName(ScrollArea);
    } // setupUi

    void retranslateUi(QScrollArea *ScrollArea)
    {
        ScrollArea->setWindowTitle(QApplication::translate("ScrollArea", "ScrollArea", 0));
    } // retranslateUi

};

namespace Ui {
    class ScrollArea: public Ui_ScrollArea {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCROLLAREA_H
