#include "PhoneUI.h"

PhoneUI::PhoneUI(QWidget* parent) : QWidget(parent)
{
	z = new QFrame(this);
	z->setStyleSheet("QFrame{background-color: black; border-radius: 15px;}");
	
	n = new QFrame(this);
	n->setStyleSheet("QFrame{background-color: white;}");

	auto* layout = new QVBoxLayout(); //вниз
	layout->setContentsMargins(0, 0, 0, 0);
	layout->addWidget(z);


	setLayout(layout);
	
}

void PhoneUI::resizeEvent(QResizeEvent* event)
{
	z->setFixedSize(width(), height());

	n->setFixedSize(width() * 0.80, height() * 0.80);
	n->move(width() * 0.10, height() * 0.10);

	QWidget::resizeEvent(event);
}
