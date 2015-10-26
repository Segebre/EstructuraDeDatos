#include "diagrama.h"

Diagrama::Diagrama()
{
    nodosSize = 0;
}

void Diagrama::addNodo(Nodo* nodo)
{
    nodos[nodosSize++] = nodo;
}

int Diagrama::setFases()
{
    int faseActual = 1;
    for(int faltan = nodosSize; faltan > 0; faseActual++)
    {
        for(int i = 0; i < nodosSize; i++)
        {
            if(nodos[i]->fase == 0 && nodos[i]->checkFase(faseActual))
            {
                nodos[i]->fase = faseActual;
                faltan--;
            }
        }
    }
    return faseActual-1;
}

void Diagrama::print(int f)
{
    for(int i = 0; i < f; i++)
    {
        cout<<"fase: "<<(i+1)<<endl;
        for(int j = 0; j < nodosSize; j++)
        {
            if(nodos[j]->fase == i+1)
                cout<<nodos[j]->getNombre()<<endl;
        }
    }
}
