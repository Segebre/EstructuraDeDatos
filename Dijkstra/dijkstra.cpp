#include "dijkstra.h"

Dijkstra::Dijkstra()
{
    siguiente = 0;
    chequeado = 0;
    for(int i = 0; i < cantidadDeNodos; i++)
    {
        mapa[i][0] = i;
        mapa[i][1] = 0;
        mapa[i][2] = 100;
        mapa[i][3] = -1;
    }
}

void Dijkstra::agregarNodo(Nodo *nodo)
{
    nodos[siguiente++] = nodo;
}

void Dijkstra::resolver(int raiz)
{
    mapa[raiz][1] = 1;
    if(!chequeado)
    {
        mapa[raiz][2] = 0;
        chequeado = 1;
    }
    for(int i = 0; i < cantidadDeNodos && nodos[raiz]->aristas[i] != NULL; i++)
    {
        if(mapa[nodos[raiz]->aristas[i]->destino][2] > nodos[raiz]->aristas[i]->peso + mapa[nodos[raiz]->numero][2])
        {
            mapa[nodos[raiz]->aristas[i]->destino][2] = nodos[raiz]->aristas[i]->peso + mapa[nodos[raiz]->numero][2];
            mapa[nodos[raiz]->aristas[i]->destino][3] = nodos[raiz]->numero;
        }
    }

    for(int i = 0; i < cantidadDeNodos; i++)
    {
        if(mapa[i][1] == 0)
        {
            resolver(i);
            return;
        }
    }
}

void Dijkstra::print()
{
    for(int i = 0; i < cantidadDeNodos; i++)
    {
        for(int j = 0; j < 4; j++)
            cout<<mapa[i][j]<<"    ";
        cout<<endl;
    }
}

