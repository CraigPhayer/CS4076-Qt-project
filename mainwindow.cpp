#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QLineEdit>
#include "Recipe.h"

/*template <typename T>
struct compare
{
    T key;
    explicit compare(T str): key(std::move(str)) {}

    bool operator()(T const &r) {
        return (r == key);
    }
};*/

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
    searchList(temp,Recipe::getRecipeList());
    //ui->scrollArea->setT

}

string MainWindow::searchList(const string &str, const vector<string> &vectorS) {
    if (any_of(vectorS.begin(),vectorS.end(),compare(str))){
        return str;
    } else return "not working";

}

