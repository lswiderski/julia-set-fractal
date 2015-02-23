#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    button = ui->pushButton;
    connect(button, SIGNAL(clicked()), this, SLOT(Draw()));
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::Draw(int _n_max, float _re, float _im)
{

}
void MainWindow::Draw()
{
ui->ReEdit->text()  = "test";
}
