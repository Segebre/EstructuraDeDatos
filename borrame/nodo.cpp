#include "nodo.h"
#include <iostream>

Nodo::Nodo(char valor)
{
    this->valor = valor;
    this->left = NULL;
    this->right = NULL;
}
