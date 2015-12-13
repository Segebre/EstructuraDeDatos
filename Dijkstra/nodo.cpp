#include "nodo.h"

Nodo::Nodo(int numero)
{
    this->numero = numero;
    sigDisp = 0;
    for(int i = 0; i < 4; i++)
        aristas[i] = NULL;
}

void Nodo::addArista(Arista * arista)
{
    aristas[sigDisp++] = arista;
}

