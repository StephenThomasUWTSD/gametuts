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
    MyRect * rect = new MyRect();
    rect->setRect(0,0, 100, 100);

    //add item  to scene
    scene ->addItem(rect);

    //make the item focusssabble
    rect->setFlag(QGraphicsItem::ItemIsFocusable);
    rect ->setFocus();

    //add a view into the scene.
    QGraphicsView * view = new QGraphicsView(scene);
    view -> setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view -> setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    view ->show();
    view ->setFixedSize(800,600);
    view ->setSceneRect(0,0, 800, 600);


    return a.exec();
}
