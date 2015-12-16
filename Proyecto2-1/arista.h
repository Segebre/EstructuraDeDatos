#ifndef ARISTA_H
#define ARISTA_H
#include <iostream>
#include <QObject>
#include <QGraphicsLineItem>

using namespace std;

class Arista : public QObject//, public
{
    Q_OBJECT
public:
    Arista(int peso, int destino);
    Arista(int src, int peso, int destino);
    int src;
    int peso;
    int destino;
};

#endif // ARISTA_H
