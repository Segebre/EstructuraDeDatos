#include <QCoreApplication>
#include <iostream>

using namespace std;

bool agregar(int valor);
int buscar(int valor);
bool borrar(int pos);
bool insertar(int pos, int valor);
void print();
const int cantidadMaxima = 15;
int cantidadUsadas = 0;
int cartas[cantidadMaxima];//={0,1,2,3,4,5,6,7,8,9,10,11,12,13};

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int opcMenu;
    int opcParam;
    do
    {
        cout<<"1. agregar"<<endl;
        cout<<"2. buscar"<<endl;
        cout<<"3. borrar"<<endl;
        cout<<"4. insertar"<<endl;
        cout<<"0. salir"<<endl;
        cin>>opcMenu;
        cout<<"Parametro"<<endl;
        cin>>opcParam;
        switch(opcMenu)
        {
        case 1:
            agregar(opcParam);break;
        case 2:
            cout<<buscar(opcParam)<<endl;break;
        case 3:
            borrar(opcParam);break;
        case 4:
            int temp = opcParam;
            cout<<"posicion: "<<endl;
            cin>>opcParam;
            insertar(opcParam,temp);break;
        }
        print();
    }while(opcMenu!=0);

    return a.exec();
}

bool agregar(int valor)
{
    if(cantidadUsadas<cantidadMaxima)
    {
        cartas[cantidadUsadas++]=valor;
        return 1;
    }
    return 0;
}

int buscar(int valor)
{
    for(int i = 0; i < cantidadUsadas; i++)
    {
        if(cartas[i] == valor)
            return i;
    }
    return -1;
}

bool borrar(int pos)
{
    if(pos<cantidadUsadas && pos>=0 && cantidadUsadas>0)
    {
        for(int i = pos; i < cantidadUsadas-1; i++)
            cartas[i]=cartas[i+1];
        cantidadUsadas--;
        return 1;
    }
    return 0;
}

bool insertar(int pos, int valor)
{
    if(agregar(valor) && pos<cantidadUsadas && pos>=0)
    {
        for(int i = cantidadUsadas - 1; i > pos; i--)
        {
            cartas[i]=cartas[i-1];
        }
        cartas[pos]=valor;
        return 1;
    }
    return 0;
}

void print()
{
    cout<<"visualizacion: "<<endl;
    for(int i = 0; i < cantidadUsadas; i++)
        cout<<cartas[i]<<endl;
}

