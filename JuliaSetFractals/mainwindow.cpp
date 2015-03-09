#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <time.h>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    //set default values
    horizontal_shift=0;
    vertical_shift=0;
    zoom=1.0f;
    ui->ImEdit->setText("0.19");
    ui->ReEdit->setText("-0.73");
    ui->N_MAXEdit->setText("200");
    ui->heightEdit->setText("400");
    ui->widthEdit->setText("400");
    ui->horizontalLayout_3->setAlignment(Qt::AlignLeft);
    width = 400;
    height = 400;

    //connect events
   connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(DrawWithUserSize()));
   connect(ui->resetButton, SIGNAL(clicked()), this, SLOT(Reset()));
   connect(ui->downButton, SIGNAL(clicked()), this, SLOT(MoveDown()));
   connect(ui->upButton, SIGNAL(clicked()), this, SLOT(MoveUp()));
   connect(ui->leftButton, SIGNAL(clicked()), this, SLOT(MoveLeft()));
   connect(ui->rightButton, SIGNAL(clicked()), this, SLOT(MoveRight()));
   connect(ui->ZoomPlus, SIGNAL(clicked()), this, SLOT(ZoomPlus()));
   connect(ui->ZoomMinus, SIGNAL(clicked()), this, SLOT(ZoomMinus()));
}
void MainWindow::wheelEvent ( QWheelEvent * event )
    {
      //Add current step.
      //event->delta() can be negative or positive
     if(event->delta()/120 >0)
     {
         ZoomPlus();
     }
     else
     {
         ZoomMinus();
     }

    }
MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::Reset()
{
    horizontal_shift=0;
    vertical_shift=0;
    zoom=1.0f;
    width = 400;
    height = 400;
    Draw();
}
void MainWindow::MoveDown()
{
    vertical_shift+=1;
    Draw();
}
void MainWindow::MoveUp()
{
    vertical_shift-=1;
    Draw();
}
void MainWindow::MoveLeft()
{
    horizontal_shift-=1;
    Draw();
}
void MainWindow::MoveRight()
{
    horizontal_shift+=1;
    Draw();
}
void MainWindow::ZoomPlus()
{
    zoom-=0.1f;
    //horizontal_shift+=(50*zoom);
    //vertical_shift+=(50*zoom);
    Draw();
}
void MainWindow::ZoomMinus()
{
    zoom+=0.1f;
    Draw();
}

void MainWindow::DrawWithUserSize()
{

    try{
      width = ui->widthEdit->text().toInt();
    }
    catch(std::exception &e)
    {
         width = 400;
    }

    try{
      height = ui->heightEdit->text().toInt();
    }
    catch(std::exception &e)
    {
         height = 400;
    }
    Draw();


}
void MainWindow::Draw()
{
    //prepare to draw
    //read values from user


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
    QLabel *imageLabel = new QLabel;
        clock_t tStart = clock();

        if(!ui->SSEcheckBox->isChecked())
        {
             imageLabel->setPixmap(QPixmap::fromImage(GenerateJulia(c,n_max,width,height)));
        }
        else
        {
            // with SSE FPU Julia
        }

     ui->TimeLabel->setText( "Generated in: "+QString::number((double)(clock() - tStart)/CLOCKS_PER_SEC)+"s");

    ui->scrollArea->setWidget(imageLabel);

}

void MainWindow::resizeEvent(QResizeEvent * event )
{
    QSize size = ui->scrollArea->size();
    if(size.width()>width)
    {
        width = size.width();
        height = size.height();
        MainWindow::Draw();
    }


}

QImage MainWindow::GenerateJulia(std::complex<float> &c, int n_max, int width, int height)
{
    width*=((1 -zoom)*4+1);
    height*=((1 -zoom)*4+1);
    QImage fractal(width,height,QImage::Format_RGB32);
    QRgb value;
    std::complex<float> nz;
    for(int ui = 0 ; ui<width ; ui++)
    {
        for(int vi = 0 ; vi<height ; vi++)
        {
            nz = std::complex<float>(3*(((float)(ui)/(float)width)*zoom -0.5f)+horizontal_shift,3*(((float)(vi)/(float)height)*zoom-0.5f)+vertical_shift);

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
