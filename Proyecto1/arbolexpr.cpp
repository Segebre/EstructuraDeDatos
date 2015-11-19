#include "arbolexpr.h"

ArbolExpr::ArbolExpr()
{
    srand(time(0));
    newData();
}

char ArbolExpr::getExpr()
{
    switch(rand()%3)
    {
    case 0:
        return '+';
    case 1:
        return '-';
    case 2:
        return '*';
    }
}

//reinizializa el arbol
void ArbolExpr::newData()
{
    do
    {
        raiz = new NodoArbol(getExpr());
        raiz->left = new NodoArbol(getExpr());
        raiz->right = new NodoArbol(getExpr());
        raiz->left->left = new NodoArbol(rand()%10 + 1);
        raiz->left->right = new NodoArbol(rand()%10 + 1);
        raiz->right->left = new NodoArbol(rand()%10 + 1);
        raiz->right->right = new NodoArbol(rand()%10 + 1);
    }while(resolver() <= 0 || resolver() > 10);
}

QString ArbolExpr::getString()
{
    QString stringer;
    stringer.append("(");
    stringer.append(QString::number(raiz->left->left->valor));
    stringer.append(raiz->left->valor);
    stringer.append(QString::number(raiz->left->right->valor));
    stringer.append(")");
    stringer.append(raiz->valor);
    stringer.append("(");
    stringer.append(QString::number(raiz->right->left->valor));
    stringer.append(raiz->right->valor);
    stringer.append(QString::number(raiz->right->right->valor));
    stringer.append(") = ");
    stringer.append(QString::number(resolver()));
    return stringer;
}

int ArbolExpr::resolver()
{
    int num = resolver(int(raiz->left->left->valor), raiz->left->valor, int(raiz->left->right->valor));
    int num2 = resolver(int(raiz->right->left->valor), raiz->right->valor, int(raiz->right->right->valor));
    return resolver(num, raiz->valor, num2);
}

int ArbolExpr::resolver(int num, char op, int num2)
{
    switch(op)
    {
    case '+':
        return num + num2;
    case '-':
        return num - num2;
    case '*':
        return num * num2;
    }
}

void ArbolExpr::print()
{
    cout<<"("<<int(raiz->left->left->valor)<<raiz->left->valor<<int(raiz->left->right->valor)<<")"<<raiz->valor<<"("<<int(raiz->right->left->valor)<<raiz->right->valor<<int(raiz->right->right->valor)<<")"<<endl;
}

