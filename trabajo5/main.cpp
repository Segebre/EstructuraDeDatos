#include <QCoreApplication>
#include "nodo.h"

Nodo* cursor[1000];
int siguienteDisponible = 0;
int inicio = 0;
int final = 0;

void agregar(int numero);
int buscar(int numero);
void borrar(int posicion);

void print();

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int opcMenu;
    int opcParam;
    do
    {
        cout<<"\n---------------Menu---------------- "<<endl;
        cout<<"1. agregar"<<endl;
        cout<<"2. buscar"<<endl;
        cout<<"3. borrar"<<endl;
        cout<<"4. insertar"<<endl;
        cout<<"0. salir"<<endl;
        cin>>opcMenu;
        if(opcMenu == 0)
            exit(1);
        cout<<"Parametro: "<<endl;
        cin>>opcParam;
        switch(opcMenu)
        {
        case 1:
            agregar(opcParam);break;
        case 2:
            cout<<buscar(opcParam)<<endl;break;
        case 3:
            borrar(opcParam);break;
        /*case 4:
            int temp = opcParam;
            cout<<"posicion: "<<endl;
            cin>>opcParam;
            insertar(opcParam,temp);break;
            break;
        */}
        print();
    }while(true);

    return a.exec();
}

void actualizar()
{
    for(int i = 0; i < 1000; i++)
    {
        if(cursor[i] == 0)
        {
            siguienteDisponible = i;
            break;
        }
    }
}

void agregar(int numero)
{
    final = siguienteDisponible;
    cursor[final] = new Nodo(numero);
    actualizar();
    cout<<siguienteDisponible<<endl;
    cursor[final]->siguiente = siguienteDisponible;

}

int buscar(int numero)
{
    for(int i = inicio; i <= final; i = cursor[i]->siguiente)
    {
        if(cursor[i]->numero == numero)
            return i;
    }
    return -1;
}

void borrar(int posicion)
{
    if(cursor[posicion] != 0)
    {
        for(int i = inicio; i <= final; i = cursor[i]->siguiente)
        {
            if(inicio == posicion)
            {
                inicio = cursor[i]->siguiente;
                i = 0;
                break;
            }
            if(cursor[i]->siguiente == posicion)
            {
                cursor[i]->siguiente = cursor[posicion]->siguiente;
                if(cursor[i]->siguiente == 0)
                    final = i;
            }
        }
        actualizar();
    }
}

void print()
{
    for(int i = inicio; i <= final; i = cursor[i]->siguiente)
        cout<<cursor[i]->numero<<endl;
}
