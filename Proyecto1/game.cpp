#include "game.h"

Game::Game()
{
    scene = new QGraphicsScene();
    view = new QGraphicsView(scene);
    scene->addItem(new Piezas());

    //quitamos las scroll bars
    view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setFixedSize(1000,1000);
    view->show();
    scene->setSceneRect(0, 0, 1000, 1000);
}



