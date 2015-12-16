#include "arista.h"

Arista::Arista(int destino, double peso)
{
    this->src = -1;
    this->peso = peso;
    this->destino = destino;
}

Arista::Arista(int destino, int src, double peso)
{
    this->src = src;
    this->peso = peso;
    this->destino = destino;
}


