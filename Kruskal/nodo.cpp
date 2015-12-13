#include "nodo.h"

Nodo::Nodo(int numero)
{
    this->numero = numero;
    sigDisp = 0;
    aristas[0] = NULL;
    aristas[1] = NULL;
    aristas[2] = NULL;
    aristas[3] = NULL;
}

void Nodo::addArista(Arista * arista)
{
    aristas[sigDisp++] = arista;
}

