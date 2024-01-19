#include "square.h"


square::square(int X, int Y, QMainWindow *parent)
    : QGraphicsObject()
{
    this->setAcceptHoverEvents(true);
    this->X = X;
    this->Y = Y;
    connect(this, SIGNAL(stateChanged(bool)), parent, SLOT(called()));
}

void square::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    std::cout << "PRESSED" << "\n";
    if(event->button() == Qt::RightButton){
        setState(-1);
    }
    else{
    setState(1);
    emit stateChanged(true);}

}
void square::setState(int s){
    player = s;

}
void square::hoverMoveEvent(QGraphicsSceneHoverEvent *event)
{
    this->setCursor(QCursor(Qt::PointingHandCursor));
}

QRectF square::boundingRect() const
{
    return QRectF(this->X, this->Y, 200,200);
}

void square::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    switch(player){
        case 0:
            break;
        case 1:
            painter->drawLine(QLine(this->X+50, this->Y+50, this->X+150, this->Y+150));
            painter->drawLine(QLine(this->X+150, this->Y+50, this->X+50, this->Y+150));
            break;
        case -1:
            painter->drawEllipse(this->X+45, this->Y+45, 100,100);
            break;
        }

    painter->drawRect(boundingRect());
    this->update();

}

