#ifndef NODO_H
#define NODO_H


class Nodo
{
public:
    Nodo(int valor);
    int valor;
    Nodo* left;
    Nodo* right;
};

#endif // NODO_H
