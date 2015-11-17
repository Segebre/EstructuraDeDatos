#include "piezas.h"

extern Game * game;

Piezas::Piezas(int width)
{
    //inicializa el arbol y el largo de cada bloque
    this->width = width;
    height = 1;
    llego = 0;
    color = rand()%5;

    //Focus el objeto
    setFlag(QGraphicsItem::ItemIsFocusable);
    setFocus();

    //le da el width a los bloques
    setRect(0, 0, width*50-1, height*50);
    setPos(0, -50);

    //controla el tiempo de cada paso para abajo
    timer = new QTimer();
    connect(timer, SIGNAL(timeout()), this, SLOT(move()));

    //que tan seguido en milisegundos baja
    timer->start(1000);

    moveSound = new QSoundEffect(this);
    moveSound->setSource(QUrl("qrc:/Sounds/move.wav"));
}

Piezas::Piezas(int corX, int corY)
{
    this->width = 1;
    height = 1;
    llego = 1;

    //le da el width a los bloques
    setRect(0, 0, width*50-1, height*50);
    setPos(corX, corY);
}

//se mueve hacia abajo
void Piezas::move()
{
    /*for(int i = 0; scene()->itemAt(i*100,200, QTransform()) != NULL; i++)
        cout<<i<<endl;*/
    if(!llego)
    {
        if(moveSound->isPlaying())
            moveSound->stop();
        moveSound->play();

        if(y()+height*50+50 <= 1000 && collidingItems().size() == 0)
            setPos(x(),y()+50);
        else
        {   
            if(height > width)
            {
                int corX = x();
                int corY = y();
                int colorTemp = color;
                scene()->removeItem(this);
                for(int i = 0; i < height; i++)
                {
                    Piezas * pieza = new Piezas(corX, corY+i*50);
                    game->scene->addItem(pieza);
                    pieza->pintar(color);
                }
            }
            llego = 1;
            game->score+=2;
            if(y() == -50)
                game->over();
            else
                game->update();
        }
    }
}

//se mueve hacia los lados
void Piezas::keyPressEvent(QKeyEvent * event)
{
    if(event->key() == Qt::Key_Left && x()-50 >= 0)
    {
        bool sePuede = 1;
        for(int i = 1; i <= height; i++)
        {
            if(scene()->itemAt(x()-50, y()+50*i-25, QTransform()) != 0)
            {
                sePuede = 0;
                break;
            }
        }
        if(sePuede)
        {
            setPos(x()-50, y());
            if(moveSound->isPlaying())
                moveSound->stop();
            moveSound->play();
        }
    }
    else if(event->key() == Qt::Key_Right && x()+width*50+50 <= 500)
    {
        bool sePuede = 1;
        for(int i = 1; i <= height; i++)
        {
            if(scene()->itemAt(x()+50*width+25, y()+50*i-25, QTransform()) != 0)
            {
                sePuede = 0;
                break;
            }
        }
        if(sePuede)
        {
            setPos(x()+50, y());
            if(moveSound->isPlaying())
                moveSound->stop();
            moveSound->play();
        }
    }
    else if(event->key() == Qt::Key_Down && y()+height*50+50 <= 1000 && collidingItems().size() == 0)
    {
            setPos(x(),y()+50);
            timer->start(1000);
            if(moveSound->isPlaying())
                moveSound->stop();
            moveSound->play();
    }
    else if(event->key() == Qt::Key_Up)
    {
        bool sePuede = 1;
        if(width > height)
        {
            for(int i = 1; i < width; i++)
            {
                if(scene()->itemAt(x()+25, y()+50*i+25, QTransform()) != 0 || y()+50*i+25 > 1000)
                {
                    sePuede = 0;
                    cout<<i<<endl;
                    break;
                }
            }
        }
        else
        {
            for(int i = 1; i < height; i++)
            {
                if(scene()->itemAt(x()+50*i+25, y()+25, QTransform()) != 0 || x()+50*i+25 > 500)
                {
                    sePuede = 0;
                    break;
                }
            }
        }
        if(sePuede)
        {
            int temp = width;
            width = height;
            height = temp;
            setRect(0, 0, width*50-1, height*50);
        }
    }
}

void Piezas::pintar(int color)
{
    if(color == 0)
        setBrush(Qt::red);
    else if(color == 1)
        setBrush(Qt::blue);
    else if(color == 2)
        setBrush(Qt::green);
    else if(color == 3)
        setBrush(Qt::yellow);
    else if(color == 4)
        setBrush(Qt::cyan);
}
