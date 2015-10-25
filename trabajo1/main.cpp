#include <QCoreApplication>
#include <iostream>
#include "diagrama.h"

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Nodo *AB = new Nodo("AB");
    Nodo *AC = new Nodo("AC");
    Nodo *AD = new Nodo("AD");
    Nodo *BA = new Nodo("BA");
    Nodo *BC = new Nodo("BC");
    Nodo *BD = new Nodo("BD");
    Nodo *DA = new Nodo("DA");
    Nodo *DB = new Nodo("DB");
    Nodo *DC = new Nodo("DC");
    Nodo *EA = new Nodo("EA");
    Nodo *EB = new Nodo("EB");
    Nodo *EC = new Nodo("EC");
    Nodo *ED = new Nodo("ED");

    AB->addArista(BC);
    AB->addArista(BD);
    AB->addArista(DA);
    AB->addArista(EA);

    AC->addArista(BD);
    AC->addArista(DA);
    AC->addArista(DB);
    AC->addArista(EA);
    AC->addArista(EB);

    AD->addArista(EA);
    AD->addArista(EB);
    AD->addArista(EC);

    BC->addArista(AB);
    BC->addArista(DB);
    BC->addArista(EB);

    BD->addArista(AB);
    BD->addArista(AC);
    BD->addArista(DA);
    BD->addArista(EB);
    BD->addArista(EC);

    DA->addArista(AB);
    DA->addArista(AC);
    DA->addArista(BD);
    DA->addArista(EB);
    DA->addArista(EC);

    DB->addArista(AC);
    DB->addArista(BC);
    DB->addArista(EC);

    EA->addArista(AB);
    EA->addArista(AC);
    EA->addArista(AD);

    EB->addArista(AC);
    EB->addArista(AD);
    EB->addArista(BC);
    EB->addArista(BD);
    EB->addArista(DA);

    EC->addArista(AD);
    EC->addArista(BD);
    EC->addArista(DA);
    EC->addArista(DB);

    Diagrama* diagrama = new Diagrama();
    diagrama->addNodo(AB);
    diagrama->addNodo(AC);
    diagrama->addNodo(AD);
    diagrama->addNodo(BA);
    diagrama->addNodo(BC);
    diagrama->addNodo(BD);
    diagrama->addNodo(DA);
    diagrama->addNodo(DB);
    diagrama->addNodo(DC);
    diagrama->addNodo(EA);
    diagrama->addNodo(EB);
    diagrama->addNodo(EC);
    diagrama->addNodo(ED);

    //donde todo pasa
    diagrama->print(diagrama->setFases());

    cout<<"sigue funcionando :D"<<endl;

    return a.exec();
}

