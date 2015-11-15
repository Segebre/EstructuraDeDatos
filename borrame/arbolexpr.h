#ifndef ARBOLEXPR_H
#define ARBOLEXPR_H
#include "nodo.h"

class ArbolExpr
{
private:
    int resolver(int num, char op, int num2);
public:
    ArbolExpr();
    Nodo* raiz;
    char getExpr();
    int resolver();
    void newData();
    string getString();
    void print();
};

#endif // ARBOLEXPR_H
