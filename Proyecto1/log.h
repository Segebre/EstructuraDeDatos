#ifndef LOG_H
#define LOG_H
#include <QString>
#include <QLabel>
#include "pila.h"

class Log
{
public:
    Log();
    Pila stak1;
    Pila stak2;
    QLabel * label;
    void addPuntos(int num, int score);
    void eliminoFila(int num, int score);
    void endLog();
    void updateLog();

signals:

public slots:
};

#endif // LOG_H
