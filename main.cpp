#include <QApplication>
#include <QGraphicsScene>
#include "MyRect.h"
#include <QGraphicsView>

//unnecessary comment...

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //QGraphicsScene
    QGraphicsScene * scene = new QGraphicsScene();
    //QGraphicsItem (QGraphicsRectItem)
    MyRect * player = new MyRect();
    player->setRect(0,0, 100, 100);

    //add item  to scene
    scene ->addItem(player);

    //make the item focusssabble
    player->setFlag(QGraphicsItem::ItemIsFocusable);
    player->setFocus();

    //add a view into the scene.
    QGraphicsView * view = new QGraphicsView(scene);
    view -> setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view -> setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    view ->show();
    view ->setFixedSize(800,600);
    view ->setSceneRect(0,0, 800, 600);


    return a.exec();
}
