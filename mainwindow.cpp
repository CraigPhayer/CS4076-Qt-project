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

Food temp = *new Food("temp");
Recipe r = *new Recipe();

error404 e = *new error404("Recipe was not found or doesn't exist");

MainWindow::MainWindow(QWidget *parent)
        : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
    this->setWindowTitle("Craigslist");
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::on_actionExit_triggered() {
    exit(0);
}

void MainWindow::on_searchButton_clicked() {
    try {
        searchList(ui->lineEdit->text().toStdString(), Recipe::getRecipeList());
        ui->textBrowser->clear();
        ui->textBrowser->setText(QString::fromStdString(r.instructionsGlobal));
        ui->textBrowser_2->clear();
        ui->textBrowser_2->setText(QString::fromStdString(Recipe::getIngredients()));
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

void MainWindow::setup() {
    vector<Ingredients> tempV;
    string basicString = "pls. work. thank. you.";
    Ingredients ingredients1 = *new Ingredients(basicString);
    tempV.push_back(ingredients1);
    Food ingredients = *new Food("tempV", tempV);
    Recipe r = *new Recipe("Food", ingredients, "Hard", 4, basicString);
    r.addToList(r);
}


void MainWindow::on_horizontalSlider_valueChanged(int value)
{
    /*QColor color(value, value, value);

    this->setStyleSheet(QString("background-color: %1").arg(color.name()));*/
    ui->horizontalSlider->setRange(0,255);

    int hue = value * 2;

    // Create a QColor object with the calculated hue and full saturation and value
    QColor color = QColor::fromHsv(hue, 255, 255);

    // Set the background color of the window to the QColor object
    this->setStyleSheet(QString("background-color: %1").arg(color.name()));
}

