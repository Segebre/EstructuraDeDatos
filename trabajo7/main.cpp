#include <QCoreApplication>
#include <iostream>
#include "nodo.h"

using namespace std;

Nodo* ultimo;
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
    if(ultimo == NULL)
        ultimo = new Nodo(valor);
    else
    {
        Nodo* temp = new Nodo(valor);
        temp->next = ultimo;
        ultimo = temp;
    }
}

Nodo* pop()
{
    Nodo *i = ultimo;
    if(i != NULL)
    {
        if(i->next == NULL)
            ultimo = NULL;
        else{
            while( i->next->next != NULL)
            {
                i = i->next;
            }
            Nodo* temp = i;
            i = i->next;
            temp->next = NULL;
        }
    }
    return i;
}

void print()
{
    cout<<"\n\n-------------Cola-------------"<<endl;
    for(Nodo *i = ultimo; i != NULL; i = i->next)
    {
        cout<<i->valor<<endl;
    }
}
