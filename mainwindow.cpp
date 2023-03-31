#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QLineEdit>
#include <QTextBrowser>
#include "Recipe.h"
#include "error404.h"
#include <QMessageBox>
#include <QPalette>
#include <QBrush>
#include <QWidget>

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


void MainWindow::on_verticalSlider_valueChanged(int value)
{
    if(ui->resetBox->isChecked()){
        this->setStyleSheet("background-color: ;");
        ui->verticalSlider->setRange(0,255);
        QColor color1(255 - value, value, 0);
        QColor color2(value, 0, 255 - value);

        QLinearGradient gradient(0, 0, 0, this->height());
        gradient.setColorAt(0, color1);
        gradient.setColorAt(1, color2);

        QPalette palette;
        palette.setBrush(QPalette::Window, QBrush(gradient));
        this->setPalette(palette);
        this->setAutoFillBackground(true);
    }
}

void MainWindow::windowColour(){

    if (!ui->redBox->isChecked() && !ui->resetBox->isChecked() && !ui->greenBox->isChecked() && !ui->blueBox->isChecked()
        && !ui->purpleBox->isChecked()
        && !ui->orangeBox->isChecked()){
        QPalette background = palette();
        background.setColor(QPalette::Window, Qt::white);
        this->setPalette(background);
    }
}


void MainWindow::on_greenBox_stateChanged(int arg1)
{
    if (ui->greenBox->isChecked()){
        ui->purpleBox->setChecked(false);
        ui->orangeBox->setChecked(false);
        ui->redBox->setChecked(false);
        ui->blueBox->setChecked(false);
        ui->resetBox->setChecked(false);
        QPalette background = palette();
        background.setColor(QPalette::Window, Qt::green);
        this->setPalette(background);
    }
    windowColour();
}


void MainWindow::on_blueBox_stateChanged(int arg1)
{
    if (ui->blueBox->isChecked()){
        ui->purpleBox->setChecked(false);
        ui->orangeBox->setChecked(false);
        ui->redBox->setChecked(false);
        ui->greenBox->setChecked(false);
        ui->resetBox->setChecked(false);
        QPalette background = palette();
        background.setColor(QPalette::Window, Qt::blue);
        this->setPalette(background);
    }
    windowColour();
}


void MainWindow::on_redBox_stateChanged(int arg1)
{
    if (ui->redBox->isChecked()){
        ui->purpleBox->setChecked(false);
        ui->orangeBox->setChecked(false);
        ui->blueBox->setChecked(false);
        ui->greenBox->setChecked(false);
        ui->resetBox->setChecked(false);
        QPalette background = palette();
        background.setColor(QPalette::Window, Qt::red);
        this->setPalette(background);
    }
    windowColour();
}


void MainWindow::on_resetBox_stateChanged(int arg1)
{
    if(ui->resetBox->isChecked()){
        ui->purpleBox->setChecked(false);
        ui->orangeBox->setChecked(false);
        ui->blueBox->setChecked(false);
        ui->greenBox->setChecked(false);
        ui->redBox->setChecked(false);
    }
    windowColour();
}


void MainWindow::on_purpleBox_stateChanged(int arg1) {
    if (ui->purpleBox->isChecked()) {
        ui->orangeBox->setChecked(false);
        ui->redBox->setChecked(false);
        ui->blueBox->setChecked(false);
        ui->greenBox->setChecked(false);
        ui->resetBox->setChecked(false);
        QPalette background = palette();
        background.setColor(QPalette::Window, Qt::darkMagenta);
        this->setPalette(background);
    }
    windowColour();
}

void MainWindow::on_orangeBox_stateChanged(int arg1) {
    QColor orange = QColor(255, 165, 0);
    if (ui->orangeBox->isChecked()) {
        ui->purpleBox->setChecked(false);
        ui->redBox->setChecked(false);
        ui->blueBox->setChecked(false);
        ui->greenBox->setChecked(false);
        ui->resetBox->setChecked(false);
        QPalette background = palette();
        background.setColor(QPalette::Window, orange);
        this->setPalette(background);
    }
    windowColour();
}
