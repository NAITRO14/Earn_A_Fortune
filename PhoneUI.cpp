#include "PhoneUI.h"

PhoneUI::PhoneUI(QWidget* parent) : QWidget(parent)
{
	black_frame = new QFrame(this);
	black_frame->setStyleSheet("QFrame{background-color: black; border-radius: 15px;}");
	
	screen = new QFrame(this);
	screen->setStyleSheet("QFrame{background-color: white;}");

	auto* layout = new QVBoxLayout(); //вниз
	layout->setContentsMargins(0, 0, 0, 0);
	layout->addWidget(black_frame);


	setLayout(layout);
	
}

void PhoneUI::resizeEvent(QResizeEvent* event)
{
	black_frame->setFixedSize(width(), height());

	screen->move(width() * 0.10, height() * 0.10);
	screen->setFixedSize(width() * 0.80, height() * 0.80);

	QWidget::resizeEvent(event);
}
