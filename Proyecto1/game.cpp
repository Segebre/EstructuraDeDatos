#include "game.h"

Game::Game()
{
    score = 0;
    scene = new QGraphicsScene();
    view = new QGraphicsView(scene);
    log = new Log();
    scores = new Score();
    siguientes = new Siguientes();
    Piezas * pieza = new Piezas(siguientes->siguienteValor());
    siguientes->label->adjustSize();
    pieza->pintar(pieza->color);
    scene->addItem(pieza);
    log->label->move(500, 0);
    log->label->adjustSize();
    scores->label->move(860, 0);
    scores->label->adjustSize();
    siguientes->label->move(960, 0);
    siguientes->label->adjustSize();
    proxyWidgetLog = scene->addWidget(log->label);
    proxyWidgetScores = scene->addWidget(scores->label);
    proxyWidgetSiguientes = scene->addWidget(siguientes->label);

    //quitamos las scroll bars
    view->setRenderHint(QPainter::Antialiasing);
    view->setBackgroundBrush(QPixmap("qrc:/Icons/space-background1.png"));
    view->setWindowTitle(QT_TRANSLATE_NOOP(QGraphicsView, "1 Line Tetris"));
    view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setFixedSize(1150,1000);
    view->show();
    scene->setSceneRect(0, 0, 1150, 1000);

    QMediaPlayer * music = new QMediaPlayer();
    music->setMedia(QUrl("qrc:/Sounds/song.mp3"));
    //music->play();

    clearSound = new QSoundEffect(this);
    clearSound->setSource(QUrl("qrc:/Sounds/linedelete.wav"));
}

void Game::update()
{
    log->addPuntos(2, score);
    Piezas * pieza = new Piezas(siguientes->siguienteValor());
    siguientes->label->adjustSize();
    pieza->pintar(pieza->color);//pieza->setBrush(* new QBrush(Qt::red));
    scene->addItem(pieza);
    pieza->setFocus();
    int eliminar = check();
    if(eliminar != -1)
        removeLine(eliminar);
}

int Game::check()
{
    for(int i = 19; i >= 0; i--)
    {
        for(int j = 0; j < 10; j++)
        {
            if(scene->itemAt(j*50+25, i*50+25, QTransform()) == 0)
                break;
            if(j == 9)
                return i;
        }
    }
    return -1;
}

void Game::removeLine(int row)
{
    QGraphicsItem * block;
    score+=10;
    //elimina los bloques
    for(int i = 0; i < 10; i++)
    {
        block = scene->itemAt(i*50+25, row*50+25, QTransform());
        if(block != 0)
        {
            scene->removeItem(block);
            //delete block;-----------------------------------------------------------<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
        }
    }

    //corre los bloques
    QList<QGraphicsItem *> cubitos = scene->items();
    for(int i = 0; i < cubitos.size(); i++)
    {
        if(cubitos[i]->x() < 500)
        {
            if(cubitos[i]->y() < row*50)
                cubitos[i]->setPos(cubitos[i]->x(), cubitos[i]->y()+50);
        }
    }
    int eliminar = check();
    if(eliminar != -1)
        this->removeLine(eliminar);
    clearSound->play();
    log->eliminoFila(row, score);
    log->label->adjustSize();
}

void Game::over()
{
    //prueba
    QList<QGraphicsItem *> itemosos = scene->items();
    for(int i = 0; i < itemosos.size(); i++)
    {
        if(itemosos[i]->x() < 500)
        {
            scene->removeItem(itemosos[i]);
        }
    }


    //cout<<"termino"<<endl;
    scores->addScore(score);
    score = 0;
    //scene->clear();
    Piezas * pieza = new Piezas(siguientes->siguienteValor());
    siguientes->label->adjustSize();
    pieza->pintar(pieza->color);
    scene->addItem(pieza);
    log->label->clear();
    log->stak1.clear();
    QString temporal;
    temporal.append("Juego ");
    temporal.append(QString::number(scores->jugados+1));
    temporal.append(" Inizializado!");
    log->stak1.push(temporal);
    log->updateLog();
    //log = new Log();
    //log->label->move(1000, 0);
    //log->label->adjustSize();
    //proxyWidgetLog = scene->addWidget(log->label);

    //Scores
    /*log->label->move(1000, 0);
    log->label->adjustSize();
    *///proxyWidgetScores = scene->addWidget(scores->label);
}


