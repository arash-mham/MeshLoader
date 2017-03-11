#pragma once
#include <QtGui\qwidget>
#include<Qt\qslider.h>
class QSlider;
class QLabel;
class CustomedSlider:public QWidget
{
	Q_OBJECT
	QSlider* slider;
	private slots:
		void sliderValueChanged();

	signals:
		void valueChanged(int newValue);
public:
	CustomedSlider();
	~CustomedSlider();
	float value() const;
	void setValue(int newValue);
};

