#ifndef ARISTA_H
#define ARISTA_H
#include <iostream>

using namespace std;

class Arista
{
public:
    Arista(int src, int peso, int destino);
    int src;
    int peso;
    int destino;
};

#endif // ARISTA_H
