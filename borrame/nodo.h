#ifndef NODO_H
#define NODO_H
#include <iostream>
#include <QCoreApplication>

using namespace std;

class Nodo
{
public:
    Nodo(char valor);
    char valor;
    Nodo* left;
    Nodo* right;
};

#endif // NODO_H
