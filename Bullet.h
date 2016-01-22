#ifndef BULLET_H
#define BULLET_H

#include <QGraphicsRectItem>
#include <QObject>
//                             V--- there - needed to be public also... C++ is a pain man!its not fixed though because those bullets are meant to go up
//humbug. that but is just temp disabled, look
class Bullet: public QObject, public QGraphicsRectItem //this needs to inherit from qobject...
        //FIXED! yay thanks man. was it just this bit?
        //yes, Ii tried with the order the other way round, didnt work

{
    Q_OBJECT
public:
    Bullet();
public slots:
    void move();

};

#endif // BULLET_H
