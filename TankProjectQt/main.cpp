#include <QApplication>
#include "MyRect.h"
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QLabel>
#include <QPicture>
#include <QPainter>

/*
Tutorial Topics:
-QTimer
-signals and slots (connect function)
-QObject and Q_OBJECT macro
*/

int main(int argc, char *argv[]){
    QApplication a(argc, argv);


    QLabel l; //affichage de texte ou d'image
       QPicture pi;    //afficher sur le conteneurs
       QPainter p(&pi);//conteneur
     // p.setWindow(50, 100, 200,200 );
       p.setPen(QPen(Qt::blue, 1)); //police(couleur et taille)

   //p.drawLine(50, 100,200, 200);

       p.end(); // Don't forget this line! -> destructeur de p, renvoie true si desactiver

          l.setPicture(pi); //definit le contenu de l'etiquette a l'image(le precedent est effacer)
          l.show();        //afficher l


    return a.exec();
}
