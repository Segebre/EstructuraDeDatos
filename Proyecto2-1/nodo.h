#ifndef NODO_H
#define NODO_H
#include "arista.h"

class Nodo
{
public:
    Nodo(int numero, string ciudad);
    int numero;
    string ciudad;
    Arista * aristas[4];
    void addArista(Arista * arista);

private:
    int sigDisp;
};

#endif // NODO_H
