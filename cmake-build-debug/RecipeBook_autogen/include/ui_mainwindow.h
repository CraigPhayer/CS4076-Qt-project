/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionExit;
    QWidget *centralwidget;
    QLabel *label_2;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *radioButton_4;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_2;
    QPushButton *searchButton;
    QLabel *label;
    QLabel *label_4;
    QVBoxLayout *verticalLayout_3;
    QTextBrowser *textBrowser_2;
    QTextBrowser *textBrowser;
    QLineEdit *lineEdit;
    QGridLayout *gridLayout_2;
    QLabel *label_3;
    QGridLayout *gridLayout_3;
    QLabel *label_5;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout_8;
    QLabel *label_7;
    QSlider *verticalSlider;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_4;
    QCheckBox *redBox;
    QCheckBox *greenBox;
    QCheckBox *blueBox;
    QHBoxLayout *horizontalLayout;
    QCheckBox *purpleBox;
    QCheckBox *resetBox;
    QCheckBox *orangeBox;
    QStatusBar *statusbar;
    QMenuBar *menubar;
    QMenu *menuMenu;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(810, 810);
        MainWindow->setMinimumSize(QSize(810, 810));
        MainWindow->setMaximumSize(QSize(810, 810));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName("actionExit");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(11, 11, 211, 91));
        QFont font;
        font.setPointSize(30);
        label_2->setFont(font);
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(10, 350, 631, 411));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        radioButton_4 = new QRadioButton(verticalLayoutWidget);
        radioButton_4->setObjectName("radioButton_4");

        verticalLayout_2->addWidget(radioButton_4);

        radioButton_3 = new QRadioButton(verticalLayoutWidget);
        radioButton_3->setObjectName("radioButton_3");

        verticalLayout_2->addWidget(radioButton_3);

        radioButton_2 = new QRadioButton(verticalLayoutWidget);
        radioButton_2->setObjectName("radioButton_2");

        verticalLayout_2->addWidget(radioButton_2);


        gridLayout->addLayout(verticalLayout_2, 1, 0, 1, 1);

        searchButton = new QPushButton(verticalLayoutWidget);
        searchButton->setObjectName("searchButton");

        gridLayout->addWidget(searchButton, 3, 2, 1, 1);

        label = new QLabel(verticalLayoutWidget);
        label->setObjectName("label");

        gridLayout->addWidget(label, 3, 0, 1, 1);

        label_4 = new QLabel(verticalLayoutWidget);
        label_4->setObjectName("label_4");

        gridLayout->addWidget(label_4, 0, 0, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        textBrowser_2 = new QTextBrowser(verticalLayoutWidget);
        textBrowser_2->setObjectName("textBrowser_2");

        verticalLayout_3->addWidget(textBrowser_2);


        gridLayout->addLayout(verticalLayout_3, 1, 2, 1, 1);

        textBrowser = new QTextBrowser(verticalLayoutWidget);
        textBrowser->setObjectName("textBrowser");

        gridLayout->addWidget(textBrowser, 1, 1, 1, 1);

        lineEdit = new QLineEdit(verticalLayoutWidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setMinimumSize(QSize(329, 0));

        gridLayout->addWidget(lineEdit, 3, 1, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName("label_3");

        gridLayout_2->addWidget(label_3, 0, 0, 1, 1, Qt::AlignHCenter);


        gridLayout->addLayout(gridLayout_2, 0, 1, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName("gridLayout_3");
        label_5 = new QLabel(verticalLayoutWidget);
        label_5->setObjectName("label_5");

        gridLayout_3->addWidget(label_5, 0, 0, 1, 1, Qt::AlignHCenter);


        gridLayout->addLayout(gridLayout_3, 0, 2, 1, 1);


        verticalLayout->addLayout(gridLayout);

        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(650, 350, 160, 411));
        gridLayout_8 = new QGridLayout(gridLayoutWidget);
        gridLayout_8->setObjectName("gridLayout_8");
        gridLayout_8->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(gridLayoutWidget);
        label_7->setObjectName("label_7");

        gridLayout_8->addWidget(label_7, 0, 0, 1, 1, Qt::AlignHCenter);

        verticalSlider = new QSlider(gridLayoutWidget);
        verticalSlider->setObjectName("verticalSlider");
        verticalSlider->setAutoFillBackground(false);
        verticalSlider->setOrientation(Qt::Vertical);
        verticalSlider->setInvertedAppearance(true);

        gridLayout_8->addWidget(verticalSlider, 1, 0, 1, 1, Qt::AlignHCenter);

        gridLayoutWidget_2 = new QWidget(centralwidget);
        gridLayoutWidget_2->setObjectName("gridLayoutWidget_2");
        gridLayoutWidget_2->setGeometry(QRect(480, 180, 321, 161));
        gridLayout_4 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_4->setObjectName("gridLayout_4");
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        redBox = new QCheckBox(gridLayoutWidget_2);
        redBox->setObjectName("redBox");

        gridLayout_4->addWidget(redBox, 0, 0, 1, 1);

        greenBox = new QCheckBox(gridLayoutWidget_2);
        greenBox->setObjectName("greenBox");

        gridLayout_4->addWidget(greenBox, 2, 0, 1, 1);

        blueBox = new QCheckBox(gridLayoutWidget_2);
        blueBox->setObjectName("blueBox");

        gridLayout_4->addWidget(blueBox, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        purpleBox = new QCheckBox(gridLayoutWidget_2);
        purpleBox->setObjectName("purpleBox");

        horizontalLayout->addWidget(purpleBox);


        gridLayout_4->addLayout(horizontalLayout, 1, 1, 1, 1);

        resetBox = new QCheckBox(gridLayoutWidget_2);
        resetBox->setObjectName("resetBox");

        gridLayout_4->addWidget(resetBox, 0, 1, 1, 1);

        orangeBox = new QCheckBox(gridLayoutWidget_2);
        orangeBox->setObjectName("orangeBox");

        gridLayout_4->addWidget(orangeBox, 2, 1, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 810, 25));
        menuMenu = new QMenu(menubar);
        menuMenu->setObjectName("menuMenu");
        MainWindow->setMenuBar(menubar);

        menubar->addAction(menuMenu->menuAction());
        menuMenu->addAction(actionExit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionExit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Craigslist", nullptr));
        radioButton_4->setText(QCoreApplication::translate("MainWindow", "Hard", nullptr));
        radioButton_3->setText(QCoreApplication::translate("MainWindow", "Medium", nullptr));
        radioButton_2->setText(QCoreApplication::translate("MainWindow", "Easy", nullptr));
        searchButton->setText(QCoreApplication::translate("MainWindow", "Search", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Search Recipe: ", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "    Difficulty", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Recipe List", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Ingredients", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Gradient Slider", nullptr));
        redBox->setText(QCoreApplication::translate("MainWindow", "Red", nullptr));
        greenBox->setText(QCoreApplication::translate("MainWindow", "Green", nullptr));
        blueBox->setText(QCoreApplication::translate("MainWindow", "Blue", nullptr));
        purpleBox->setText(QCoreApplication::translate("MainWindow", "Purple", nullptr));
        resetBox->setText(QCoreApplication::translate("MainWindow", "Gradient", nullptr));
        orangeBox->setText(QCoreApplication::translate("MainWindow", "Orange", nullptr));
        menuMenu->setTitle(QCoreApplication::translate("MainWindow", "Menu", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
