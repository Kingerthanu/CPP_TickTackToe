#include "mainwindow.h"
#include "bot.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow *w = new MainWindow();
    bot *Bob = new bot(w);
    w->connect(w, SIGNAL(playerChanged(bool)), Bob, SLOT(MyTurn()));
    w->setWindowTitle("Tik-Tak");
    w->setWindowIcon(QPixmap("C:/Users/Daddy/Desktop/The Code Box/CPP Docs/first cpp/Gui/TikTAK/ICON.png"));
    w->show();
    return a.exec();
}
