#ifndef DIAGRAMA_H
#define DIAGRAMA_H
#include "nodo.h"
#include <string>
#include <iostream>

using namespace std;

class Diagrama
{
private:
    Nodo* nodos[15];
    int nodosSize;
public:
    Diagrama();
    void addNodo(Nodo* nodo);
    int setFases();
    void print(int f);
};

#endif // DIAGRAMA_H
