#include "mappathsimulation.h"

MapPathSimulation::MapPathSimulation()
{
    scene = new QGraphicsScene();
    view = new QGraphicsView(scene);

    view->setRenderHint(QPainter::Antialiasing);
    view->setBackgroundBrush(QPixmap(":/Images/mapa.png"));
    view->setWindowTitle(QT_TRANSLATE_NOOP(QGraphicsView, "Map Path Simulation"));
    view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setFixedSize(1150,1000);
    view->show();
    scene->setSceneRect(0, 0, 1150, 1000);

    Nodo * N0 = new Nodo(0, "Ahuas");
    Nodo * N1 = new Nodo(1, "Amapala");
    Nodo * N2 = new Nodo(2, "Balfate");
    Nodo * N3 = new Nodo(3, "Belen");
    Nodo * N4 = new Nodo(4, "Brus Laguna");
    Nodo * N5 = new Nodo(5, "Cabanas");
    Nodo * N6 = new Nodo(6, "Carida");
    Nodo * N7 = new Nodo(7, "Catacamas");
    Nodo * N8 = new Nodo(8, "Choluteca");
    Nodo * N9 = new Nodo(9, "Comayagua");
    Nodo * N10 = new Nodo(10, "Copan Ruinas");
    Nodo * N11 = new Nodo(11, "Danli");
    Nodo * N12 = new Nodo(12, "Dolores");
    Nodo * N13 = new Nodo(13, "EL Progreso");
    Nodo * N14 = new Nodo(14, "El Triunfo");
    Nodo * N15 = new Nodo(15, "Esparta");
    Nodo * N16 = new Nodo(16, "Florida");
    Nodo * N17 = new Nodo(17, "Gracias");
    Nodo * N18 = new Nodo(18, "Guanaja");
    Nodo * N19 = new Nodo(19, "Ironia");
    Nodo * N20 = new Nodo(20, "Juticalpa");
    Nodo * N21 = new Nodo(21, "La Ceiba");
    Nodo * N22 = new Nodo(22, "La Esperanza");
    Nodo * N23 = new Nodo(23, "La Paz");
    Nodo * N24 = new Nodo(24, "Llama");
    Nodo * N25 = new Nodo(25, "Minas de Oro");
    Nodo * N26 = new Nodo(26, "Nacaome");
    Nodo * N27 = new Nodo(27, "Nueva Ocotepeque");
    Nodo * N28 = new Nodo(28, "Olanchito");
    Nodo * N29 = new Nodo(29, "Puerto Cortes");
    Nodo * N30 = new Nodo(30, "Puerto Lempira");
    Nodo * N31 = new Nodo(31, "Roatan");
    Nodo * N32 = new Nodo(32, "Sna Andrea");
    Nodo * N33 = new Nodo(33, "San Antonio");
    Nodo * N34 = new Nodo(34, "San Esteban");
    Nodo * N35 = new Nodo(35, "San Ignacio");
    Nodo * N36 = new Nodo(36, "San Isidro");
    Nodo * N37 = new Nodo(37, "San Jorge");
    Nodo * N38 = new Nodo(38, "San Juan de FLores");
    Nodo * N39 = new Nodo(39, "San Pedro Sula");
    Nodo * N40 = new Nodo(40, "Santa Barbara");
    Nodo * N41 = new Nodo(41, "Santa Cruz de Yojoa");
    Nodo * N42 = new Nodo(42, "Santa Fe");
    Nodo * N43 = new Nodo(43, "Santa Maria");
    Nodo * N44 = new Nodo(44, "Santa Rosa de Copan");
    Nodo * N45 = new Nodo(45, "Soledad");
    Nodo * N46 = new Nodo(46, "Taulabe");
    Nodo * N47 = new Nodo(47, "Tegucigalpa");
    Nodo * N48 = new Nodo(48, "Tela");
    Nodo * N49 = new Nodo(49, "Trinidad");
    Nodo * N50 = new Nodo(50, "Trujillo");
    Nodo * N51 = new Nodo(51, "Utila");
    Nodo * N52 = new Nodo(52, "Yoro");
    Nodo * N53 = new Nodo(53, "Yuscaran");


}

