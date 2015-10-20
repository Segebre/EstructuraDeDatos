#include <QCoreApplication>
#include <iostream>

using namespace std;

void cambiarCero(int arr[]);
void moverCero(int arr[]);
void eliminarRepetidos(int arr[]);

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int cartas[15];

    for(int i = 0; i < 15; i++)
        cin>>cartas[i];
    eliminarRepetidos(cartas);
    for(int j = 0; j < 15; j++)
        cout<<cartas[j]<<endl;

    return a.exec();
}

void eliminarRepetidos(int arr[])
{
    cambiarCero(arr);
    moverCero(arr);
}

void cambiarCero(int arr[])
{
    for(int i = 0; i < 15; i++)
    {
        for(int j = i+1; j<15; j++)
        {
            if(arr[i]==arr[j])
                arr[j]=0;
        }
    }
}

void moverCero(int arr[])
{
    int cc = 1;
    int i = 0;
    while(i < 15 && arr[i]!=0)
        i++;
    for(; i+cc < 15; i++)
    {
        while(i+cc < 15 && arr[i+cc] == 0)
            cc++;
        arr[i]=arr[i+cc];
        arr[i+cc]=0;
    }
}

