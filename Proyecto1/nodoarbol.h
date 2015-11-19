#ifndef NODOARBOL_H
#define NODOARBOL_H
#include <iostream>
#include <QCoreApplication>

using namespace std;

class NodoArbol
{
public:
    NodoArbol(char valor);
    char valor;
    NodoArbol* left;
    NodoArbol* right;
};

#endif // NODOARBOL_H
