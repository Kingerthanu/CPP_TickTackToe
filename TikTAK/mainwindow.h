#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <square.h>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <vector>
#include <algorithm>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    QGraphicsScene layout = new QGraphicsScene(this);
    QGraphicsView *view = new QGraphicsView(this);
    std::vector<std::vector<square*>> SPOTS = {
        {new square(0,0, this),new square(200,0, this),new square(400,0, this)},
        {new square(0,200, this),new square(200,200, this),new square(400,200, this)},
        {new square(0,400, this),new square(200,400, this),new square(400,400, this)},
    };
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void LoadGame();
    std::vector<std::vector<square*>> getSpots();

private:
    Ui::MainWindow *ui;

    // QWidget interface
protected:


    // QWidget interface
public slots:
    void called();
signals:
    void playerChanged(bool R);
};
#endif // MAINWINDOW_H
