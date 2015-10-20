#ifndef DIAGRAMA_H
#define DIAGRAMA_H
#include "nodo.h"
#include <string>

using namespace std;

class Diagrama
{
private:
    Nodo *nodos[];
public:
    Diagrama();
    Nodo* getNodos();
};

#endif // DIAGRAMA_H
