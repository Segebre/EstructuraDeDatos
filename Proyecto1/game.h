#ifndef GAME_H
#define GAME_H
#include "piezas.h"

class Game : public QGraphicsView
{
public:
    Game();
    QGraphicsScene * scene;
    QGraphicsView * view;
    int score;
    void update();
    int check();
    void removeLine(int row);
    void over();

signals:

public slots:
};

#endif // GAME_H
