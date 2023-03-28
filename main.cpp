#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Food ingredients = *new Food("temp");
    Recipe r = *new Recipe("Food", ingredients);
    r.addToList(r);
    
    MainWindow w;
    w.show();
    return a.exec();
}
