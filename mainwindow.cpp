#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QLineEdit>
#include "Recipe.h"
#include "error404.h"
#include <QMessageBox>

error404 e = *new error404("Recipe was not found or doesn't exist");

MainWindow::MainWindow(QWidget *parent)
        : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
    ui->textEdit->setText(QString::fromStdString(Recipe::getList()));
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::on_actionExit_triggered() {
    exit(0);
}

void MainWindow::on_searchButton_clicked() {
    try {
        ui->textEdit->setText(QString::fromStdString(searchList(ui->lineEdit->text().toStdString(), Recipe::getRecipeList())));
    } catch (error404 error) {
        ui->lineEdit->clear();
        QMessageBox::information(this, tr("Error 404"), tr("Recipe was not found or doesn't exist"));
    }
}

string MainWindow::searchList(const string &str, const vector<string> &vectorS) {
    if (any_of(vectorS.begin(), vectorS.end(), compare(str))) {
        return str;
    }
    throw e;
}
