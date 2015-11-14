#ifndef SIGUIENTES_H
#define SIGUIENTES_H
#include <QString>
#include <QGraphicsTextItem>
#include "piezas.h"

class Siguientes : public QGraphicsTextItem
{
public:
    Siguientes();
    int update(QString nuevo);

signals:

public slots:
};

#endif // SIGUIENTES_H
