#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <complex>
#include <QPushButton>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
private slots:
    void Draw();
private:
    Ui::MainWindow *ui;
    QPushButton *button;
    void Draw(int _n_max, float _re, float _im);

    QAction *drawAction;
    int N_MAX;
    float RE;
    float IM;
    std::complex<float> c;
    std::complex<float> nz;
};

#endif // MAINWINDOW_H
