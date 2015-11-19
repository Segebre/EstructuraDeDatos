#ifndef NODOPILA_H
#define NODOPILA_H
#include <QString>


class NodoPila
{
public:
    NodoPila(QString valor);
    QString valor;
    NodoPila * next;
};

#endif // NODOPILA_H
