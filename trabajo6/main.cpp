#include <QCoreApplication>
#include <iostream>
#include "nodo.h"

using namespace std;

Nodo* primero;
void push(int valor);
Nodo* pop();
void print();

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int opcMenu;
    int opcParam;
    do
    {
        cout<<"1. push"<<endl;
        cout<<"2. pop"<<endl;
        cout<<"3. print"<<endl;
        cout<<"0. salir"<<endl;
        cin>>opcMenu;
        switch(opcMenu)
        {
        case 1:
            cout<<"Valor"<<endl;
            cin>>opcParam;
            push(opcParam);break;
        case 2:
            pop();break;
        case 3:
            print();break;
        }
    }while(opcMenu!=0);

    return a.exec();
}

void push(int valor)
{
    if(primero == NULL)
        primero = new Nodo(valor);
    else
    {
        Nodo* temp = primero;
        primero = new Nodo(valor);
        primero->next = temp;
    }
}

Nodo* pop()
{
    Nodo* temp = primero;
    primero = primero->next;
    return temp;
}

void print()
{
    cout<<"\n\n-------------Pila-------------"<<endl;
    for(Nodo *i = primero; i != NULL; i = i->next)
    {
        cout<<i->valor<<endl;
    }
}

