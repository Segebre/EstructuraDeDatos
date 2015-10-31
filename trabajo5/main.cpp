#include <QCoreApplication>
#include "listacursor.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    ListaCursor lista;
    lista.newCursor(1);
    int opcMenu;
    int opcParam;
    int opcParam2;
    int temp;
    lista.newCursor(23);//////////
    do
    {
        cout<<"\n---------------Menu---------------- "<<endl;
        cout<<"1. agregar lista"<<endl;
        cout<<"2. agregar"<<endl;
        cout<<"3. buscar"<<endl;
        cout<<"4. borrar"<<endl;
        cout<<"5. insertar"<<endl;
        cout<<"6. print"<<endl;
        cout<<"0. salir"<<endl;
        cin>>opcMenu;
        if(opcMenu == 0)
            exit(1);
        cout<<"Arreglo: "<<endl;
        cin>>opcParam;
        switch(opcMenu)
        {
        case 1:
            lista.newCursor(opcParam);break;
        case 2:
            cout<<"Valor: "<<endl;
            cin>>opcParam2;
            lista.agregar(opcParam, opcParam2); break;
        case 3:
            cout<<"Valor: "<<endl;
            cin>>opcParam2;
            cout<<lista.buscar(opcParam, opcParam2)<<endl;break;
        case 4:
            cout<<"posicion: "<<endl;
            cin>>opcParam2;
            lista.borrar(opcParam, opcParam2);break;
        case 5:
            cout<<"Valor: "<<endl;
            cin>>opcParam2;
            temp = opcParam;
            cout<<"posicion: "<<endl;
            cin>>opcParam;
            lista.insertar(temp, opcParam, opcParam2);
            break;
        case 6:
            lista.print(opcParam);break;
        }
        lista.print(1);
    }while(true);

    return a.exec();
}

