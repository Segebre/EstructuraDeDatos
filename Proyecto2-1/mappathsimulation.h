#ifndef MAPPATHSIMULATION_H
#define MAPPATHSIMULATION_H
#include <QGraphicsScene>
#include <QGraphicsView>
#include "nodo.h"

class MapPathSimulation : public QGraphicsView
{
public:
    MapPathSimulation();
    QGraphicsScene * scene;
    QGraphicsView * view;

signals:

public slots:
};

#endif // MAPPATHSIMULATION_H
