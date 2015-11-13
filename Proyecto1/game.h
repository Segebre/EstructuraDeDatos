#ifndef GAME_H
#define GAME_H
#include "piezas.h"

class Game : public QGraphicsView
{
public:
    Game();
    QGraphicsScene * scene;
    QGraphicsView * view;

signals:

public slots:
};

#endif // GAME_H
