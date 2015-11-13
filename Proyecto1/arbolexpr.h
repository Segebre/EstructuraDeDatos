#ifndef ARBOLEXPR_H
#define ARBOLEXPR_H
#include "nodo.h"

class ArbolExp
{
private:
    int resolver(int num, char op, int num2);
public:
    ArbolExp();
    Nodo* raiz;
    char getExpr();
    int resolver();
    void newData();
    void print();
};

#endif // ARBOLEXPR_H
