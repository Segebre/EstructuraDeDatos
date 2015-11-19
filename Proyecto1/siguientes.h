#ifndef SIGUIENTES_H
#define SIGUIENTES_H
#include <QString>
#include <QLabel>
#include "cola.h"

class Siguientes
{
public:
    Siguientes();
    Cola pila;
    QLabel * label;
    int siguienteValor();
    void updateSiguientes();

signals:

public slots:
};

#endif // SIGUIENTES_H
