#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "nodo.h"
#include "dijkstra.h"
#include "floyd.h"
#include "kruskal.h"
#include "QComboBox"
#include "QLabel"
#include "QString"

QLabel * label;
Dijkstra dijkstra = Dijkstra();
Floyd floyd = Floyd();
Kruskal kruskal = Kruskal();

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("Map Path Simulator");
    ui->mapa->setPixmap(QPixmap(":/Images/mapa.png"));
    layout = new QVBoxLayout(this);
    //for(int i = 0; i < 54; i++)
    //{
        //label = new QLabel("hola");
        //QString hola;
        //hola.append("hola");
        //label->setText(hola);
        //layout->addWidget(label);
    //}
    ui->scrollAreaWidgetContents->setLayout(layout);

    Nodo * nodos[54];

    nodos[0]=new Nodo("Santa Fe", 0);
    nodos[1]=new Nodo("San Jorge",1);
    nodos[2]=new Nodo("Nueva Ocotepeque", 2);
    nodos[3]=new Nodo("Copan Ruinas",3);
    nodos[4]=new Nodo("Santa Rosa de Copan", 4);
    nodos[5]=new Nodo("Florida", 5);
    nodos[6]=new Nodo("Gracias", 6);
    nodos[7]=new Nodo("Belen", 7);
    nodos[8]=new Nodo("San Andres", 8);
    nodos[9]=new Nodo("Trinidad", 9);
    nodos[10]=new Nodo("Ilama", 10);
    nodos[11]=new Nodo("Santa Barbara", 11);
    nodos[12]=new Nodo("La Esperanza", 12);
    nodos[13]=new Nodo("Dolores", 13);
    nodos[14]=new Nodo("San Antonio", 14);
    nodos[15]=new Nodo("Puerto Cortes", 15);
    nodos[16]=new Nodo("San Pedro Sula", 16);
    nodos[17]=new Nodo("Santa Cruz de Yojoa", 17);
    nodos[18]=new Nodo("Minas de Oro", 18);
    nodos[19]=new Nodo("Taulabe", 19);
    nodos[20]=new Nodo("Comayagua", 20);
    nodos[21]=new Nodo("La Paz", 21);
    nodos[22]=new Nodo("Santa Maria", 22);
    nodos[23]=new Nodo("Cabanas", 23);
    nodos[24]=new Nodo("Tela", 24);
    nodos[25]=new Nodo("Esparta", 25);
    nodos[26]=new Nodo("La Ceiba", 26);
    nodos[27]=new Nodo("El Progreso", 27);
    nodos[28]=new Nodo("Yoro", 28);
    nodos[29]=new Nodo("Olanchito", 29);
    nodos[30]=new Nodo("San Ignacio", 30);
    nodos[31]=new Nodo("San Juan de Flores", 31);
    nodos[32]=new Nodo("Tegucigalpa", 32);
    nodos[33]=new Nodo("Caridad", 33);
    nodos[34]=new Nodo("Nacaome", 34);
    nodos[35]=new Nodo("Amapala", 35);
    nodos[36]=new Nodo("San Isidro", 36);
    nodos[37]=new Nodo("Choluteca", 37);
    nodos[38]=new Nodo("El Triunfo",38);
    nodos[39]=new Nodo("Soledad", 39);
    nodos[40]=new Nodo("Yuscaran", 40);
    nodos[41]=new Nodo("Danli", 41);
    nodos[42]=new Nodo("Juticalpa", 42);
    nodos[43]=new Nodo("San Esteban", 43);
    nodos[44]=new Nodo("Catacamas", 44);
    nodos[45]=new Nodo("Balfate", 45);
    nodos[46]=new Nodo("Trujillo", 46);
    nodos[47]=new Nodo("Iriona", 47);
    nodos[48]=new Nodo("Brus Laguna", 48);
    nodos[49]=new Nodo("Ahuas", 49);
    nodos[50]=new Nodo("Puerto Lempira", 50);
    nodos[51]=new Nodo("Utila", 51);
    nodos[52]=new Nodo("Roatan", 52);
    nodos[53]=new Nodo("Guanaja", 53);

    nodos[0]->addArista(new Arista(2, 12.023));

    nodos[1]->addArista(new Arista(2, 33.386));
    nodos[1]->addArista(new Arista(4, 93.037));

    nodos[2]->addArista(new Arista(0, 12.023));
    nodos[2]->addArista(new Arista(1, 33.386));

    nodos[3]->addArista(new Arista(4, 71.853));
    nodos[3]->addArista(new Arista(5, 53.509));

    nodos[4]->addArista(new Arista(1, 93.037));
    nodos[4]->addArista(new Arista(3, 71.853));
    nodos[4]->addArista(new Arista(5, 53.802));
    nodos[4]->addArista(new Arista(6, 47.190));

    nodos[5]->addArista(new Arista(3, 53.509));
    nodos[5]->addArista(new Arista(4, 53.802));
    nodos[5]->addArista(new Arista(9, 100.935));

    nodos[6]->addArista(new Arista(4, 47.190));
    nodos[6]->addArista(new Arista(7, 17.279));

    nodos[7]->addArista(new Arista(6, 17.279));
    nodos[7]->addArista(new Arista(12, 63.263));

    nodos[8]->addArista(new Arista(13, 35.946));
    nodos[8]->addArista(new Arista(14, 89.514));

    nodos[9]->addArista(new Arista(5, 100.935));
    nodos[9]->addArista(new Arista(10, 14.955));
    nodos[9]->addArista(new Arista(16, 73.837));

    nodos[10]->addArista(new Arista(9, 14.955));
    nodos[10]->addArista(new Arista(11, 18.0));

    nodos[11]->addArista(new Arista(10, 18.0));
    nodos[11]->addArista(new Arista(19, 60.4));

    nodos[12]->addArista(new Arista(7, 63.263));
    nodos[12]->addArista(new Arista(13, 45.453));
    nodos[12]->addArista(new Arista(22, 61.248));

    nodos[13]->addArista(new Arista(8, 35.946));
    nodos[13]->addArista(new Arista(12, 45.453));
    nodos[13]->addArista(new Arista(14, 67.302));

    nodos[14]->addArista(new Arista(8, 89.514));
    nodos[14]->addArista(new Arista(13, 67.302));

    nodos[15]->addArista(new Arista(16, 51.125));

    nodos[16]->addArista(new Arista(9, 14.955));
    nodos[16]->addArista(new Arista(15, 51.125));
    nodos[16]->addArista(new Arista(27, 30.536));

    nodos[17]->addArista(new Arista(19, 45.377));
    nodos[17]->addArista(new Arista(27, 56.686));

    nodos[18]->addArista(new Arista(28, 87.2));

    nodos[19]->addArista(new Arista(11, 60.4));
    nodos[19]->addArista(new Arista(17, 45.377));
    nodos[19]->addArista(new Arista(20, 58.6));

    nodos[20]->addArista(new Arista(19, 58.6));
    nodos[20]->addArista(new Arista(21, 23.7));
    nodos[20]->addArista(new Arista(32, 89.9));

    nodos[21]->addArista(new Arista(20, 23.7));
    nodos[21]->addArista(new Arista(22, 54.3));

    nodos[22]->addArista(new Arista(12, 61.248));
    nodos[22]->addArista(new Arista(21, 54.3));
    nodos[22]->addArista(new Arista(23, 46.883));

    nodos[23]->addArista(new Arista(22, 46.883));

    nodos[24]->addArista(new Arista(27, 67.039));
    nodos[24]->addArista(new Arista(25, 47.602));

    nodos[25]->addArista(new Arista(24, 47.602));
    nodos[25]->addArista(new Arista(26, 81.709));

    nodos[26]->addArista(new Arista(25, 81.709));
    nodos[26]->addArista(new Arista(45, 47.762));
    nodos[26]->addArista(new Arista(52, 67.48));

    nodos[27]->addArista(new Arista(16, 30.536));
    nodos[27]->addArista(new Arista(17, 56.686));
    nodos[27]->addArista(new Arista(24, 67.039));
    nodos[27]->addArista(new Arista(28, 131));

    nodos[28]->addArista(new Arista(18, 87.2));
    nodos[28]->addArista(new Arista(27, 131));
    nodos[28]->addArista(new Arista(29, 107));
    nodos[28]->addArista(new Arista(30, 119));

    nodos[29]->addArista(new Arista(28, 107));
    nodos[29]->addArista(new Arista(45, 90.834));

    nodos[30]->addArista(new Arista(28, 119));
    nodos[30]->addArista(new Arista(31, 68.150));
    nodos[30]->addArista(new Arista(42, 154.583));

    nodos[31]->addArista(new Arista(30, 68.150));
    nodos[31]->addArista(new Arista(32, 51.190));

    nodos[32]->addArista(new Arista(20, 89.9));
    nodos[32]->addArista(new Arista(31, 51.190));
    nodos[32]->addArista(new Arista(34, 104.026));
    nodos[32]->addArista(new Arista(40, 67.453));

    nodos[33]->addArista(new Arista(34, 63.920));

    nodos[34]->addArista(new Arista(32, 104.026));
    nodos[34]->addArista(new Arista(33, 63.920));
    nodos[34]->addArista(new Arista(35, 48.184));
    nodos[34]->addArista(new Arista(36, 36.191));
    nodos[34]->addArista(new Arista(37, 56.6));

    nodos[35]->addArista(new Arista(34, 48.184));

    nodos[36]->addArista(new Arista(34, 36.191));

    nodos[37]->addArista(new Arista(34, 56.6));
    nodos[37]->addArista(new Arista(38, 40.3));
    nodos[37]->addArista(new Arista(39, 46.4));

    nodos[38]->addArista(new Arista(37, 40.3));

    nodos[39]->addArista(new Arista(37, 46.4));

    nodos[40]->addArista(new Arista(32, 67.453));
    nodos[40]->addArista(new Arista(41, 63.925));

    nodos[41]->addArista(new Arista(40, 63.925));

    nodos[42]->addArista(new Arista(30, 154.583));
    nodos[42]->addArista(new Arista(43, 107.091));
    nodos[42]->addArista(new Arista(44, 44.010));

    nodos[43]->addArista(new Arista(42, 107.091));
    nodos[43]->addArista(new Arista(46, 125.806));
    nodos[43]->addArista(new Arista(47, 172.791));

    nodos[44]->addArista(new Arista(42, 44.010));

    nodos[45]->addArista(new Arista(26, 47.762));
    nodos[45]->addArista(new Arista(29, 90.834));
    nodos[45]->addArista(new Arista(46, 132.361));

    nodos[46]->addArista(new Arista(43, 125.806));
    nodos[46]->addArista(new Arista(45, 132.361));
    nodos[46]->addArista(new Arista(47, 124.621));

    nodos[47]->addArista(new Arista(43, 172.791));
    nodos[47]->addArista(new Arista(46, 124.621));
    nodos[47]->addArista(new Arista(48, 62.56));

    nodos[48]->addArista(new Arista(47, 62.56));
    nodos[48]->addArista(new Arista(49, 37.67));

    nodos[49]->addArista(new Arista(48, 37.67));
    nodos[49]->addArista(new Arista(50, 66.80));

    nodos[50]->addArista(new Arista(49, 66.80));

    nodos[51]->addArista(new Arista(52, 49.08));

    nodos[52]->addArista(new Arista(26, 67.48));
    nodos[52]->addArista(new Arista(51, 49.08));
    nodos[52]->addArista(new Arista(53, 70.96));

    nodos[53]->addArista(new Arista(52, 70.96));

    sps.setX(235);sps.setY(280-20);
    santacruzdeyojoa.setX(266);santacruzdeyojoa.setY(355-20);
    puertocortes.setX(258);puertocortes.setY(233-20);

    progreso.setX(275);progreso.setY(322-20);
    yoro.setX(370);yoro.setY(342-20);
    olanchito.setX(459);olanchito.setY(288-20);

    tela.setX(291);tela.setY(241-20);
    esparta.setX(352);esparta.setY(250-20);
    ceiba.setX(424);ceiba.setY(243-20);

    balfate.setX(507);balfate.setY(248-20);
    trujillo.setX(554);trujillo.setY(222-20);
    iriona.setX(683);iriona.setY(226-20);

    sanesteban.setX(595);sanesteban.setY(302-20);
    juticalpa.setX(490);juticalpa.setY(377-20);
    catacamas.setX(630);catacamas.setY(427-20);

    danli.setX(493);danli.setY(511-20);
    soledad.setX(378);soledad.setY(586-20);
    yuscaran.setX(415);yuscaran.setY(533-20);

    sanisidro.setX(342);sanisidro.setY(582-20);
    choluteca.setX(360);choluteca.setY(632-20);
    eltriunfo.setX(389);eltriunfo.setY(668-20);

    nacaome.setX(316);nacaome.setY(598-20);
    amapala.setX(289);amapala.setY(638-20);
    caridad.setX(287);caridad.setY(559-20);

    santamaria.setX(247);santamaria.setY(498-20);
    lapaz.setX(287);lapaz.setY(473-20);
    cabanas.setX(240);cabanas.setY(527-20);

    dolores.setX(192);dolores.setY(490-20);
    laesperanza.setX(210);laesperanza.setY(476-20);
    sanantonio.setX(167);sanantonio.setY(536-20);

    sanandres.setX(173);sanandres.setY(502-20);
    gracias.setX(151);gracias.setY(431-20);
    belen.setX(158);belen.setY(451-20);

    sanjorge.setX(71);sanjorge.setY(427-20);
    ocotepeque.setX(56);ocotepeque.setY(451-20);
    santafe.setX(36);santafe.setY(450-20);

    santarosadecopan.setX(118);santarosadecopan.setY(398-20);
    florida.setX(108);florida.setY(339-20);
    copanruinas.setX(69);copanruinas.setY(381-20);

    trinidad.setX(195);trinidad.setY(312-20);
    santabarbara.setX(203);santabarbara.setY(375-20);
    ilama.setX(192);ilama.setY(338-20);

    taulabe.setX(241);taulabe.setY(405-20);
    comayagua.setX(295);comayagua.setY(455-20);
    minasdeoro.setX(305);minasdeoro.setY(366-20);

    sanignacio.setX(382);sanignacio.setY(387-20);
    sanjuandeflores.setX(411);sanjuandeflores.setY(476-20);
    tegucigalpa.setX(358);tegucigalpa.setY(510-20);

    roatan.setX(457);roatan.setY(155-20);
    utila.setX(399);utila.setY(192-20);
    guanaja.setX(557);guanaja.setY(132-20);

    bruslaguna.setX(766);bruslaguna.setY(246-20);
    puertolempira.setX(880);puertolempira.setY(323-20);
    ahuas.setX(799);ahuas.setY(279-20);

    for(int i = 0; i < 54; i++)
    {
        //QString temp = QString(nodos[i]->ciudad);
        ui->DBsrc->addItem(QString::fromStdString(nodos[i]->ciudad));
        ui->DBdest->addItem(QString::fromStdString(nodos[i]->ciudad));
    }

    for(int i = 0; i < 54; i++)
    {
        dijkstra.agregarNodo(nodos[i]);
        floyd.agregarNodo(nodos[i]);
        kruskal.addNodo(nodos[i]);
    }

}

