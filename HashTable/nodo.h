#ifndef NODO_H
#define NODO_H
#include <iostream>

using namespace std;

class Nodo
{
public:
    Nodo(string palabra);
    string palabra;
    Nodo * next;
};

#endif // NODO_H
