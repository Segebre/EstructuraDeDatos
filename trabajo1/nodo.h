#ifndef NODO_H
#define NODO_H
#include <string>

using namespace std;

class Nodo
{
private:
    string nombre;
    int aristaSize;
    Nodo* arista[10];

public:
    Nodo(string nombre);
    int fase;
    string getNombre();
    void addArista(Nodo *par);
    bool checkFase(int f);
};

#endif // NODO_H
