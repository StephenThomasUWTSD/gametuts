#include "Player.h"
#include <QKeyEvent>
#include "Bullet.h"
#include "Enemy.h"
#include <QGraphicsScene>
void Player::keyPressEvent(QKeyEvent *event)
{
    if (event -> key() == Qt::Key_Left)
    {
        if(pos().x()>0)
        setPos(x() -10, y());
    }
    else if (event -> key() == Qt::Key_Right)
    {
        if(pos().x()+100<800)
        setPos(x() +10, y());
    }
    else if (event->key()== Qt::Key_Space)
    {
        Bullet * bullet = new Bullet();
        bullet->setPos(x(),y());
        scene()->addItem(bullet);
    }
}

void Player::spawn()
{
    //create an enemy
    Enemy * enemy=new Enemy();
    scene()-> addItem(enemy);
}

//up and down commmands. kept for reference/if i want to modify the game

/*else if (event -> key() == Qt::Key_Up)
{
    setPos(x(), y() -10);
}
else if (event -> key() == Qt::Key_Down)
{
    setPos(x(), y()+10);
}
*/
