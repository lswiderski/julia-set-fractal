#ifndef OPENGLWINDOW_H
#define OPENGLWINDOW_H

#include <QDialog>

namespace Ui {
class OpenGLWindow;
}

class OpenGLWindow : public QDialog
{
    Q_OBJECT

public:
    explicit OpenGLWindow(QWidget *parent = 0);
    ~OpenGLWindow();

private:
    Ui::OpenGLWindow *ui;
};

#endif // OPENGLWINDOW_H
