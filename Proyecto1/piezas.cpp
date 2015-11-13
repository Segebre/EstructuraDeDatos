#include "piezas.h"

Piezas::Piezas()
{
    //inicializa el arbol y el largo de cada bloque
    arbol = new ArbolExp();
    tamano = arbol->resolver();
    llego = 0;

    //Busca una expression que se resuelva entre el rango
    while(tamano <= 0 || tamano >= 10)
    {
        arbol->newData();
        tamano = arbol->resolver();
    }

    //Focus el objeto
    setFlag(QGraphicsItem::ItemIsFocusable);
    setFocus();

    //le da el tamano a los bloques
    setRect(0, 0, tamano*100-2, 100);

    //controla el tiempo de cada paso para abajo
    QTimer * timer = new QTimer();
    connect(timer, SIGNAL(timeout()), this, SLOT(move()));

    //que tan seguido en milisegundos baja
    timer->start(1000);
}

//se mueve hacia abajo
void Piezas::move()
{
    if(!llego)
    {
        if(y()+200 <= 1000 && collidingItems().size() == 0)
            setPos(x(),y()+100);
        else
        {
            llego = 1;
            Piezas * pieza = new Piezas();
            scene()->addItem(pieza);
            pieza->setFocus();
        }
    }
}

//se mueve hacia los lados
void Piezas::keyPressEvent(QKeyEvent * event)
{
    if(event->key() == Qt::Key_Left && x()-100 >= 0)
        setPos(x()-100, y());
    else if(event->key() == Qt::Key_Right && x()+tamano*100+100 <= 1000)
        setPos(x()+100, y());
    else if(event->key() == Qt::Key_Down && y()+100 <= 1000)
        setPos(x(), y()+100);
}
