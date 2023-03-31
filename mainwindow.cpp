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
#include <QDesktopServices>

#define HARD 1
#define MEDIUM 2
#define EASY 3

Food temp = *new Food();
Recipe r = *new Recipe();
Ingredients i = *new Ingredients();

error404 e = *new error404("Recipe was not found or doesn't exist");

MainWindow::MainWindow(QWidget *parent)
        : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
    this->setWindowTitle("Craigslist");
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::on_actionGithub_triggered()
{
    QUrl url("https://github.com/CraigPhayer/CS4076-Qt-project");
    QDesktopServices::openUrl(url);
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
        ui->textBrowser_2->setText(QString::fromStdString(r.getIngredients()));
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
    ui->textBrowser_2->setText("");
    ui->lineEdit->setText("");
    ui->textBrowser->setText(QString::fromStdString(Recipe::getDifficultyFromList(HARD)));
}


void MainWindow::on_radioButton_3_clicked()//MEDIUM
{
    ui->textBrowser->setText("");
    ui->textBrowser_2->setText("");
    ui->lineEdit->setText("");
    ui->textBrowser->setText(QString::fromStdString(Recipe::getDifficultyFromList(MEDIUM)));
}

void MainWindow::on_radioButton_2_clicked()//EASY
{
    ui->textBrowser->setText("");
    ui->textBrowser_2->setText("");
    ui->lineEdit->setText("");
    ui->textBrowser->setText(QString::fromStdString(Recipe::getDifficultyFromList(EASY)));
}


