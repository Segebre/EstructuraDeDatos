#ifndef ARBOLEXPR_H
#define ARBOLEXPR_H
#include "nodoarbol.h"

class ArbolExpr
{
private:
    int resolver(int num, char op, int num2);
public:
    ArbolExpr();
    NodoArbol* raiz;
    char getExpr();
    int resolver();
    void newData();
    QString getString();
    void print();
};

#endif // ARBOLEXPR_H
