#ifndef NODO_H
#define NODO_H
#include <iostream>

using namespace std;


class Nodo
{
public:
    Nodo(int numero);
    int numero;
    Nodo* next;
};

#endif // NODO_H
