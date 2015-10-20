#ifndef NODO_H
#define NODO_H
#include <string>

using namespace std;

class Nodo
{
private:
    string nombre;
    int fase;
    string* arista[];

public:
    Nodo(string nombre, string* arista[]);
    string getNombre();
    int getFase();
    string* getArista();
};

#endif // NODO_H
