#ifndef SCORE_H
#define SCORE_H
#include <QString>
#include <QLabel>
#include "pila.h"

class Score
{
public:
    Score();
    Pila stak1;
    Pila stak2;
    QLabel * label;
    int jugados;
    void addScore(int score);
    void updateScores();

signals:

public slots:
};

#endif // SCORE_H
