#include "arbolexpr.h"

ArbolExpr::ArbolExpr()
{
    srand(time(0));
    raiz = new Nodo(getExpr());
    raiz->left = new Nodo(getExpr());
    raiz->right = new Nodo(getExpr());
    raiz->left->left = new Nodo(rand()%10 + 1);
    raiz->left->right = new Nodo(rand()%10 + 1);
    raiz->right->left = new Nodo(rand()%10 + 1);
    raiz->right->right = new Nodo(rand()%10 + 1);
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
    raiz = new Nodo(getExpr());
    raiz->left = new Nodo(getExpr());
    raiz->right = new Nodo(getExpr());
    raiz->left->left = new Nodo(rand()%10 + 1);
    raiz->left->right = new Nodo(rand()%10 + 1);
    raiz->right->left = new Nodo(rand()%10 + 1);
    raiz->right->right = new Nodo(rand()%10 + 1);
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

string ArbolExpr::getString()
{
    return "(" + int(raiz->left->left->valor) + raiz->left->valor + int(raiz->left->right->valor) + ")" + raiz->valor + "(" + int(raiz->right->left->valor) + raiz->right->valor + int(raiz->right->right->valor) + ")";
}

void ArbolExpr::print()
{
    cout<<"("<<int(raiz->left->left->valor)<<raiz->left->valor<<int(raiz->left->right->valor)<<")"<<raiz->valor<<"("<<int(raiz->right->left->valor)<<raiz->right->valor<<int(raiz->right->right->valor)<<")"<<endl;
}
