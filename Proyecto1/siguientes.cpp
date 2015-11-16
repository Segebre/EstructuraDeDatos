#include "siguientes.h"

Siguientes::Siguientes()
{
    label = new QLabel();
    ArbolExpr arbol;
    for(int i = 0; i < 10;i++)
    {
        arbol.newData();
        queue.enqueue(arbol);
    }
    updateSiguientes();
}

int Siguientes::siguienteValor()
{
    ArbolExpr temp = queue.dequeue();
    int retorn = temp.resolver();
    temp.newData();
    queue.enqueue(temp);
    updateSiguientes();
    return retorn;
}

void Siguientes::updateSiguientes()
{
    QString stringer;
    ArbolExpr temp;
    stringer.append("----------------\n|| Siguiente ||\n----------------\n\n");
    for(int i = 0; i < 10;i++)//while(!queue.empty())
    {
        temp = queue.dequeue();
        stringer.append(temp.getString());
        stringer.append("\n");
        queue.enqueue(temp);
    }
    label->setText(stringer);
}