void MainWindow::paintEvent(QPaintEvent *e)
{
    QImage tmp(ui->mapa->pixmap()->toImage());
    QPainter painter(&tmp);
    painter.drawLine(sps.x(),sps.y(),santacruzdeyojoa.x(),santacruzdeyojoa.y());//sps-santacruzdeyojoa
    painter.drawLine(sps.x(),sps.y(),progreso.x(),progreso.y());//sps-progreso
    painter.drawLine(sps.x(),sps.y(),puertocortes.x(),puertocortes.y());//sps-puertocortes
    painter.drawLine(progreso.x(),progreso.y(),yoro.x(),yoro.y());//progreso-yoro
    painter.drawLine(progreso.x(),progreso.y(),tela.x(),tela.y());//progreso-tela
    painter.drawLine(yoro.x(),yoro.y(),olanchito.x(),olanchito.y());//yoro-olanchito
    painter.drawLine(tela.x(),tela.y(),esparta.x(),esparta.y());//tela-esparta
    painter.drawLine(esparta.x(),esparta.y(),ceiba.x(),ceiba.y());//esparta-ceiba
    painter.drawLine(ceiba.x(),ceiba.y(),roatan.x(),roatan.y());//ceiba-roatan
    painter.drawLine(roatan.x(),roatan.y(),utila.x(),utila.y());//roatan-utila
    painter.drawLine(roatan.x(),roatan.y(),guanaja.x(),guanaja.y());//roatan-guanaja
    painter.drawLine(ceiba.x(),ceiba.y(),balfate.x(),balfate.y());//ceiba-balfate
    painter.drawLine(balfate.x(),balfate.y(),trujillo.x(),trujillo.y());//balfate-trujillo
    painter.drawLine(trujillo.x(),trujillo.y(),iriona.x(),iriona.y());//trujillo-iriona
    painter.drawLine(iriona.x(),iriona.y(),bruslaguna.x(),bruslaguna.y());//iriona-bruslaguna
    painter.drawLine(bruslaguna.x(),bruslaguna.y(),ahuas.x(),ahuas.y());//bruslaguna-ahuas
    painter.drawLine(ahuas.x(),ahuas.y(),puertolempira.x(),puertolempira.y());//ahuas-puertolempira
    painter.drawLine(iriona.x(),iriona.y(),sanesteban.x(),sanesteban.y());//iriona-sanesteban
    painter.drawLine(sanesteban.x(),sanesteban.y(),juticalpa.x(),juticalpa.y());//sanesteban-juticalpa
    painter.drawLine(juticalpa.x(),juticalpa.y(),catacamas.x(),catacamas.y());//juticalpa-catacamas
    painter.drawLine(juticalpa.x(),juticalpa.y(),sanignacio.x(),sanignacio.y());//juticalpa-sanignacio
    painter.drawLine(sanignacio.x(),sanignacio.y(),yoro.x(),yoro.y());//sanignacio-yoro
    painter.drawLine(yoro.x(),yoro.y(),minasdeoro.x(),minasdeoro.y());//yoro-minasdeoro
    painter.drawLine(sanignacio.x(),sanignacio.y(),sanjuandeflores.x(),sanjuandeflores.y());//sanignacio-sanjuandeflores
    painter.drawLine(sanjuandeflores.x(),sanjuandeflores.y(),tegucigalpa.x(),tegucigalpa.y());//sanjuandeflores-tegucigalpa
    painter.drawLine(tegucigalpa.x(),tegucigalpa.y(),yuscaran.x(),yuscaran.y());//tegucigalpa-yuscaran
    painter.drawLine(yuscaran.x(),yuscaran.y(),danli.x(),danli.y());//yuscaran-danli
    painter.drawLine(tegucigalpa.x(),tegucigalpa.y(),nacaome.x(),nacaome.y());//tegucigalpa-nacaome
    painter.drawLine(nacaome.x(),nacaome.y(),caridad.x(),caridad.y());//nacaome-caridad
    painter.drawLine(nacaome.x(),nacaome.y(),amapala.x(),amapala.y());//nacaome-amapala
    painter.drawLine(nacaome.x(),nacaome.y(),sanisidro.x(),sanisidro.y());//nacaome-sanisidro
    painter.drawLine(nacaome.x(),nacaome.y(),choluteca.x(),choluteca.y());//nacaome-choluteca
    painter.drawLine(choluteca.x(),choluteca.y(),soledad.x(),soledad.y());//choluteca-soledad
    painter.drawLine(choluteca.x(),choluteca.y(),eltriunfo.x(),eltriunfo.y());//choluteca-eltriunfo
    painter.drawLine(tegucigalpa.x(),tegucigalpa.y(),comayagua.x(),comayagua.y());//tegucigalpa-comayagua
    painter.drawLine(comayagua.x(),comayagua.y(),lapaz.x(),lapaz.y());//comayagua-lapaz
    painter.drawLine(lapaz.x(),lapaz.y(),santamaria.x(),santamaria.y());//lapaz-santamaria
    painter.drawLine(santamaria.x(),santamaria.y(),cabanas.x(),cabanas.y());//santamaria-cabanas
    painter.drawLine(santamaria.x(),santamaria.y(),laesperanza.x(),laesperanza.y());//santamaria-laesperanza
    painter.drawLine(laesperanza.x(),laesperanza.y(),dolores.x(),dolores.y());//laesperanza-dolores
    painter.drawLine(dolores.x(),dolores.y(),sanantonio.x(),sanantonio.y());//dolores-sanantonio
    painter.drawLine(sanantonio.x(),sanantonio.y(),sanandres.x(),sanandres.y());//sanantonio-sanandres
    painter.drawLine(laesperanza.x(),laesperanza.y(),belen.x(),belen.y());//laesperanza-belen
    painter.drawLine(belen.x(),belen.y(),gracias.x(),gracias.y());//belen-gracias
    painter.drawLine(gracias.x(),gracias.y(),santarosadecopan.x(),santarosadecopan.y());//gracias-santarosadecopan
    painter.drawLine(santarosadecopan.x(),santarosadecopan.y(),sanjorge.x(),sanjorge.y());//santarosadecopan-sanjorge
    painter.drawLine(sanjorge.x(),sanjorge.y(),ocotepeque.x(),ocotepeque.y());//sanjorge-ocotepeque
    painter.drawLine(ocotepeque.x(),ocotepeque.y(),santafe.x(),santafe.y());//ocotepeque-santafe
    painter.drawLine(santarosadecopan.x(),santarosadecopan.y(),copanruinas.x(),copanruinas.y());//santarosadecopan-copanruinas
    painter.drawLine(santarosadecopan.x(),santarosadecopan.y(),florida.x(),florida.y());//santarosadecopan-florida
    painter.drawLine(copanruinas.x(),copanruinas.y(),florida.x(),florida.y());//copanruinas-florida
    painter.drawLine(florida.x(),florida.y(),trinidad.x(),trinidad.y());//florida-trinidad
    painter.drawLine(trinidad.x(),trinidad.y(),ilama.x(),ilama.y());//trinidad-ilama
    painter.drawLine(trinidad.x(),trinidad.y(),sps.x(),sps.y());//trinidad-sps
    painter.drawLine(ilama.x(),ilama.y(),santabarbara.x(),santabarbara.y());//ilama-santabarbara
    painter.drawLine(santabarbara.x(),santabarbara.y(),taulabe.x(),taulabe.y());//santabarbara-taulabe
    painter.drawLine(taulabe.x(),taulabe.y(),comayagua.x(),comayagua.y());//taulabe-comayagua
    painter.drawLine(taulabe.x(),taulabe.y(),santacruzdeyojoa.x(),santacruzdeyojoa.y());//taulabe-santacruzdeyojoa
    ui->mapa->setPixmap(QPixmap::fromImage(tmp));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_BTNdijkstra_clicked()
{
    layout->removeWidget(label);
    dijkstra.resolver(ui->DBsrc->currentIndex());
    dijkstra.print();
    layout->addWidget(label);
}

//void MainWindow::on_btnDij_clicked()
//{

//}

void MainWindow::on_BTNfloyd_clicked()
{
    layout->removeWidget(label);
    floyd.resolver();
    floyd.print();
    layout->addWidget(label);
}

void MainWindow::on_BTNkruskal_clicked()
{
    layout->removeWidget(label);
    kruskal.resolver();
    kruskal.print();
    layout->addWidget(label);
}
