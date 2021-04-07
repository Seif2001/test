#ifndef BALL_H
#define BALL_H

#include<QPainter>
#include<QGraphicsItem>
#include<QGraphicsScene>
#include <QtCore>
#include <QtGui>

class ball : public QGraphicsItem
{
public:
    ball();
    QRectF boundingRect() const;
    void paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget);

private:
        static int count;

};

#endif // BALL_H
