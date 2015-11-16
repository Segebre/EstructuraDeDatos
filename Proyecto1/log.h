#ifndef LOG_H
#define LOG_H
#include <QString>
#include <QStack>
#include <QLabel>

class Log
{
public:
    Log();
    QStack<QString> stak1;
    QStack<QString> stak2;
    QLabel * label;
    void addPuntos(int num, int score);
    void eliminoFila(int num, int score);
    void endLog();
    void updateLog();

signals:

public slots:
};

#endif // LOG_H
