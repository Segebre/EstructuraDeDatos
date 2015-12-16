#include "nodo.h"

Nodo::Nodo(int numero, string ciudad)
{
    this->numero = numero;
    this->ciudad = ciudad;
    sigDisp = 0;
    for(int i = 0; i < 4; i++)
        aristas[i] = NULL;
}

void Nodo::addArista(Arista * arista)
{
    aristas[sigDisp++] = arista;
}


