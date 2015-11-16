#ifndef GAME_H
#define GAME_H
#include <QLabel>
#include "piezas.h"
#include "log.h"
#include "score.h"

class Game : public QGraphicsView
{
public:
    Game();
    QGraphicsScene * scene;
    QGraphicsView * view;
    Log * log;
    Score * scores;
    QGraphicsProxyWidget *proxyWidgetLog;
    QGraphicsProxyWidget *proxyWidgetScores;
    int score;
    void update();
    int check();
    void removeLine(int row);
    void over();

signals:

public slots:
};

#endif // GAME_H
