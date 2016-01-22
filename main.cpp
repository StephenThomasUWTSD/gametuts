#include <QApplication>
#include <QGraphicsScene>
#include "MyRect.h"
#include <QGraphicsView>

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
    view ->show();
    //QGraphicsView
    return a.exec();
}
