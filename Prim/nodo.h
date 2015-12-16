#ifndef NODO_H
#define NODO_H
#include "arista.h"

class Nodo
{
public:
    Nodo(int numero);
    int numero;
    Arista * aristas[5];
    void addArista(Arista * arista);

private:
    int sigDisp;
};

#endif // NODO_H
