#include "score.h"

Score::Score()
{
    label = new QLabel();
    updateScores();
    jugados = 0;
}

void Score::addScore(int score)
{
    QString stringer;
    stringer.append("Juego ");
    stringer.append(QString::number(++jugados));
    stringer.append(": ");
    stringer.append(QString::number(score));
    stak1.push(stringer);
    updateScores();
}

void Score::updateScores()
{
    QString stringer;
    QString scores;
    scores.append("-------------\n|| Scores ||\n-------------\n\n");
    while(!stak1.empty())
    {
        stringer = stak1.pop();
        scores.append(stringer);
        scores.append("\n");
        stak2.push(stringer);
    }

    label->setText(scores);

    while(!stak2.empty())
    {
        stak1.push(stak2.pop());
    }
    label->adjustSize();
}
