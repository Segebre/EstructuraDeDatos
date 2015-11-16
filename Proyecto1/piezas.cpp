#include "piezas.h"

extern Game * game;

Piezas::Piezas(int tamano)
{
    //inicializa el arbol y el largo de cada bloque
    arbol = new ArbolExpr();
    this->tamano = tamano;
    llego = 0;

    //Busca una expression que se resuelva entre el rango
    while(tamano <= 0 || tamano > 10)
    {
        arbol->newData();
        tamano = arbol->resolver();
    }

    //Focus el objeto
    setFlag(QGraphicsItem::ItemIsFocusable);
    setFocus();

    //le da el tamano a los bloques
    setRect(0, 0, tamano*100-1, 100);
    setPos(0, -100);

    //controla el tiempo de cada paso para abajo
    timer = new QTimer();
    connect(timer, SIGNAL(timeout()), this, SLOT(move()));

    //que tan seguido en milisegundos baja
    timer->start(1000);
}

//se mueve hacia abajo
void Piezas::move()
{
    /*for(int i = 0; scene()->itemAt(i*100,200, QTransform()) != NULL; i++)
        cout<<i<<endl;*/
    if(!llego)
    {
        if(y()+200 <= 1000 && collidingItems().size() == 0)
            setPos(x(),y()+100);
        else
        {
            llego = 1;
            game->score+=2;
            if(y() == -100)
                game->over();
            else
                game->update();
        }
    }
}

//se mueve hacia los lados
void Piezas::keyPressEvent(QKeyEvent * event)
{
    if(event->key() == Qt::Key_Left && x()-100 >= 0 && scene()->itemAt(x()-50, y()+50, QTransform()) == 0)
        setPos(x()-100, y());
    else if(event->key() == Qt::Key_Right && x()+tamano*100+100 <= 1000 && scene()->itemAt(x()+tamano*100+50, y()+50, QTransform()) == 0)
        setPos(x()+100, y());
    else if(event->key() == Qt::Key_Down && y()+200 <= 1000 && collidingItems().size() == 0)
    {
            setPos(x(),y()+100);
            timer->start(1000);
    }
}
