#include <QCoreApplication>
#include <nodo.h>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    string nodos[26][15];
    for(int i = 0; i < 26; i++)
    {
        for(int j = 0; j < 15; j++)
            nodos[i][j] = "holiwis!";
    }
    string palabra;
    do{
        cin>>palabra;
        int letra = palabra[0];
        letra-=97;
        if(nodos[letra][0] == "holiwis!")
            nodos[letra][0] = palabra;
        else
        {
            int i = 0;
            while(nodos[letra][i] != "holiwis!")
                i++;
            if(i < 15)
                nodos[letra][i] = palabra;


        }
    }while(palabra != "stop");

    for(int i = 0; i < 26; i++)
    {
        for(int j = 0; j < 15; j++)
        {
            if(nodos[i][j] != "holiwis!" && nodos[i][j] != "stop")
                cout<<nodos[i][j]<<endl;
        }
    }

    return a.exec();
}

