#include <QCoreApplication>
#include <iostream>
#include "nodo.h"
#include "arbolexpr.h"
#include <QQueue>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QQueue<string> expressiones;
    QQueue<int> resultados;
    ArbolExpr * arbol = new ArbolExpr();

    for(int i = 0; i < 10; i++)
    {
        expressiones.enqueue(arbol->getString());
    }

    return a.exec();
}
