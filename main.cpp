#include "mainwindow.h"
#include <vector>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setup();
    w.show();
    return a.exec();
}
