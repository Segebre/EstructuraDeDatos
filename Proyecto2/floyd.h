#ifndef FLOYD_H
#define FLOYD_H
#include "nodo.h"

class Floyd
{
public:
    Floyd();
    int siguiente;
    double cost[54][54];
    int path[54][54];
    Nodo * nodos[54];
    void agregarNodo(Nodo * nodo);
    void resolver();
    void print();
};

#endif // FLOYD_H
