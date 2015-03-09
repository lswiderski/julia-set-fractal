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
#include <QtWidgets/QCheckBox>
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
    QHBoxLayout *horizontalLayout_5;
    QGroupBox *settingsBox;
    QGridLayout *gridLayout;
    QPushButton *pushButton;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QLineEdit *ReEdit;
    QLabel *label_4;
    QLineEdit *ImEdit;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLineEdit *N_MAXEdit;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *ZoomPlus;
    QPushButton *ZoomMinus;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *widthEdit;
    QLabel *label_5;
    QLineEdit *heightEdit;
    QPushButton *resetButton;
    QGridLayout *gridLayout_5;
    QPushButton *upButton;
    QPushButton *downButton;
    QPushButton *rightButton;
    QPushButton *leftButton;
    QHBoxLayout *horizontalLayout_6;
    QCheckBox *SSEcheckBox;
    QLabel *TimeLabel;
    QGridLayout *gridLayout_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setWindowModality(Qt::WindowModal);
        MainWindow->setEnabled(true);
        MainWindow->resize(723, 617);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_3 = new QGridLayout(centralWidget);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setSizeConstraint(QLayout::SetNoConstraint);
        settingsBox = new QGroupBox(centralWidget);
        settingsBox->setObjectName(QStringLiteral("settingsBox"));
        sizePolicy.setHeightForWidth(settingsBox->sizePolicy().hasHeightForWidth());
        settingsBox->setSizePolicy(sizePolicy);
        settingsBox->setMaximumSize(QSize(180, 2000));
        settingsBox->setLayoutDirection(Qt::LeftToRight);
        settingsBox->setAutoFillBackground(true);
        settingsBox->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        settingsBox->setFlat(false);
        settingsBox->setCheckable(false);
        gridLayout = new QGridLayout(settingsBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        pushButton = new QPushButton(settingsBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setLayoutDirection(Qt::LeftToRight);

        gridLayout->addWidget(pushButton, 7, 0, 1, 1);

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


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayout_3->setContentsMargins(-1, -1, 70, -1);
        label_2 = new QLabel(settingsBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);
        label_2->setMaximumSize(QSize(50, 16777215));
        label_2->setLayoutDirection(Qt::LeftToRight);
        label_2->setAutoFillBackground(false);
        label_2->setFrameShape(QFrame::NoFrame);
        label_2->setFrameShadow(QFrame::Plain);
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(label_2);

        N_MAXEdit = new QLineEdit(settingsBox);
        N_MAXEdit->setObjectName(QStringLiteral("N_MAXEdit"));
        N_MAXEdit->setMaximumSize(QSize(40, 16777215));

        horizontalLayout_3->addWidget(N_MAXEdit);


        gridLayout->addLayout(horizontalLayout_3, 1, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setSizeConstraint(QLayout::SetFixedSize);
        ZoomPlus = new QPushButton(settingsBox);
        ZoomPlus->setObjectName(QStringLiteral("ZoomPlus"));

        horizontalLayout_4->addWidget(ZoomPlus);

        ZoomMinus = new QPushButton(settingsBox);
        ZoomMinus->setObjectName(QStringLiteral("ZoomMinus"));

        horizontalLayout_4->addWidget(ZoomMinus);


        gridLayout->addLayout(horizontalLayout_4, 6, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label = new QLabel(settingsBox);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);

        widthEdit = new QLineEdit(settingsBox);
        widthEdit->setObjectName(QStringLiteral("widthEdit"));

        horizontalLayout_2->addWidget(widthEdit);

        label_5 = new QLabel(settingsBox);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_2->addWidget(label_5);

        heightEdit = new QLineEdit(settingsBox);
        heightEdit->setObjectName(QStringLiteral("heightEdit"));

        horizontalLayout_2->addWidget(heightEdit);


        gridLayout->addLayout(horizontalLayout_2, 2, 0, 1, 1);

        resetButton = new QPushButton(settingsBox);
        resetButton->setObjectName(QStringLiteral("resetButton"));
        resetButton->setCursor(QCursor(Qt::ArrowCursor));

        gridLayout->addWidget(resetButton, 8, 0, 1, 1);

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


        gridLayout->addLayout(gridLayout_5, 5, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setSizeConstraint(QLayout::SetFixedSize);
        SSEcheckBox = new QCheckBox(settingsBox);
        SSEcheckBox->setObjectName(QStringLiteral("SSEcheckBox"));
        SSEcheckBox->setMaximumSize(QSize(16777215, 20));

        horizontalLayout_6->addWidget(SSEcheckBox);


        gridLayout->addLayout(horizontalLayout_6, 3, 0, 1, 1);

        TimeLabel = new QLabel(settingsBox);
        TimeLabel->setObjectName(QStringLiteral("TimeLabel"));
        TimeLabel->setMaximumSize(QSize(16777215, 20));

        gridLayout->addWidget(TimeLabel, 4, 0, 1, 1);


        horizontalLayout_5->addWidget(settingsBox);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        scrollArea = new QScrollArea(centralWidget);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QStringLiteral("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 513, 540));
        scrollArea->setWidget(scrollAreaWidgetContents_2);

        gridLayout_2->addWidget(scrollArea, 4, 2, 1, 1);


        horizontalLayout_5->addLayout(gridLayout_2);


        gridLayout_3->addLayout(horizontalLayout_5, 0, 1, 1, 1);

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
        label_3->setText(QApplication::translate("MainWindow", "Re", 0));
        label_4->setText(QApplication::translate("MainWindow", "Im", 0));
        label_2->setText(QApplication::translate("MainWindow", "N_MAX", 0));
        ZoomPlus->setText(QApplication::translate("MainWindow", "Zoom +", 0));
        ZoomMinus->setText(QApplication::translate("MainWindow", "Zoom -", 0));
        label->setText(QApplication::translate("MainWindow", "width", 0));
        label_5->setText(QApplication::translate("MainWindow", "height", 0));
        resetButton->setText(QApplication::translate("MainWindow", "Reset", 0));
        upButton->setText(QApplication::translate("MainWindow", "Up", 0));
        downButton->setText(QApplication::translate("MainWindow", "Down", 0));
        rightButton->setText(QApplication::translate("MainWindow", "Right", 0));
        leftButton->setText(QApplication::translate("MainWindow", "Left", 0));
        SSEcheckBox->setText(QApplication::translate("MainWindow", "Hardware Acceleration", 0));
        TimeLabel->setText(QApplication::translate("MainWindow", "Generated in:", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
