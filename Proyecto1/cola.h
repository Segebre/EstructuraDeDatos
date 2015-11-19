#ifndef COLA_H
#define COLA_H
#include "nodocola.h"

class Cola
{
public:
    Cola();
    NodoCola* primero;
    void push(ArbolExpr valor);
    ArbolExpr pop();
};

#endif // COLA_H