void MainWindow::setup() {
    /*Example, to be removed*/
    vector<Ingredients> tempV;
    string basicString = "pls. work. thank. you.";
    Ingredients ingredients1 = *new Ingredients(basicString);
    tempV.push_back(ingredients1);
    Food ingredients = *new Food("tempV", tempV);
    Recipe r = *new Recipe("Food", ingredients, "Hard", 4, basicString);
    r.addToList(r);

    vector<Ingredients> croissantsIngredients;
    Ingredients cross1 = *new Ingredients("500g all-purpose flour");
    Ingredients cross2 = cross1;
    cross2.setIngredName("500g all-purpose flour.\n 10g salt. 80g sugar.\n 10g instant yeast.\n 300ml cold milk.\n 250g unsalted butter, at room temperature.\n 1 egg beaten with 1 tablespoon of water, for egg wash");
    string instructionsCross = "In a large mixing bowl, whisk together the flour, salt, sugar, and instant yeast."
                               " Add in the cold milk and mix until a dough forms."
                               " Knead the dough by hand for 10 minutes or use a stand mixer with a dough hook attachment for 5-7 minutes until the dough is smooth and elastic."
                               " Place the dough in a lightly oiled bowl, cover with plastic wrap, and let it rest in the refrigerator for 1 hour."
                               " Take the dough out of the fridge and roll it out into a rectangle."
                               " Spread the softened butter evenly over the entire surface of the dough."
                               " Fold the dough into thirds like a letter, starting with the bottom third and folding it up, then folding the top third down over it."
                               " Turn the dough 90 degrees and repeat the rolling and folding process two more times, for a total of three times."
                               " Wrap the dough tightly in plastic wrap and refrigerate for at least 1 hour, or overnight."
                               " Take the dough out of the fridge and roll it out into a large rectangle."
                               " Cut the dough into triangles, with each triangle about 10-12cm wide at the base."
                               " Roll each triangle up tightly, starting from the base and rolling towards the tip, gently stretching the dough as you roll to elongate it into a crescent shape."
                               " Place the croissants on a baking sheet lined with parchment paper, cover with a clean towel, and let them rise at room temperature for 2-3 hours, until they are puffy and doubled in size."
                               " Preheat the oven to 200°C. Brush the croissants with egg wash."
                               " Bake the croissants for 20-25 minutes, or until they are golden brown and flaky."
                               " Serve the croissants warm or at room temperature.";
    croissantsIngredients.push_back(cross2);
    Food crossIngred = *new Food("croissantsIngredients",croissantsIngredients);
    Recipe Croissants = *new Recipe("Croissants",crossIngred.getIngredients(),"Hard",7, instructionsCross);
    Croissants.addToList(Croissants);

    vector<Ingredients> ChickenP;
    Ingredients chickenPIngred = *new Ingredients("4 boneless, skinless chicken breasts.\n "
                                                  "Salt and black pepper.\n "
                                                  "1 cup all-purpose flour.\n"
                                                  "3 large eggs, beaten.\n "
                                                  "2 cups panko breadcrumbs.\n "
                                                  "1/2 cup grated Parmesan cheese.\n "
                                                  "1/4 cup chopped fresh parsley leaves.\n "
                                                  "2 cups marinara sauce.\n "
                                                  "8 ounces fresh mozzarella cheese, sliced.\n "
                                                  "Olive oil, for frying.\n "
                                                  "1 pound spaghetti, cooked according to package instructions");
    ChickenP.push_back(chickenPIngred);
    string instructionsChickenP = "Preheat the oven to 375°F."
                                  "Place the chicken breasts between two sheets of plastic wrap and pound them with a meat mallet until they are of an even thickness. Season the chicken with salt and black pepper."
                                  "Set up three shallow dishes: one with flour, one with beaten eggs, and one with a mixture of panko breadcrumbs, Parmesan cheese, and chopped parsley."
                                  "Dredge each chicken breast in flour, shaking off any excess. Dip the chicken in the beaten eggs, and then coat with the breadcrumb mixture, pressing it onto the chicken to adhere."
                                  "Heat about 1/4 inch of olive oil in a large skillet over medium-high heat. When the oil is hot, add the chicken breasts and cook until golden brown and cooked through, about 3-4 minutes per side."
                                  "Transfer the chicken to a baking dish. Top each chicken breast with a few spoonfuls of marinara sauce, and then add slices of mozzarella cheese on top."
                                  "Bake in the preheated oven for 15-20 minutes, or until the cheese is melted and bubbly."
                                  "While the chicken is baking, cook the spaghetti according to package instructions."
                                  "To serve, place a chicken breast on a plate with some of the melted mozzarella cheese and marinara sauce. Serve with spaghetti on the side.";
    Food chickP = *new Food("ChickenP",ChickenP);
    Recipe chickenParmesan = *new Recipe("Chicken Parmesan",chickP.getIngredients(),"Medium",9,instructionsChickenP);
    chickenParmesan.addToList(chickenParmesan);

    vector<Ingredients> eggs;
    Ingredients eggsIngred = *new Ingredients("2 large eggs\n"
                                              "1 tablespoon milk\n"
                                              "Salt and black pepper\n"
                                              "1 tablespoon unsalted butter");
    eggs.push_back(eggsIngred);
    string instructionsEggs = "Crack the eggs into a bowl and whisk together with the milk. Add a pinch of salt and black pepper and whisk again."
                              "Melt the butter in a non-stick skillet over medium heat."
                              "Pour the egg mixture into the skillet and let it sit for a few seconds to start to set."
                              "Using a spatula, gently scramble the eggs by stirring them around the skillet until they are cooked to your desired level of doneness."
                              "Season with additional salt and black pepper to taste."
                              "Serve the scrambled eggs hot with toast, bacon, or other breakfast sides of your choice.";
    Food egg = *new Food("Scrambled eggs",eggs);
    Recipe scrambledEggs = *new Recipe("Scrambled eggs",egg.getIngredients(),"Easy",6,instructionsEggs);
    scrambledEggs.addToList(scrambledEggs);



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

string MainWindow::formatString(const string &str) {
    string output;

    string::size_type pos = 0;
    for (int i = 0; i < str.length(); ++i) {
        while (pos < str.length()){
            output += str[pos];
            if (str[pos] == '.'){
                output += "\n";
                ++pos;
                break;
            }
            ++pos;
        }
        if (pos == str.length())
            pos = 0;
        output += "\n";
    }
    return output;
}

