#include "listacursor.h"

ListaCursor::ListaCursor()
{
    for(int i = 0; i < 1000; i++)
        bdd[i].next = i+1;
    bdd[999].next = -1;
    for(int i = 1; i < 1000; i++)
        disponibles[i] = -1;
}

int ListaCursor::sd()
{
    for(int i = 0; i < 1000; i++)
    {
        if(disponibles[i] == -1)
            return i;
    }
    return 999;
}

void ListaCursor::newCursor(int valor)
{
    int temp = sd();
    disponibles[temp] = disponibles[0];
    bdd[disponibles[0]].numero = valor;
    disponibles[0] = bdd[disponibles[0]].next;
    bdd[disponibles[temp]].next = -1;
}

void ListaCursor::agregar(int arreglo, int valor)
{
    if(disponibles[arreglo] == -1)
        return void();
    int ultimo = disponibles[arreglo];
    while(bdd[ultimo].next != -1)
        ultimo = bdd[ultimo].next;
    bdd[ultimo].next = disponibles[0];
    disponibles[0] = bdd[disponibles[0]].next;
    bdd[bdd[ultimo].next].numero = valor;
    bdd[bdd[ultimo].next].next = -1;
}

int ListaCursor::buscar(int arreglo, int valor)
{
    if(disponibles[arreglo] == -1)
        return -1;
    for(int i = disponibles[arreglo]; i != -1; i = bdd[i].next)
    {
        if(bdd[i].numero == valor)
            return i;
    }
    return -1;
}

void ListaCursor::insertar(int arreglo, int pos, int valor)
{
    if(bdd[pos].numero == -102030405)
        return void();
    else if(disponibles[arreglo] == pos)
    {
        int temp = disponibles[0];
        bdd[temp].numero = valor;
        disponibles[0] = bdd[temp].next;
        bdd[temp].next = disponibles[arreglo];
        disponibles[arreglo] = temp;
    }
    else{
        for(int i = disponibles[arreglo]; i < 1000 && bdd[i].next != -1; i = bdd[i].next)
        {
            if(bdd[i].next == pos)
            {
                int temp = disponibles[0];
                bdd[temp].numero = valor;
                disponibles[0] = bdd[temp].next;
                bdd[temp].next = bdd[i].next;
                bdd[i].next = temp;
            }
        }
    }
}

void ListaCursor::borrar(int arreglo, int pos)
{
    if(bdd[pos].numero == -102030405)
        return void();
    else if(disponibles[arreglo] == pos)
    {
        int temp = bdd[pos].next;
        bdd[pos].next = disponibles[0];
        disponibles[0] = pos;
        disponibles[arreglo] = temp;
    }
    else{
        for(int i = disponibles[arreglo]; i < 1000 && bdd[i].next != -1; i = bdd[i].next)
        {
            if(bdd[i].next == pos)
            {
                int temp = bdd[pos].next;
                bdd[pos].next = disponibles[0];
                disponibles[0] = pos;
                bdd[i].next = temp;
            }
        }
    }
}

void ListaCursor::print(int arreglo)
{
    for(int i = disponibles[arreglo]; i != -1; i = bdd[i].next)
        cout<<bdd[i].numero<<endl;
}
