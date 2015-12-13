#include <QCoreApplication>
#include "prim.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Arista * a01 = new Arista(2, 1);
    Arista * a04 = new Arista(4, 4);

    Arista * a10 = new Arista(2, 0);
    Arista * a12 = new Arista(3, 2);

    Arista * a21 = new Arista(3, 1);
    Arista * a24 = new Arista(1, 4);

    Arista * a34 = new Arista(7, 4);

    Arista * a40 = new Arista(4, 0);
    Arista * a42 = new Arista(1, 2);
    Arista * a43 = new Arista(7, 3);

    Nodo * n0 = new Nodo(0);
    n0->addArista(a01);
    n0->addArista(a04);

    Nodo * n1 = new Nodo(1);
    n1->addArista(a10);
    n1->addArista(a12);

    Nodo * n2 = new Nodo(2);
    n2->addArista(a21);
    n2->addArista(a24);

    Nodo * n3 = new Nodo(3);
    n3->addArista(a34);

    Nodo * n4 = new Nodo(4);
    n4->addArista(a40);
    n4->addArista(a42);
    n4->addArista(a43);

    Prim prim = Prim();
    prim.agregarNodo(n0);
    prim.agregarNodo(n1);
    prim.agregarNodo(n2);
    prim.agregarNodo(n3);
    prim.agregarNodo(n4);

    prim.resolver(0);
    prim.print();

    return a.exec();
}

