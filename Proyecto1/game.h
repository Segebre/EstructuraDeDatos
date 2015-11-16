#ifndef GAME_H
#define GAME_H
#include "piezas.h"
#include "log.h"
#include <QLabel>

class Game : public QGraphicsView
{
public:
    Game();
    QGraphicsScene * scene;
    QGraphicsView * view;
    Log * log;
    QGraphicsProxyWidget *proxyWidget;
    int score;
    void update();
    int check();
    void removeLine(int row);
    void over();

signals:

public slots:
};

#endif // GAME_H
