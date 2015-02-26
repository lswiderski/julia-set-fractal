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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *verticalLayoutWidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *ReEdit;
    QLabel *label_4;
    QLineEdit *ImEdit;
    QLabel *label_2;
    QLineEdit *N_MAXEdit;
    QPushButton *pushButton;
    QGridLayout *gridLayout_2;
    QPushButton *leftButton;
    QLabel *imagelabel;
    QPushButton *upButton;
    QPushButton *downButton;
    QPushButton *rightButton;
    QPushButton *ZoomPlus;
    QPushButton *ZoomMinus;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(634, 547);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(11, 8, 601, 481));
        gridLayout = new QGridLayout(verticalLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setVerticalSpacing(6);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_2->addWidget(label_3);

        ReEdit = new QLineEdit(verticalLayoutWidget);
        ReEdit->setObjectName(QStringLiteral("ReEdit"));

        horizontalLayout_2->addWidget(ReEdit);

        label_4 = new QLabel(verticalLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_2->addWidget(label_4);

        ImEdit = new QLineEdit(verticalLayoutWidget);
        ImEdit->setObjectName(QStringLiteral("ImEdit"));

        horizontalLayout_2->addWidget(ImEdit);

        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        N_MAXEdit = new QLineEdit(verticalLayoutWidget);
        N_MAXEdit->setObjectName(QStringLiteral("N_MAXEdit"));

        horizontalLayout_2->addWidget(N_MAXEdit, 0, Qt::AlignLeft);


        gridLayout->addLayout(horizontalLayout_2, 3, 0, 1, 1);

        pushButton = new QPushButton(verticalLayoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setLayoutDirection(Qt::LeftToRight);

        gridLayout->addWidget(pushButton, 4, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        leftButton = new QPushButton(verticalLayoutWidget);
        leftButton->setObjectName(QStringLiteral("leftButton"));

        gridLayout_2->addWidget(leftButton, 3, 0, 1, 1);

        imagelabel = new QLabel(verticalLayoutWidget);
        imagelabel->setObjectName(QStringLiteral("imagelabel"));
        imagelabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout_2->addWidget(imagelabel, 3, 2, 1, 1);

        upButton = new QPushButton(verticalLayoutWidget);
        upButton->setObjectName(QStringLiteral("upButton"));

        gridLayout_2->addWidget(upButton, 2, 2, 1, 1);

        downButton = new QPushButton(verticalLayoutWidget);
        downButton->setObjectName(QStringLiteral("downButton"));

        gridLayout_2->addWidget(downButton, 4, 2, 1, 1);

        rightButton = new QPushButton(verticalLayoutWidget);
        rightButton->setObjectName(QStringLiteral("rightButton"));

        gridLayout_2->addWidget(rightButton, 3, 3, 1, 1);

        ZoomPlus = new QPushButton(verticalLayoutWidget);
        ZoomPlus->setObjectName(QStringLiteral("ZoomPlus"));

        gridLayout_2->addWidget(ZoomPlus, 5, 0, 1, 1);

        ZoomMinus = new QPushButton(verticalLayoutWidget);
        ZoomMinus->setObjectName(QStringLiteral("ZoomMinus"));

        gridLayout_2->addWidget(ZoomMinus, 5, 3, 1, 1);


        gridLayout->addLayout(gridLayout_2, 1, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 634, 21));
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
        label_3->setText(QApplication::translate("MainWindow", "Re", 0));
        label_4->setText(QApplication::translate("MainWindow", "Im", 0));
        label_2->setText(QApplication::translate("MainWindow", "N_MAX", 0));
        pushButton->setText(QApplication::translate("MainWindow", "Draw", 0));
        leftButton->setText(QApplication::translate("MainWindow", "Left", 0));
        imagelabel->setText(QApplication::translate("MainWindow", "Julia", 0));
        upButton->setText(QApplication::translate("MainWindow", "Up", 0));
        downButton->setText(QApplication::translate("MainWindow", "Down", 0));
        rightButton->setText(QApplication::translate("MainWindow", "Right", 0));
        ZoomPlus->setText(QApplication::translate("MainWindow", "Zoom +", 0));
        ZoomMinus->setText(QApplication::translate("MainWindow", "Zoom -", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
