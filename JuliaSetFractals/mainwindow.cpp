#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //set default values
    horizontal_shift=0;
    vertical_shift=0;
    ui->ImEdit->setText("0.19");
    ui->ReEdit->setText("-0.73");
    ui->N_MAXEdit->setText("200");

    //connect events
   connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(Draw()));
   connect(ui->downButton, SIGNAL(clicked()), this, SLOT(MoveDown()));
   connect(ui->upButton, SIGNAL(clicked()), this, SLOT(MoveUp()));
   connect(ui->leftButton, SIGNAL(clicked()), this, SLOT(MoveLeft()));
   connect(ui->rightButton, SIGNAL(clicked()), this, SLOT(MoveRight()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::MoveDown()
{
    vertical_shift-=50;
    Draw();
}
void MainWindow::MoveUp()
{
    vertical_shift+=50;
    Draw();
}
void MainWindow::MoveLeft()
{
    horizontal_shift+=50;
    Draw();
}
void MainWindow::MoveRight()
{
    horizontal_shift-=50;
    Draw();
}

void MainWindow::Draw()
{

    //prepare to draw
    //read values from user
    int width =400;
    int height =400;

    float user_Im,user_Re;
    int n_max;

    try{
        n_max = ui->N_MAXEdit->text().toInt();
    }
     catch(std::exception &e){
          n_max = 200;
     }
     try
     {
        user_Re = ui->ReEdit->text().toFloat();
     }
     catch(std::exception &e)
     {
          user_Re = -0.73f;
     }
    try{
      user_Im = ui->ImEdit->text().toFloat();
    }
    catch(std::exception &e)
    {
         user_Im = 0.19f;
    }

    std::complex<float> c = std::complex<float>(user_Re,user_Im);

    //generate fractal and set it as Image
    ui->imagelabel->setPixmap(QPixmap::fromImage(GenerateJulia(c,n_max,width,height)));
}

QImage MainWindow::GenerateJulia(std::complex<float> &c, int n_max, int width, int height)
{
    QImage fractal(width,height,QImage::Format_RGB32);
    QRgb value;
    std::complex<float> nz;
    for(int ui = 0 ; ui<width ; ui++)
    {
        for(int vi = 0 ; vi<height ; vi++)
        {
            nz = std::complex<float>(3*(((float)(ui+horizontal_shift)/(float)width) -0.5f),3*(((float)(vi+vertical_shift)/(float)height)-0.5f));

            int n=0;

            for(n=0;n<n_max;n++)
            {
                nz = (nz*nz) + c;
                if(std::abs(nz)>4)break;
            }
            value = QColor::fromHsv(n%256,255,255*(n<n_max)).rgb();

            fractal.setPixel(ui,vi,value);
        }
    }
    return fractal;
}
