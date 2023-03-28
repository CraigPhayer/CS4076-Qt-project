#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QLineEdit>
#include "Recipe.h"
#include "error404.h"
#include <QMessageBox>

error404 e = *new error404("Recipe was not found or doesn't exist");
string recipeReturn;

MainWindow::MainWindow(QWidget *parent)
        : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::on_actionExit_triggered() {
    exit(0);
}

void MainWindow::on_searchButton_clicked() {
    try {
        string temp = ui->lineEdit->text().toStdString();
        searchList(temp, Recipe::getRecipeList());
        ui->textEdit->setText(QString::fromStdString(recipeReturn));
    } catch (error404 error) {
        ui->lineEdit->clear();
        QMessageBox::information(this, tr("Error 404"), tr("Recipe was not found or doesn't exist"));
    }


}

void MainWindow::searchList(const string &str, const vector<string> &vectorS) {
    if (any_of(vectorS.begin(), vectorS.end(), compare(str))) {
        recipeReturn = str;
        return;
    }
    throw e;
}
