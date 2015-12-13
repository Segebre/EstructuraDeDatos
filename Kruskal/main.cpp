#include <QCoreApplication>
#include <kruskal.h>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Kruskal kruskal;

    kruskal.addArista(0, 5, 4);
    kruskal.addArista(1, 4, 5);
    kruskal.addArista(1, 2, 6);
    kruskal.addArista(2, 5, 5);
    kruskal.addArista(3, 2, 5);
    kruskal.addArista(3, 2, 7);
    kruskal.addArista(4, 3, 6);
    kruskal.addArista(5, 4, 6);

    kruskal.resolver();
    kruskal.print();

    return a.exec();
}

