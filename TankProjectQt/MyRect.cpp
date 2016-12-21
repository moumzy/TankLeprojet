#include "MyRect.h"
#include <QGraphicsScene>
#include <QKeyEvent>
#include "Bullet.h"

#include <QDebug>
void MyRect::keyPressEvent(QKeyEvent *event){


    if (event->key() == Qt::Key_Left && x() > 0){
        setPos(x()-10,y());
    }
    else if (event->key() == Qt::Key_Right && x() < 700){   // 800(largeur fenetre) - taille du tank (rectangle)
        setPos(x()+10,y());
    }
    else if (event->key() == Qt::Key_Up && y() > 0){
        setPos(x(),y()-10);
    }
    else if (event->key() == Qt::Key_Down && y() < 500){
        setPos(x(),y()+10);
    }
    else if (event->key() == Qt::Key_Space){
        // create a bullet
        Bullet * bullet = new Bullet();
        bullet->setPos(x(),y());
        scene()->addItem(bullet);
    }
}
