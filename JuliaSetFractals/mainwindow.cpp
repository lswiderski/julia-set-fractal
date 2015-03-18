#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <time.h>
#include <intrin.h>
#include <stdlib.h>
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
			imageLabel->setPixmap(QPixmap::fromImage(GenerateJuliaSSE(user_Re, user_Im, n_max, width, height)));
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

QImage MainWindow::GenerateJuliaSSE(double cx, double cy, int n_max, int width, int height)
{
	width *= ((1 - zoom) * 4 + 1);
	height *= ((1 - zoom) * 4 + 1);
	QImage fractal(width, height, QImage::Format_RGB32);
	QRgb value;
	//std::complex<float> nz;

	height += height % 4;
	//uint32_t *buffer = new uint32_t[width*height];
	//drawMandelbrot(&fractal,buffer, width, height);
	float x2, y2;

		float zx[4], zy[4];
		
		std::vector<float> buffer;
	for (int ui = 0; ui<width; ui++)
	{
		for (int vi = 0; vi<height; vi+=4)
		{
			float result = 0;
			int until = 4;
			for (int z = 0; z <4; z++)
			{
				zx[z] = 3 * (((float)(ui+z) / (float)width)*zoom - 0.5f) + horizontal_shift;
				zy[z] = 3 * (((float)(vi+z) / (float)height)*zoom - 0.5f) + vertical_shift;
			}

			
	
	
			__m128 MZX = _mm_set_ps(zx[3],zx[2],zx[1],zx[0]);
			__m128 MZY = _mm_set_ps(zy[3], zy[2], zy[1], zy[0]);
			__m128 MCX = _mm_set_ps(cx,cx,cx,cx);
			__m128 MCY = _mm_set_ps(cy,cy,cy,cy);
			__m128 MRESULT = _mm_set_ps(result, result, result, result);
			__m128 MUNTIL = _mm_set_ps(4, 4, 4, 4);
			__asm{
				; init
				MOVAPS xmm0, MZX
				MOVAPS xmm1, MZY
				MOVAPS xmm4, MCX
				MOVAPS xmm5, MCY
				MOVAPS xmm6, MRESULT
				MOVAPS xmm7, MUNTIL
	
				MOVAPS xmm0, xmm4
					XORPS  xmm6, xmm6
					MOVAPS xmm1, xmm5
					mov ecx, n_max
				ILOOP :
				; xmm0 = zx             xmm1 = zy
					MOVAPS xmm2, xmm0
					MULPS  xmm0, xmm0
					MOVAPS xmm3, xmm1
					ADDPS  xmm1, xmm1
					; xmm0 = zx ^ 2           xmm1 = 2 * zy     xmm2 = zx           xmm3 = zy
					MULPS  xmm1, xmm2
					MOVAPS xmm2, xmm0
					MULPS  xmm3, xmm3
					; xmm0 = zx ^ 2           xmm1 = 2 * zy*zx    xmm2 = zx ^ 2         xmm3 = zy ^ 2
					ADDPS  xmm1, xmm5
					SUBPS  xmm0, xmm3
					ADDPS  xmm2, xmm3
					; xmm0 = zx ^ 2 - zy ^ 2    xmm1 = 2 * zy*zx + py   xmm2 = zx ^ 2 + zy ^ 2  xmm3 = zy ^ 2
					CMPLEPS xmm2, xmm7
					ADDPS   xmm0, xmm4
					MOVMSKPS eax, xmm2
					test eax, eax
					jz EXIT
					ANDPS   xmm2, xmm7; xmm6 += (xmm2 < 4.0) ? 4.0 : 0.0;
				ADDPS   xmm6, xmm2
					sub ecx, 1
					jnz ILOOP
				EXIT :
				MOVAPS MRESULT, xmm6
			}
			float fresult[4];
			_mm_store_ps(fresult, MRESULT);
			for(int z = 0; z <4; z++)
			{
				buffer.push_back(fresult[z]);
				//value = QColor::fromHsv((int)result % 256, 255, 255 * ((int)result<n_max)).rgb();

				//fractal.setPixel(ui, vi, value);
			}
			
		
		}
	}
	return fractal;
}
QImage MainWindow::GenerateJuliaDoubles(double cx, double cy, int n_max, int width, int height)
{
	width *= ((1 - zoom) * 4 + 1);
	height *= ((1 - zoom) * 4 + 1);
	QImage fractal(width, height, QImage::Format_RGB32);
	QRgb value;
	std::complex<float> nz;

	double x2, y2, zx, zy;
	for (int ui = 0; ui<width; ui++)
	{
		for (int vi = 0; vi<height; vi++)
		{
			zx = 3 * (((float)(ui) / (float)width)*zoom - 0.5f) + horizontal_shift;
			zy = 3 * (((float)(vi) / (float)height)*zoom - 0.5f) + vertical_shift;
			int n = 0;

			for (n = 0; n<n_max; n++)
			{
				x2 = zx*zx, y2 = zy*zy;
				if (x2 + y2 >4)
					break;
				zy = zx*zy * 2 + cy;
				zx = x2 - y2 + cx;

			}
			value = QColor::fromHsv(n % 256, 255, 255 * (n<n_max)).rgb();

			fractal.setPixel(ui, vi, value);
		}
	}
	return fractal;
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
void MainWindow::drawMandelbrot(QImage *fractal,uint32_t *buffer, int xres, int yres)
{
	__m128i *buffer4 = (__m128i*)buffer;
	const __m128 ixres = _mm_set1_ps(1.0f / (float)xres);
	const __m128 iyres = _mm_set1_ps(1.0f / (float)yres);
	QRgb value;
	for (int j = 0; j < yres; j++)
		for (int i = 0; i < xres; i += 4)
		{
			__m128  a, b;
			a = _mm_set_ps(i + 3, i + 2, i + 1, i + 0);
			a = _mm_mul_ps(a, ixres);
			a = _mm_mul_ps(a, _mm_set1_ps(3.00f));
			a = _mm_add_ps(a, _mm_set1_ps(-2.25f));

			b = _mm_set1_ps((float)j);
			b = _mm_mul_ps(b, iyres);
			b = _mm_mul_ps(b, _mm_set1_ps(-2.24f));
			b = _mm_add_ps(b, _mm_set1_ps(1.12f));

			_mm_store_si128(buffer4++, IterateMandelbrot(a, b));

			int *fresult = (int*)buffer4;
			for (int z = 0; z < 4; z++)
			{
				value = QColor::fromRgb(fresult[z], fresult[z]<<4, fresult[z]<<8).rgb();

				fractal->setPixel(i, j, value);
			}

		}
}
__m128i MainWindow::IterateMandelbrot(__m128 a, __m128 b)
{
	__m128  x, y, x2, y2, m2;
	__m128  co, ite;

	unsigned int i;

	const __m128 one = _mm_set1_ps(1.0f);
	const __m128 th = _mm_set1_ps(4.0f);

	x = _mm_setzero_ps();
	y = _mm_setzero_ps();
	x2 = _mm_setzero_ps();
	y2 = _mm_setzero_ps();
	co = _mm_setzero_ps();
	ite = _mm_setzero_ps();

	// iterate f(Z) = Z^2 + C,  Z0 = 0
	for (i = 0; i < 512; i++)
	{
		y = _mm_mul_ps(x, y);
		y = _mm_add_ps(_mm_add_ps(y, y), b);
		x = _mm_add_ps(_mm_sub_ps(x2, y2), a);

		x2 = _mm_mul_ps(x, x);
		y2 = _mm_mul_ps(y, y);

		m2 = _mm_add_ps(x2, y2);
		co = _mm_or_ps(co, _mm_cmpgt_ps(m2, th));


		ite = _mm_add_ps(ite, _mm_andnot_ps(co, one));
		if (_mm_movemask_ps(co) == 0x0f)
			i = 512;
	}

	// create color
	const __m128i bb = _mm_cvtps_epi32(ite);
	const __m128i gg = _mm_slli_si128(bb, 1);
	const __m128i rr = _mm_slli_si128(bb, 2);
	const __m128i color = _mm_or_si128(_mm_or_si128(rr, gg), bb);

	return(color);
}