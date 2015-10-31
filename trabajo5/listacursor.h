#ifndef LISTACURSOR_H
#define LISTACURSOR_H
#include "nodo.h"

class ListaCursor
{
public:
    ListaCursor();
    Nodo bdd[1000];
    int disponibles[1000];
    int sd();
    void newCursor(int valor);
    void agregar(int arreglo, int valor);
    int buscar(int arreglo, int valor);
    void insertar(int arreglo, int pos, int valor);
    void borrar(int arreglo, int pos);
    void print(int arreglo);
};

#endif // LISTACURSOR_H
