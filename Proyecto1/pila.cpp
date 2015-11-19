#include "pila.h"

Pila::Pila()
{
    primero = NULL;
}

void Pila::push(QString valor)
{
    if(primero == NULL)
        primero = new NodoPila(valor);
    else
    {
        NodoPila* temp = primero;
        primero = new NodoPila(valor);
        primero->next = temp;
    }
}

QString Pila::pop()
{
    NodoPila* temp = primero;
    primero = primero->next;
    return temp->valor;
}

bool Pila::empty()
{
    if(primero == NULL)
        return true;
    return false;
}

void Pila::clear()
{
    primero = NULL;
}
