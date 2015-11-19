#ifndef PILA_H
#define PILA_H
#include "nodopila.h"

class Pila
{
public:
    Pila();
    NodoPila* primero;
    void push(QString valor);
    QString pop();
    bool empty();
    void clear();
};

#endif // PILA_H
