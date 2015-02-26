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
    void MoveUp();
    void MoveDown();
    void MoveLeft();
    void MoveRight();
    void ZoomPlus();
    void ZoomMinus();
private:
    Ui::MainWindow *ui;
    QAction *drawAction;
    int N_MAX;
    float RE;
    float IM;
    int horizontal_shift;
    int vertical_shift;
    float zoom;
    QImage GenerateJulia(std::complex<float> &c, int n_max =200, int width=400, int height=400);
};

#endif // MAINWINDOW_H
