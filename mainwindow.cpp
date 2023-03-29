#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QLineEdit>
#include <QTextBrowser>
#include "Recipe.h"
#include "error404.h"
#include <QMessageBox>

#define HARD 1
#define MEDIUM 2
#define EASY 3

error404 e = *new error404("Recipe was not found or doesn't exist");

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
        ui->textBrowser->clear();
        ui->textBrowser->setText(QString::fromStdString(searchList(ui->lineEdit->text().toStdString(), Recipe::getRecipeList())));
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

void MainWindow::on_radioButton_4_clicked()//HARD
{
    ui->textBrowser->setText("");
    ui->textBrowser->setText(QString::fromStdString(Recipe::getDifficultyFromList(HARD)));
}


void MainWindow::on_radioButton_3_clicked()//MEDIUM
{
    ui->textBrowser->setText("");
    ui->textBrowser->setText(QString::fromStdString(Recipe::getDifficultyFromList(MEDIUM)));
}


void MainWindow::on_radioButton_2_clicked()//EASY
{
    ui->textBrowser->setText("");
    ui->textBrowser->setText(QString::fromStdString(Recipe::getDifficultyFromList(EASY)));
}


void MainWindow::on_radioButton_clicked()//FULL LIST
{
    ui->textBrowser->setText("");
    ui->textBrowser->setText(QString::fromStdString(Recipe::getRecipeNameList()));
}

