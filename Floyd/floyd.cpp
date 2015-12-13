#include "floyd.h"

Floyd::Floyd()
{
    siguiente = 0;
    for(int i = 0; i < 8; i++)
    {
        for(int j = 0; j < 8; j++)
        {
            cost[i][j] = 100;
            path[i][j] = -1;
        }
    }
}

void Floyd::agregarNodo(Nodo *nodo)
{
    nodos[siguiente++] = nodo;
    for(int i = 0; i < 7 && nodos[siguiente-1]->aristas[i] != NULL; i++)
    {
        cost[nodos[siguiente-1]->aristas[i]->destino][nodos[siguiente-1]->numero] = nodos[siguiente-1]->aristas[i]->peso;
        path[nodos[siguiente-1]->aristas[i]->destino][nodos[siguiente-1]->numero] = nodos[siguiente-1]->aristas[i]->destino;
    }
}

void Floyd::resolver()
{
    for(int i = 0; i < 8; i++)
    {
        for(int j = 0; j < 8; j++)
        {
            for(int k = 0; k < 8; k++)
            {
                if(cost[j][i] + cost[i][k] < cost[j][k] )
                {
                    cost[j][k] = cost[j][i] + cost[i][k];
                    path[j][k] = i;
                }
            }
        }
    }

    for(int i = 0; i < 8; i++)
    {
        cost[i][i] = 0;
        path[i][i] = -1;
    }
}

void Floyd::print()
{
    cout<<"\n\nCost\n----\n     ";
    for(int i = -1; i < 8; i++)
    {
        for(int j = 0; j < 8; j++)
        {
            if(i == -1)
                cout<<j<<"      ";
            else
            {
                if(cost[i][j] > 99)
                    cout<<cost[i][j]<<"    ";
                else if(cost[i][j] > 9 || cost[i][j] < 0)
                    cout<<cost[i][j]<<"     ";
                else
                    cout<<cost[i][j]<<"      ";
            }
        }
        if(i+1 < 8)
            cout<<"\n"<<i+1<<"    ";
    }

    cout<<"\n\nPath\n----\n     ";
    for(int i = -1; i < 8; i++)
    {
        for(int j = 0; j < 8; j++)
        {
            if(i == -1)
                cout<<j<<"      ";
            else
            {
                if(path[i][j] > 99)
                    cout<<path[i][j]<<"    ";
                else if(path[i][j] > 9 || path[i][j] < 0)
                    cout<<path[i][j]<<"     ";
                else
                    cout<<path[i][j]<<"      ";
            }
        }
        if(i+1 < 8)
            cout<<"\n"<<i+1<<"    ";
    }
    cout<<endl;
}

