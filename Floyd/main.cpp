#include <QCoreApplication>
#include "floyd.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Arista * a01 = new Arista(8, 1);
    Arista * a03 = new Arista(2, 3);
    Arista * a04 = new Arista(7, 4);

    Arista * a10 = new Arista(8, 0);
    Arista * a13 = new Arista(1, 3);
    Arista * a16 = new Arista(4, 6);

    Arista * a24 = new Arista(2, 4);
    Arista * a25 = new Arista(1, 5);

    Arista * a30 = new Arista(2, 0);
    Arista * a31 = new Arista(1, 1);

    Arista * a40 = new Arista(7, 0);
    Arista * a42 = new Arista(2, 2);
    Arista * a47 = new Arista(9, 7);

    Arista * a52 = new Arista(1, 2);
    Arista * a57 = new Arista(4, 7);

    Arista * a61 = new Arista(4, 1);
    Arista * a67 = new Arista(7, 7);

    Arista * a74 = new Arista(9, 4);
    Arista * a75 = new Arista(4, 5);
    Arista * a76 = new Arista(7, 6);

    Nodo * n0 = new Nodo(0);
    n0->addArista(a01);
    n0->addArista(a03);
    n0->addArista(a04);

    Nodo * n1 = new Nodo(1);
    n1->addArista(a10);
    n1->addArista(a13);
    n1->addArista(a16);

    Nodo * n2 = new Nodo(2);
    n2->addArista(a24);
    n2->addArista(a25);

    Nodo * n3 = new Nodo(3);
    n3->addArista(a30);
    n3->addArista(a31);

    Nodo * n4 = new Nodo(4);
    n4->addArista(a40);
    n4->addArista(a42);
    n4->addArista(a47);

    Nodo * n5 = new Nodo(5);
    n5->addArista(a52);
    n5->addArista(a57);

    Nodo * n6 = new Nodo(6);
    n6->addArista(a61);
    n6->addArista(a67);

    Nodo * n7 = new Nodo(7);
    n7->addArista(a74);
    n7->addArista(a75);
    n7->addArista(a76);

    Floyd floyd = Floyd();
    floyd.agregarNodo(n0);
    floyd.agregarNodo(n1);
    floyd.agregarNodo(n2);
    floyd.agregarNodo(n3);
    floyd.agregarNodo(n4);
    floyd.agregarNodo(n5);
    floyd.agregarNodo(n6);
    floyd.agregarNodo(n7);

    floyd.resolver();
    floyd.print();

    return a.exec();
}

