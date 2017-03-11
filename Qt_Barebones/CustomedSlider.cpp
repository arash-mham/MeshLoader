#include "CustomedSlider.h"
#include<QtGui\Qhboxlayout>

CustomedSlider::CustomedSlider()
{
	QLayout* layout;
	setLayout(layout = new QHBoxLayout);
	layout->addWidget(slider = new QSlider);
	slider->setOrientation(Qt::Horizontal);
	slider->setMinimum(0);
	slider->setMaximum(10);
	connect(slider, SIGNAL(valueChanged(int)),
		this, SLOT(sliderValueChanged()));
	setValue(0);
}


CustomedSlider::~CustomedSlider()
{
}
float CustomedSlider::value() const
{
	return slider->value();
}

void CustomedSlider::setValue(int newValue)
{
	slider->setValue(newValue);
}

void CustomedSlider::sliderValueChanged()
{
	emit valueChanged(value());
}