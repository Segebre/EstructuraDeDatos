#include "nodo.h"

Nodo::Nodo(string nombre)
{
    this->nombre = nombre;
    fase = 0;
    aristaSize = 0;
}

string Nodo::getNombre()
{
    return nombre;
}

void Nodo::addArista(Nodo *par)
{
    arista[aristaSize++] = par;
}

bool Nodo::checkFase(int f)
{
    for(int i = 0; i < aristaSize; i++)
    {
        if(arista[i]->fase == f)
            return 0;
    }
    return 1;
}
