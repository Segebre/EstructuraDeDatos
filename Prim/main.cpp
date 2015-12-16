#include <QCoreApplication>
#include "prim.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Arista * a02 = new Arista(3, 2);
    Arista * a03 = new Arista(1, 3);

    Arista * a15 = new Arista(7, 5);

    Arista * a20 = new Arista(3, 0);
    Arista * a25 = new Arista(4, 5);
    Arista * a26 = new Arista(6, 6);

    Arista * a30 = new Arista(1, 0);
    Arista * a37 = new Arista(3, 7);

    Arista * a46 = new Arista(8, 6);
    Arista * a47 = new Arista(3, 7);

    Arista * a51 = new Arista(7, 1);
    Arista * a52 = new Arista(4, 2);
    Arista * a57 = new Arista(2, 7);

    Arista * a62 = new Arista(6, 2);
    Arista * a64 = new Arista(8, 4);
    Arista * a67 = new Arista(8, 7);

    Arista * a73 = new Arista(3, 3);
    Arista * a74 = new Arista(3, 4);
    Arista * a75 = new Arista(2, 5);
    Arista * a76 = new Arista(8, 6);

    Nodo * n0 = new Nodo(0);
    n0->addArista(a02);
    n0->addArista(a03);

    Nodo * n1 = new Nodo(1);
    n1->addArista(a15);

    Nodo * n2 = new Nodo(2);
    n2->addArista(a20);
    n2->addArista(a25);
    n2->addArista(a26);

    Nodo * n3 = new Nodo(3);
    n3->addArista(a30);
    n3->addArista(a37);

    Nodo * n4 = new Nodo(4);
    n4->addArista(a46);
    n4->addArista(a47);

    Nodo * n5 = new Nodo(5);
    n5->addArista(a51);
    n5->addArista(a52);
    n5->addArista(a57);

    Nodo * n6 = new Nodo(6);
    n6->addArista(a62);
    n6->addArista(a64);
    n6->addArista(a67);

    Nodo * n7 = new Nodo(7);
    n7->addArista(a73);
    n7->addArista(a74);
    n7->addArista(a75);
    n7->addArista(a76);

    Prim prim = Prim();
    prim.agregarNodo(n0);
    prim.agregarNodo(n1);
    prim.agregarNodo(n2);
    prim.agregarNodo(n3);
    prim.agregarNodo(n4);
    prim.agregarNodo(n5);
    prim.agregarNodo(n6);
    prim.agregarNodo(n7);

    prim.resolver(0);
    prim.print();

    return a.exec();
}

