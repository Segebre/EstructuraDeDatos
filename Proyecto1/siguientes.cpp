#include "siguientes.h"

Siguientes::Siguientes()
{
    label = new QLabel();
    ArbolExpr arbol;
    for(int i = 0; i < 10;i++)
    {
        pila.push(arbol);
        arbol.newData();
    }
    updateSiguientes();
}

int Siguientes::siguienteValor()
{
    ArbolExpr temp = pila.pop();
    int retorn = temp.resolver();
    temp.newData();
    pila.push(temp);
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
        temp = pila.pop();
        stringer.append(temp.getString());
        stringer.append("\n");
        pila.push(temp);
    }
    label->setText(stringer);
}

