#ifndef SCORE_H
#define SCORE_H
#include <QString>
#include <QStack>
#include <QLabel>

class Score
{
public:
    Score();
    QStack<QString> stak1;
    QStack<QString> stak2;
    QLabel * label;
    int jugados;
    void addScore(int score);
    void updateScores();

signals:

public slots:
};

#endif // SCORE_H
