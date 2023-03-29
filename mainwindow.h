#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "Recipe.h"
#include "Utility.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow, public Utility<string>
{
    Q_OBJECT

    template <typename T>
    struct compare
    {
        T key;
        explicit compare(T str): key{(str)} {}

        bool operator()(T const &r) {
            //return (r == key);
            std::string key_lower = key;
            std::transform(key_lower.begin(), key_lower.end(), key_lower.begin(), [](char c) { return std::tolower(c); });
            std::string r_lower = r;
            std::transform(r_lower.begin(), r_lower.end(), r_lower.begin(), [](char c) { return std::tolower(c); });
            return (r_lower == key_lower);
        }
    };
public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actionExit_triggered();

    void on_searchButton_clicked();

    void on_radioButton_4_clicked();//HARD

    void on_radioButton_3_clicked();//MEDIUM

    void on_radioButton_2_clicked();//EASY

    void on_radioButton_clicked();//FULL LIST
private:
    Ui::MainWindow *ui;
protected:

    string searchList(const string& str, const vector<string> &vectorS) override;
};

#endif // MAINWINDOW_H
