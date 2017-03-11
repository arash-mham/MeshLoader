#pragma once
#include<Qt\qapplication.h>
#include"GLWindow.h"

class CustomedSlider;
class Widget:public QWidget
{
	CustomedSlider* slider;
	CustomedSlider* slider2;
	GLWindow* glWindow;
	Q_OBJECT
		private slots:
		void sliderValueChanged();
		void sliderValueChanged2();

public:
	Widget();
	~Widget();
};

