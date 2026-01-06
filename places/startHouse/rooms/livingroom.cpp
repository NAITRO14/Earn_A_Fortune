#include "livingroom.h"

livingroom::livingroom(QWidget* parent) : QWidget(parent)
{
	QLabel* label = new QLabel(this);
	label->setPixmap(QPixmap("./locations/houses/startHouse/livingroom.jpg"));
	label->setScaledContents(true);

	QVBoxLayout* layout = new QVBoxLayout(this);
	layout->addWidget(label);
	layout->setContentsMargins(0, 0, 0, 0);
	setLayout(layout);

	//КНОПКИ
	toHallway = new QPushButton(this);

	//НАСТРОЙКА
	toHallway->setToolTip("В коридор");
	toHallway->setStyleSheet("QPushButton { border: none; }");

	connect(toHallway, &QPushButton::clicked, this, [=]()
		{
			roomManager::getObject().switch_room(0);
		});
}

void livingroom::resizeEvent(QResizeEvent* event)
{
	toHallway->move(width() * 0.15, height() * 0.90);
	toHallway->setFixedSize(width() * 0.70, height() * 0.10);

	QWidget::resizeEvent(event);
}
