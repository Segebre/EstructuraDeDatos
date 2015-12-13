#include "kruskal.h"

Kruskal::Kruskal()
{
    for(int i = 0; i < cantidadDeNodos; i++)
        disjointSet[i] = -1;
}

void Kruskal::addArista(int src, int peso, int dest)
{
    aristas.push_back(new Arista(src, peso, dest));
}

void Kruskal::resolver()
{
    vector<Arista *> tempAristas;
    vector<int> pesos;
    for(int i = 0; i < aristas.size(); i++)
        tempAristas.push_back(aristas[i]);
    aristas.clear();

    for(int i = 0; i < tempAristas.size(); i++)
        pesos.push_back(tempAristas[i]->peso);

    sort(pesos.begin(), pesos.end());

    for(int i = 0; i < pesos.size(); i++)
    {
        int j = 0;
        while(tempAristas[j]->peso != pesos[i])
            j++;
        aristas.push_back(tempAristas[j]);
        tempAristas.erase(tempAristas.begin() + j);
    }

    for(int i = 0; i < aristas.size(); i++)
    {
        int x = aristas[i]->src;
        int y = aristas[i]->destino;
        while(disjointSet[x] >= 0)
            x = disjointSet[x];
        while(disjointSet[y] >= 0)
            y = disjointSet[y];

        if(x != y)
        {
            if(disjointSet[x] < disjointSet[y])
            {
                disjointSet[x] += disjointSet[y];
                disjointSet[y] = x;
            }
            else
            {
                disjointSet[y] += disjointSet[x];
                disjointSet[x] = y;
            }
        }

    }

}

void Kruskal::print()
{
    //for(int i = 0; i < aristas.size(); i++)
    //    cout<<aristas[i]->src<<"   "<<aristas[i]->peso<<"   "<<aristas[i]->destino<<endl;
    for(int i = 0; i < cantidadDeNodos; i++)
        cout<<disjointSet[i]<<endl;
}

