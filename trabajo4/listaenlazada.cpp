#include "listaenlazada.h"

ListaEnlazada::ListaEnlazada()
{
    first = NULL;
    last = NULL;
}

void ListaEnlazada::agregar(int numero)
{

    if(first == NULL)
    {
        first = new Nodo(numero);
        last = first;
    }
    else
    {
        last->next = new Nodo(numero);
        last = last->next;
    }
}

int ListaEnlazada::buscar(int numero)
{
    int cont = 0;
    for(Nodo* i = first; i != NULL; i = i->next, cont++)
    {
        if(i->numero == numero)
            return cont;
    }
    return -1;
}

void ListaEnlazada::borrar(int posicion)
{
    int cont = 0;
    for(Nodo* i = first; cont <= posicion && i != NULL; i=i->next, cont++)
    {
        if(posicion == 0)
        {
            Nodo* temp = first;
            first = temp->next;
            temp = NULL;

        }
        else if(cont+1 == posicion && i->next != NULL)
        {
            if(i->next->next == NULL)
            {
                last = i;
                i->next = NULL;
                continue;
            }
            Nodo* temp = i->next;
            i->next = i->next->next;
            temp = NULL;
        }
    }
}

void ListaEnlazada::insertar(int posicion, int valor)
{
    //Nodo* temp = new Nodo(valor);
    int cont = 0;
    for(Nodo* i = first; cont <= posicion && i != NULL; i=i->next, cont++)//vuelve a definir i?
    {
        if(posicion == 0)
        {
            Nodo* temp = new Nodo(valor);
            temp->next = first;
            first = temp;
            temp = NULL;

        }
        if(cont+1 == posicion && i->next != NULL)
        {
            Nodo* temp = new Nodo(valor);
            temp->next = i->next;
            i->next = temp;
            temp = NULL;
        }
    }
}

void ListaEnlazada::print()
{
    cout<<"Lista: "<<endl;
    for(Nodo* i = first; i != NULL; i = i->next)
        cout<<i->numero<<endl;
}

