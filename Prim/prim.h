#ifndef PRIM_H
#define PRIM_H
#include "nodo.h"

class Prim
{
public:
    Prim();
    int siguiente;
    bool chequeado;
    static const int cantidadDeNodos = 5;
    int mapa[cantidadDeNodos][4];
    Nodo * nodos[8];
    void agregarNodo(Nodo * nodo);
    void resolver(int raiz);
    void print();
};

#endif // PRIM_H
