#ifndef BOT_H
#define BOT_H

#include <QObject>
#include <QMainWindow>
#include <random>
#include <vector>
#include <square.h>
#include <QObject>
#include <mainwindow.h>


class bot : public QObject
{
    Q_OBJECT
public:
    bot(MainWindow *parent);
    MainWindow *paren;
    int r = distX(rng);
    int c = distY(rng);
private:
    int round = 0;
    std::default_random_engine rng = *new std::default_random_engine(time(0));
    std::uniform_int_distribution<std::mt19937::result_type> distX = *new std::uniform_int_distribution<std::mt19937::result_type>(0,2);
    std::uniform_int_distribution<std::mt19937::result_type> distY = *new std::uniform_int_distribution<std::mt19937::result_type>(0,2);
protected slots:
    void MyTurn();
};

#endif // BOT_H
