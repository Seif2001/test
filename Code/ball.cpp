#include "ball.h"

ball::ball()
{

        int StartX = 50;
        int StartY = 50;

        setPos(mapToParent(StartX*count, StartY));
}

QRectF ball::boundingRect() const
{
     return QRect(0, 0, 20, 20);  //20 pixels
}

void ball::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
   QRectF rec = boundingRect();
   QBrush Brush(Qt::gray);

           Brush.setColor(Qt::blue);


   painter->fillRect(rec, Brush);
   painter->drawRect(rec); //very simple object

}



