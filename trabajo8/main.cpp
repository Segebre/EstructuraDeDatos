#include <QCoreApplication>
#include <iostream>
#include "nodo.h"

using namespace std;

Nodo* primero = NULL;
void agregar(int valor, Nodo **nodo);
void borrar(int valor, Nodo **nodo);
Nodo* buscar(int valor, Nodo *nodo);
void print(Nodo* nodo);

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    int opcMenu;
    int opcParam;

    agregar(5, &primero);
    /*agregar(7, &primero);
    agregar(6, &primero);
    agregar(9, &primero);
    agregar(8, &primero);
    agregar(2, &primero);
    agregar(1, &primero);
    agregar(3, &primero);
    agregar(4, &primero);*/

    do
    {
        cout<<"1. agregar"<<endl;
        cout<<"2. borrar"<<endl;
        cout<<"3. buscar"<<endl;
        cout<<"4. print"<<endl;
        cout<<"0. salir"<<endl;
        cin>>opcMenu;
        switch(opcMenu)
        {
        case 1:
            cout<<"Valor:"<<endl;
            cin>>opcParam;
            agregar(opcParam, &primero);break;
        case 2:
            if(primero == NULL)
            {
                cout<<"arbol vacio"<<endl;
                break;
            }
            cout<<"Valor:"<<endl;
            cin>>opcParam;
            borrar(opcParam, &primero);break;
        case 3:
            cout<<"Valor:"<<endl;
            cin>>opcParam;
            cout<<buscar(opcParam, primero)->valor<<endl;break;
        case 4:
            print(primero);break;
        }
    }while(opcMenu!=0);

    return a.exec();
}

void agregar(int valor, Nodo** nodo)
{
    if(*nodo == NULL)
        *nodo = new Nodo(valor);
    else
    {
        if((*nodo)->valor > valor)
            agregar(valor, &((*nodo)->left));
        else
            agregar(valor, &((*nodo)->right));
    }
}

void borrar(int valor, Nodo** nodo)
{
    if(*nodo != NULL)
    {
        if((*nodo)->valor == valor)
        {
            if((*nodo)->left != NULL)
            {
                Nodo *temp = (*nodo)->left;
                while(temp->right != NULL)
                    temp = temp->right;
                Nodo **temp2 = nodo;
                temp->right = (*nodo)->right;
                *nodo = (*temp2)->left;
            }
            *nodo = (*nodo)->right;
        }
        else
        {
            if((*nodo)->valor > valor)
                borrar(valor, &((*nodo)->left));
            else
                borrar(valor, &((*nodo)->right));
        }
    }
}

Nodo* buscar(int valor, Nodo* nodo)
{
    if(nodo == NULL)
        return NULL;
    if(nodo->valor == valor)
        return nodo;
    if(nodo->valor > valor)
        return buscar(valor, nodo->left);
    return buscar(valor, nodo->right);

}

void print(Nodo* nodo)
{
    if(nodo == NULL)
        return void();
    print(nodo->left);
    cout<<nodo->valor<<endl;
    print(nodo->right);
}
