#include "mainWindow.h"

mainWindow::mainWindow(QWidget* parent) : QWidget(parent)
{
	//ВИДЖЕТЫ
	placesPtr = new places(this);
	PhoneButton = new QPushButton(this);
	phone = new PhoneUI(this, PhoneButton);

	//НАСТРОЙКА

	//СЛОЙ
	auto* mainLayout = new QVBoxLayout(this);
	mainLayout->addWidget(placesPtr, 1);
	mainLayout->setContentsMargins(0, 0, 0, 0);
	setLayout(mainLayout);
	setMinimumSize(800, 450);

	//ТЕЛЕФОН
	phone->hide();

	//КНОПКА ВЫЗОВА ТЕЛЕФОНА
	PhoneButton->setStyleSheet(
		"QPushButton{background-color: gray; "
		"border-radius: 10px; font-size: 20px;"
		"font-weight: bold; padding: 10px 20px 25px 20px;}"); /* верх/низ/лево/право */

	PhoneButton->setText("Телефон");
	connect(PhoneButton, &QPushButton::clicked, this, [=]()
		{

			phone->show();
			PhoneButton->hide();
			audioManager::getObject().play_getPhone();
		});

	
}

void mainWindow::resizeEvent(QResizeEvent* event)
{
	phone->move(width() * 0.79, height() * 0.38);
	phone->setFixedSize(width() * 0.20, height() * 0.60);

	PhoneButton->move(width() * 0.85, height() * 0.95);
	PhoneButton->setFixedSize(width() * 0.1, height() * 0.07);

	QWidget::resizeEvent(event);
}


