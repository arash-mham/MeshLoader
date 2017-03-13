#include "Widget.h"
#include<Windows.h>
#include<QtGui\QVBoxLayout>
#include<QtGui\Qhboxlayout>
#include"GLWindow.h"
#include<Qt\qslider.h>
#include"CustomedSlider.h"
using namespace std;
class QSlider;


Widget::Widget()
{
	QVBoxLayout* mainLayout;
	setLayout(mainLayout = new QVBoxLayout);
	QVBoxLayout* controlsLayout;
	mainLayout->addLayout(controlsLayout=new QVBoxLayout);
	mainLayout->addWidget(glWindow=new GLWindow);
	QHBoxLayout* slidersLayout;
	controlsLayout->addLayout(slidersLayout = new QHBoxLayout);
	slidersLayout->addWidget(slider=new CustomedSlider);
	connect(slider, SIGNAL(valueChanged(int)), this, SLOT(sliderValueChanged()));
	//slidersLayout->addWidget(slider2 = new CustomedSlider);
	//connect(slider2, SIGNAL(valueChanged(int)), this, SLOT(sliderValueChanged2()));
	
}


Widget::~Widget()
{
}
void Widget::sliderValueChanged()
{
	int x=slider->value();
	glWindow->changeColor(1.0f+(float)(x/5.0f));
	glWindow->repaint();
	
}
void Widget::sliderValueChanged2()
{
	/*int x;
	x = slider2->value();
	glWindow->cameraMoveSlider();
	glWindow->repaint();*/

}