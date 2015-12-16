#include "dijkstra.h"
#include "QLabel"
#include "QString"

extern QLabel * label;

Dijkstra::Dijkstra()
{
    siguiente = 0;
    chequeado = 0;
    for(int i = 0; i < cantidadDeNodos; i++)
    {
        mapa[i][0] = i;
        mapa[i][1] = 0;
        mapa[i][2] = 10000;
        mapa[i][3] = -1;
    }
}

void Dijkstra::agregarNodo(Nodo *nodo)
{
    //for(int i = 0; i < cantidadDeNodos; i++)
        //nodos[i] = nodo[i];
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





    /*mapa[raiz][1] = 1;
    if(!chequeado)
    {
        mapa[raiz][2] = 0;
        chequeado = 1;
    }
    for(int i = 0; i < cantidadDeNodos && nodos[raiz]->aristas[i] != NULL; i++)
    {
        //cout<<mapa[nodos[raiz]->aristas[i]->destino][2] <<endl;
        //cout<<nodos[raiz]->aristas[i]->peso<<endl;
        //cout<<mapa[nodos[raiz]->numero][2]<<endl;
        cout<<mapa[nodos[raiz]->aristas[i]->destino][2]<<" > "<<nodos[raiz]->aristas[i]->peso + mapa[nodos[raiz]->numero][2]<<endl;
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
    label = new QLabel("hola33");*/
}

void Dijkstra::print()
{
    /*for(int i = 0; i < cantidadDeNodos; i++)
    {
        for(int j = 0; j < 4; j++)
            cout<<mapa[i][j]<<"    ";
        cout<<endl;
    }*/
    QString fila = QString("Dijkstra\n--------\n\n");
    for(int i = 0; i < cantidadDeNodos; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            fila.append(QString::number(mapa[i][j]));
            fila.append("    ");
        }
        fila.append("\n");
    }
    fila.append("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    label = new QLabel(fila);
}

