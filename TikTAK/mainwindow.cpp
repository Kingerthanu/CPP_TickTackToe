#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setFixedSize(QSize(600,600));
    view->setGeometry(0,0, 600,600);
    layout.setSceneRect(0,0, 600,600);
    view->setHorizontalScrollBarPolicy( Qt::ScrollBarAlwaysOff );
    view->setVerticalScrollBarPolicy( Qt::ScrollBarAlwaysOff );
    this->statusBar()->hide();
    LoadGame();
    view->setScene(&layout);
    setCentralWidget(view);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::LoadGame()
{
    for(std::vector<square*> line : SPOTS){
        for(square* part : line){
            layout.addItem(part);
    }
    }
}

std::vector<std::vector<square *> > MainWindow::getSpots()
{
    return SPOTS;
}

void MainWindow::called()
{ 
    int count = 0;
    //Check for Crosses
    //Left to Right
    std::cout << SPOTS[0][0]->player +SPOTS[1][1]->player +SPOTS[2][2]->player << "\n";
    switch(SPOTS[0][0]->player +SPOTS[1][1]->player +SPOTS[2][2]->player){
        case 3:
            std::cout << "Player 1" << '\n';
            return;
        case -3:
            std::cout << "Player 2" << '\n';
            return;
    }
    //Right to Left
    switch(SPOTS[0][2]->player +SPOTS[1][1]->player +SPOTS[2][0]->player){
        case 3:
            std::cout << "Player 1" << '\n';

            return;
        case -3:
            std::cout << "Player 2" << '\n';
            return;
    }
    // Check for Column or Row Case
    for(int i = 0; i < 3; i++){
        for(int d = 0; d < 3; d++){
            if(i == 0){
                switch(SPOTS[0][d]->player +SPOTS[1][d]->player +SPOTS[2][d]->player){
                    case 3:
                        std::cout << "Player 1 WON" << '\n';
                        return;
                    case -3:
                        std::cout << "Player 2 WON" << '\n';
                        return;
                }
            }
            switch(SPOTS[i][d]->player){
            case 1:
                count ++;
                break;
            case -1:
                count --;
                break;
            }
    }
        if(count == 3){
            std::cout << "PLAYER 1 WON" << "\n";
        }
        else if(count == -3){
            std::cout << "PLAYER 2 WON" << "\n";
        }
        count = 0;

    }
    emit playerChanged(true);
}



