#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QLineEdit>
#include "Recipe.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionExit_triggered()
{
    exit(0);
}

void MainWindow::on_searchButton_clicked()
{
    string temp = ui->lineEdit->text().toStdString();
    Recipe::searchList(temp);
}

