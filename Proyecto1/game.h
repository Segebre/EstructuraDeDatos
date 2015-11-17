#ifndef GAME_H
#define GAME_H
#include <QLabel>
#include <QImage>
#include <QMediaPlayer>
#include "piezas.h"
#include "log.h"
#include "score.h"
#include "siguientes.h"

class Game : public QGraphicsView
{
public:
    Game();
    QGraphicsScene * scene;
    QGraphicsView * view;
    Log * log;
    Score * scores;
    Siguientes * siguientes;
    QGraphicsProxyWidget *proxyWidgetLog;
    QGraphicsProxyWidget *proxyWidgetScores;
    QGraphicsProxyWidget *proxyWidgetSiguientes;
    QSoundEffect * clearSound;
    int score;
    void update();
    int check();
    void removeLine(int row);
    void over();

signals:

public slots:
};

#endif // GAME_H
