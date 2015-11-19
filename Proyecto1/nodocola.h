#ifndef NODOCOLA_H
#define NODOCOLA_H
#include "arbolexpr.h"

class NodoCola
{
public:
    NodoCola(ArbolExpr valor);
    ArbolExpr valor;
    NodoCola * next;
};

#endif // NODOCOLA_H
