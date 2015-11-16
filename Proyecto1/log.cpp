#include "log.h"

//extern Game * game;

Log::Log()
{
    label = new QLabel();
    stak1.push("Juego Inizializado!");
    updateLog();
}

void Log::addPuntos(int num, int score)
{
    QString stringer;
    stringer.append("Has ganado ");
    stringer.append(QString::number(num));
    stringer.append(" puntos. Tienes un total de ");
    stringer.append(QString::number(score));
    stringer.append(" puntos.");
    stak1.push(stringer);
    updateLog();
}

void Log::eliminoFila(int num, int score)
{
    QString stringer;
    stringer.append("Se ha eliminado la fila ");
    stringer.append(num+48);
    stak1.push(stringer);
    addPuntos(10, score);
}

void Log::endLog()
{
    stak1.clear();
    stak1.push("Juego Inizializado!");
    updateLog();
}

void Log::updateLog()
{
    QString stringer;
    QString log;
    log.append("--------------------\n|| In-Game Log ||\n--------------------\n\n");
    while(!stak1.empty())
    {
        stringer = stak1.pop();
        log.append(stringer);
        log.append("\n");
        stak2.push(stringer);
    }

    label->setText(log);

    while(!stak2.empty())
    {
        stak1.push(stak2.pop());
    }
    label->adjustSize();
}

