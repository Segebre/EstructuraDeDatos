#include "nodo.h"

Nodo::Nodo(string nombre, string* arista[])
{
    this->nombre = nombre;
    fase = 0;
    for(int i = 0; i<(*arista)->size();i++)
        this->arista[i]=arista[i];
}

string Nodo::getNombre()
{
    return nombre;
}

int Nodo::getFase()
{
    return fase;
}

string* Nodo::getArista()
{
    return *arista;
}
