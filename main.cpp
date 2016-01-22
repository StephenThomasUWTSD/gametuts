#include <QApplication>
#include <QGraphicsScene>
#include "Player.h"
#include <QGraphicsView>
#include <QTimer>
#include "Enemy.h"
#include "Game.h"
//unnecessary comment...
Game * game;

int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    //QGraphicsScene
    game=new Game();
    game->show();
    return a.exec();
}
