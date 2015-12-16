#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtGui>
#include <QtCore>
#include <QGraphicsPixmapItem>
#include <QGraphicsView>
#include <QGraphicsScene>
#include "QVBoxLayout"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    QVBoxLayout * layout;
    QGraphicsScene *scene;
    QGraphicsView *view;
    QPoint sps;
    QPoint santacruzdeyojoa;
    QPoint puertocortes;

    QPoint progreso;
    QPoint yoro;
    QPoint olanchito;

    QPoint tela;
    QPoint esparta;
    QPoint ceiba;

    QPoint balfate;
    QPoint trujillo;
    QPoint iriona;

    QPoint sanesteban;
    QPoint juticalpa;
    QPoint catacamas;

    QPoint danli;
    QPoint soledad;
    QPoint yuscaran;

    QPoint eltriunfo;
    QPoint choluteca;
    QPoint sanisidro;

    QPoint nacaome;
    QPoint amapala;
    QPoint caridad;

    QPoint santamaria;
    QPoint lapaz;
    QPoint cabanas;

    QPoint laesperanza;
    QPoint dolores;
    QPoint sanantonio;

    QPoint sanandres;
    QPoint gracias;
    QPoint belen;

    QPoint sanjorge;
    QPoint ocotepeque;
    QPoint santafe;

    QPoint santarosadecopan;
    QPoint florida;
    QPoint copanruinas;

    QPoint taulabe;
    QPoint comayagua;
    QPoint minasdeoro;

    QPoint sanignacio;
    QPoint sanjuandeflores;
    QPoint tegucigalpa;

    QPoint trinidad;
    QPoint santabarbara;
    QPoint ilama;

    QPoint roatan;
    QPoint utila;
    QPoint guanaja;

    QPoint bruslaguna;
    QPoint ahuas;
    QPoint puertolempira;

private:
    Ui::MainWindow *ui;

protected:
    void paintEvent(QPaintEvent *e);
private slots:
    //void on_btnDij_clicked();
    void on_BTNdijkstra_clicked();
    void on_BTNfloyd_clicked();
    void on_BTNkruskal_clicked();
};

#endif // MAINWINDOW_H
