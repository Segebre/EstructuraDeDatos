#ifndef KRUSKAL_H
#define KRUSKAL_H
#include <vector>
#include <algorithm>
#include "nodo.h"


class Kruskal
{
public:
    Kruskal();
    vector<Arista *> aristas;
    static const int cantidadDeNodos = 8;
    int disjointSet[cantidadDeNodos];
    void addArista(int src, int peso, int dest);
    void resolver();
    void print();
};

#endif // KRUSKAL_H
