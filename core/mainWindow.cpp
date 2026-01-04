#include "mainWindow.h"

mainWindow::mainWindow(QWidget* parent) : QWidget(parent)
{
	placesPtr = new places(this);
	phone = new PhoneUI(this);
	
	auto* mainLayout = new QVBoxLayout(this);
	mainLayout->addWidget(placesPtr, 1);

	mainLayout->setContentsMargins(0, 0, 0, 0);
	setLayout(mainLayout);
	setMinimumSize(800, 450);
	
	


	
}

void mainWindow::resizeEvent(QResizeEvent* event)
{
	phone->move(width() * 0.79, height() * 0.38);
	phone->setFixedSize(width() * 0.20, height() * 0.60);

	QWidget::resizeEvent(event);
}


