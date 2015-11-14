#include <QCoreApplication>
#include <iostream>
#include "nodo.h"
#include "arbolexpr.h"
#include <QQueue>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QQueue<ArbolExpr *> queue = new ArbolExp();

    return a.exec();
}
