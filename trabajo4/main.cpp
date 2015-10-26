#include <QCoreApplication>
#include "listaenlazada.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    ListaEnlazada* lista = new ListaEnlazada();
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
        cout<<"Parametro"<<endl;
        cin>>opcParam;
        switch(opcMenu)
        {
        case 1:
            lista->agregar(opcParam);break;
        case 2:
            cout<<lista->buscar(opcParam)<<endl;break;
        case 3:
            lista->borrar(opcParam);break;
        case 4:
            int temp = opcParam;
            cout<<"posicion: "<<endl;
            cin>>opcParam;
            lista->insertar(opcParam,temp);break;
            break;
        }
        lista->print();
    }while(true);

    return a.exec();
}

