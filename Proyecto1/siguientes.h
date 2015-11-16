#ifndef SIGUIENTES_H
#define SIGUIENTES_H
#include <QString>
#include <QQueue>
#include <QLabel>
#include "arbolexpr.h"

class Siguientes
{
public:
    Siguientes();
    QQueue<ArbolExpr> queue;
    QLabel * label;
    int siguienteValor();
    void updateSiguientes();

signals:

public slots:
};

#endif // SIGUIENTES_H
