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
            return (r == key);
        }
    };
// compare x
// x()"Helli"
public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actionExit_triggered();

    void on_searchButton_clicked();

private:
    Ui::MainWindow *ui;
protected:
    string searchList(const string& str, const vector<string> &vectorS) override;
};

#endif // MAINWINDOW_H
