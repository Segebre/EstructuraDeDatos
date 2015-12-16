#ifndef NODO_H
#define NODO_H
#include "arista.h"

class Nodo
{
public:
    Nodo(string ciudad, int numero);
    int numero;
    string ciudad;
    Arista * aristas[6];
    void addArista(Arista * arista);

private:
    int sigDisp;
};

#endif // NODO_H
