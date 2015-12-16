#include <QApplication>
#include "mappathsimulation.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MapPathSimulation * programa = new MapPathSimulation();

    return a.exec();
}
