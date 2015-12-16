#include "arista.h"

Arista::Arista(int peso, int destino)
{
    this->src = -1;
    this->peso = peso;
    this->destino = destino;
}

Arista::Arista(int src, int peso, int destino)
{
    this->src = src;
    this->peso = peso;
    this->destino = destino;
}

