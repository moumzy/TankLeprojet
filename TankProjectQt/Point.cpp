#include "Point.h"



Point::Point(){
    this->x=0;
    this->y=0;
}

Point::Point(int x1,int y1){

    this->x=x1;
    this->y=y1;
}
Point::Point(const Point& p1){

    this->x=p1.x;
    this->y=p1.y;
}
