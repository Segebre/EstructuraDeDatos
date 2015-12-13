#ifndef FLOYD_H
#define FLOYD_H
#include "nodo.h"

class Floyd
{
public:
    Floyd();
    int siguiente;
    int cost[8][8];
    int path[8][8];
    Nodo * nodos[8];
    void agregarNodo(Nodo * nodo);
    void resolver();
    void print();
};

#endif // FLOYD_H
