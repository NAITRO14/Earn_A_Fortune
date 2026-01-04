#include "PhoneUI.h"

PhoneUI::PhoneUI(QWidget* parent) : QWidget(parent)
{
	z = new QFrame(this);
	z->setStyleSheet("QFrame{background-color: magenta}");
	

	auto* l1 = new QVBoxLayout(); //вниз
	l1->addWidget(z);

	setLayout(l1);
	
}

void PhoneUI::resizeEvent(QResizeEvent* event)
{
	z->setFixedSize(width(), height());

	QWidget::resizeEvent(event);
}
