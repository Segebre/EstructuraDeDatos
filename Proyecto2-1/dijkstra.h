#ifndef DIJKSTRA_H
#define DIJKSTRA_H
#include "nodo.h"

class Dijkstra
{
public:
    Dijkstra();
    int siguiente;
    bool chequeado;
    static const int cantidadDeNodos = 5;
    int mapa[cantidadDeNodos][4];
    Nodo * nodos[cantidadDeNodos];
    void agregarNodo(Nodo * nodo);
    void resolver(int raiz);
    void print();
};

#endif // DIJKSTRA_H
