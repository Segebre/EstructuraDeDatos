#ifndef PIEZAS_H
#define PIEZAS_H
#include <QGraphicsScene>
#include <QGraphicsRectItem>
#include <QGraphicsView>
#include <QObject>
#include <QTimer>
#include <QKeyEvent>
#include <QList>
#include "arbolexpr.h"
#include "game.h"

class Piezas : public QObject, public QGraphicsRectItem
{
    Q_OBJECT
public:
    Piezas();
    ArbolExpr * arbol;
    int tamano;
    void keyPressEvent(QKeyEvent *event);
    QTimer * timer;
    bool llego;

signals:

public slots:
    void move();
};

#endif // PIEZAS_H
