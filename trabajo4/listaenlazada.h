#ifndef LISTAENLAZADA_H
#define LISTAENLAZADA_H
#include "nodo.h"

class ListaEnlazada
{
private:
    Nodo* first;
    Nodo* last;
public:
    ListaEnlazada();
    void agregar(int numero);
    int buscar(int numero);
    void borrar(int posicion);
    void insertar(int posicion, int valor);
    void print();
};

#endif // LISTAENLAZADA_H
