#ifndef ARISTA_H
#define ARISTA_H
#include <iostream>

using namespace std;

class Arista
{
public:
    Arista(int destino, double peso);
    Arista(int destino, int src, double peso);
    int src;
    double peso;
    int destino;
};

#endif // ARISTA_H
