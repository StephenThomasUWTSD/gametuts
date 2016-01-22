#include "Enemy.h"
#include <QGraphicsScene>
#include <QTimer>
#include <stdlib.h>
#include <QList>
#include "Game.h"
extern Game * game;

Enemy::Enemy()
{

   //set random enemy position along x
    int random_number = rand() % 700;
    setPos(random_number,0);
    //drew the rect
    setRect(0,0,100, 100);

//connect
    QTimer * timer = new QTimer();
    QObject::connect(timer,SIGNAL(timeout()),this,SLOT(move()));
    timer->start(50);
}

void Enemy::move()
{
    //move the enemy down
    setPos(x(),y()+5);

    if(pos().y()+rect().height() > 600)
    {
        //decrease health
        game->health->decrease();

        scene()->removeItem(this);
        delete this;
    }
}

