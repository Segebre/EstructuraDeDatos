#include "cola.h"

Cola::Cola()
{

}

void Cola::push(ArbolExpr valor)
{
    if(primero == NULL)
        primero = new NodoCola(valor);
    else
    {
        NodoCola* temp = new NodoCola(valor);
        temp->next = primero;
        primero = temp;
    }
}

ArbolExpr Cola::pop()
{
    NodoCola * i = primero;
    if(i->next == NULL)
        primero = NULL;
    else{
        while( i->next->next != NULL)
        {
            i = i->next;
        }
        NodoCola* temp = i;
        i = i->next;
        temp->next = NULL;
    }
    return i->valor;
}

