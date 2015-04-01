/********************************************************************************
** Form generated from reading UI file 'openglwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPENGLWINDOW_H
#define UI_OPENGLWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QOpenGLWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_OpenGLWindow
{
public:
    QVBoxLayout *verticalLayout;
    QOpenGLWidget *openGLWidget;

    void setupUi(QDialog *OpenGLWindow)
    {
        if (OpenGLWindow->objectName().isEmpty())
            OpenGLWindow->setObjectName(QStringLiteral("OpenGLWindow"));
        OpenGLWindow->resize(359, 238);
        OpenGLWindow->setMinimumSize(QSize(100, 100));
        verticalLayout = new QVBoxLayout(OpenGLWindow);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        openGLWidget = new QOpenGLWidget(OpenGLWindow);
        openGLWidget->setObjectName(QStringLiteral("openGLWidget"));

        verticalLayout->addWidget(openGLWidget);


        retranslateUi(OpenGLWindow);

        QMetaObject::connectSlotsByName(OpenGLWindow);
    } // setupUi

    void retranslateUi(QDialog *OpenGLWindow)
    {
        OpenGLWindow->setWindowTitle(QApplication::translate("OpenGLWindow", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class OpenGLWindow: public Ui_OpenGLWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPENGLWINDOW_H
