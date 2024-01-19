#ifndef SQUARE_H
#define SQUARE_H
#include <QGraphicsItem>
#include <QRectF>
#include <Qt>
#include <QPainter>
#include <QStyleOptionGraphicsItem>
#include <iostream>
#include <QMainWindow>
#include <QGraphicsSceneMouseEvent>


class square : public QGraphicsObject
{
    Q_OBJECT
public:
    explicit square(int X, int Y, QMainWindow *parent = nullptr);
    int X;
    int Y;
    int player = 0;
    void setState(int s);
    // QGraphicsItem interface
protected:
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
    void hoverMoveEvent(QGraphicsSceneHoverEvent *event);

    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
signals:
    void stateChanged(bool R);
};

#endif // SQUARE_H
