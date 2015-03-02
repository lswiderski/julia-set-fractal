/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout;
    QGridLayout *gridLayout_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents_2;
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *settingsBox;
    QGridLayout *gridLayout_4;
    QPushButton *pushButton;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLineEdit *N_MAXEdit;
    QGridLayout *gridLayout_5;
    QPushButton *upButton;
    QPushButton *downButton;
    QPushButton *rightButton;
    QPushButton *leftButton;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QLineEdit *ReEdit;
    QLabel *label_4;
    QLineEdit *ImEdit;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *ZoomPlus;
    QPushButton *ZoomMinus;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setWindowModality(Qt::WindowModal);
        MainWindow->resize(723, 617);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_3 = new QGridLayout(centralWidget);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetNoConstraint);
        gridLayout->setVerticalSpacing(6);
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        scrollArea = new QScrollArea(centralWidget);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QStringLiteral("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 493, 532));
        scrollArea->setWidget(scrollAreaWidgetContents_2);

        gridLayout_2->addWidget(scrollArea, 4, 2, 1, 1);


        gridLayout->addLayout(gridLayout_2, 1, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));

        gridLayout->addLayout(horizontalLayout_2, 3, 0, 1, 1);


        gridLayout_3->addLayout(gridLayout, 0, 1, 1, 1);

        settingsBox = new QGroupBox(centralWidget);
        settingsBox->setObjectName(QStringLiteral("settingsBox"));
        settingsBox->setMaximumSize(QSize(200, 16777215));
        gridLayout_4 = new QGridLayout(settingsBox);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        pushButton = new QPushButton(settingsBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setLayoutDirection(Qt::LeftToRight);

        gridLayout_4->addWidget(pushButton, 2, 1, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setSizeConstraint(QLayout::SetDefaultConstraint);
        label_2 = new QLabel(settingsBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_3->addWidget(label_2);

        N_MAXEdit = new QLineEdit(settingsBox);
        N_MAXEdit->setObjectName(QStringLiteral("N_MAXEdit"));
        N_MAXEdit->setMaximumSize(QSize(40, 16777215));

        horizontalLayout_3->addWidget(N_MAXEdit);


        gridLayout_4->addLayout(horizontalLayout_3, 1, 1, 1, 1);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setSpacing(6);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        upButton = new QPushButton(settingsBox);
        upButton->setObjectName(QStringLiteral("upButton"));

        gridLayout_5->addWidget(upButton, 0, 1, 1, 1);

        downButton = new QPushButton(settingsBox);
        downButton->setObjectName(QStringLiteral("downButton"));

        gridLayout_5->addWidget(downButton, 2, 1, 1, 1);

        rightButton = new QPushButton(settingsBox);
        rightButton->setObjectName(QStringLiteral("rightButton"));

        gridLayout_5->addWidget(rightButton, 1, 2, 1, 1);

        leftButton = new QPushButton(settingsBox);
        leftButton->setObjectName(QStringLiteral("leftButton"));

        gridLayout_5->addWidget(leftButton, 1, 0, 1, 1);


        gridLayout_4->addLayout(gridLayout_5, 3, 1, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_3 = new QLabel(settingsBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);

        ReEdit = new QLineEdit(settingsBox);
        ReEdit->setObjectName(QStringLiteral("ReEdit"));
        ReEdit->setMaximumSize(QSize(40, 16777215));
        ReEdit->setMaxLength(10);

        horizontalLayout->addWidget(ReEdit);

        label_4 = new QLabel(settingsBox);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout->addWidget(label_4);

        ImEdit = new QLineEdit(settingsBox);
        ImEdit->setObjectName(QStringLiteral("ImEdit"));
        ImEdit->setMaximumSize(QSize(40, 16777215));

        horizontalLayout->addWidget(ImEdit);


        verticalLayout->addLayout(horizontalLayout);


        gridLayout_4->addLayout(verticalLayout, 0, 1, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        ZoomPlus = new QPushButton(settingsBox);
        ZoomPlus->setObjectName(QStringLiteral("ZoomPlus"));

        horizontalLayout_4->addWidget(ZoomPlus);

        ZoomMinus = new QPushButton(settingsBox);
        ZoomMinus->setObjectName(QStringLiteral("ZoomMinus"));

        horizontalLayout_4->addWidget(ZoomMinus);


        gridLayout_4->addLayout(horizontalLayout_4, 4, 1, 1, 1);

        label_3->raise();
        pushButton->raise();

        gridLayout_3->addWidget(settingsBox, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 723, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Julia set Fractals // Lukasz Swiderski 2015 PB", 0));
        settingsBox->setTitle(QApplication::translate("MainWindow", "Settings", 0));
        pushButton->setText(QApplication::translate("MainWindow", "Draw", 0));
        label_2->setText(QApplication::translate("MainWindow", "N_MAX", 0));
        upButton->setText(QApplication::translate("MainWindow", "Up", 0));
        downButton->setText(QApplication::translate("MainWindow", "Down", 0));
        rightButton->setText(QApplication::translate("MainWindow", "Right", 0));
        leftButton->setText(QApplication::translate("MainWindow", "Left", 0));
        label_3->setText(QApplication::translate("MainWindow", "Re", 0));
        label_4->setText(QApplication::translate("MainWindow", "Im", 0));
        ZoomPlus->setText(QApplication::translate("MainWindow", "Zoom +", 0));
        ZoomMinus->setText(QApplication::translate("MainWindow", "Zoom -", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
