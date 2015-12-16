#include "nodo.h"

Nodo::Nodo(string ciudad, int numero)
{
    this->numero = numero;
    this->ciudad = ciudad;
    sigDisp = 0;
    for(int i = 0; i < 6; i++)
        aristas[i] = NULL;
}

void Nodo::addArista(Arista * arista)
{
    aristas[sigDisp++] = arista;
}

