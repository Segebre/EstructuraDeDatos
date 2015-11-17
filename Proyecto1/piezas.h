#ifndef PIEZAS_H
#define PIEZAS_H
#include <QGraphicsScene>
#include <QGraphicsRectItem>
#include <QGraphicsView>
#include <QObject>
#include <QTimer>
#include <QKeyEvent>
#include <QList>
#include <QSoundEffect>
#include "arbolexpr.h"
#include "game.h"

class Piezas : public QObject, public QGraphicsRectItem
{
    Q_OBJECT
public:
    Piezas(int tamano);
    Piezas(int tamano, int pos);
    ArbolExpr * arbol;
    int width;
    int height;
    int color;
    void keyPressEvent(QKeyEvent *event);
    QTimer * timer;
    QSoundEffect * moveSound;
    bool llego;
    void pintar(int color);
signals:

public slots:
    void move();
};

#endif // PIEZAS_H
