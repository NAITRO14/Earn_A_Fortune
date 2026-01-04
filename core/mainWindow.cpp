#include "mainWindow.h"

mainWindow::mainWindow(QWidget* parent) : QWidget(parent)
{
	auto* placesPtr = new places(this);

	//auto* phone = new PhoneUI(this);

	auto* mainLayout = new QVBoxLayout(this);
	//mainLayout->addWidget(phone, 0);
	mainLayout->addWidget(placesPtr, 0);


	mainLayout->setContentsMargins(0, 0, 0, 0);
	setLayout(mainLayout);
	setMinimumSize(1600, 900);
	
	
}


