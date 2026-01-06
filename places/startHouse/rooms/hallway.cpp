#include "hallway.h"

hallway::hallway(QWidget* parent)
{
	//ФОН
	QLabel* label = new QLabel(this);
	label->setPixmap(QPixmap("./locations/houses/startHouse/hallway.jpg"));
	label->setScaledContents(true);

	QVBoxLayout* layout = new QVBoxLayout(this);
	layout->addWidget(label, 1);
	layout->setContentsMargins(0, 0, 0, 0);

	setLayout(layout);

	//КНОПКИ
	toKitchen = new QPushButton(this);

	toBedroom = new QPushButton(this);
	toBedroom->setStyleSheet("QPushButton { border: none; }");

	toLivingroom = new QPushButton(this);
	toLivingroom->setStyleSheet("QPushButton { border: none; }");

	toRestroom = new QPushButton(this);
	toRestroom->setStyleSheet("QPushButton { border: none; }");


	//НАСТРЙОКА

	//в спальню
	toBedroom->setToolTip("В спальню");
	connect(toBedroom, &QPushButton::clicked, this, [=]() {
		roomManager::getObject().switch_room(1);
		}
	);

	toLivingroom->setToolTip("В гостинную");
	connect(toLivingroom, &QPushButton::clicked, this, [=]() {
		roomManager::getObject().switch_room(2);
		}
	);

	toRestroom->setToolTip("В гостинную");
	connect(toRestroom, &QPushButton::clicked, this, [=]() {
		roomManager::getObject().switch_room(3);
		}
	);


}

void hallway::resizeEvent(QResizeEvent* event) {
	// Пересчитываем позицию кнопки
	toKitchen->move(width() * 0.07, height() * 0.03);
	toKitchen->setFixedSize(width() * 0.17, height() * 0.97);

	toBedroom->move(width() * 0.38, height() * 0.25);
	toBedroom->setFixedSize(width() * 0.05, height() * 0.32);

	toLivingroom->move(width() * 0.9, height() * 0.01);
	toLivingroom->setFixedSize(width() * 0.1, height() * 0.97);

	toRestroom->move(width() * 0.76, height() * 0.24);
	toRestroom->setFixedSize(width() * 0.05, height() * 0.5);

	QWidget::resizeEvent(event);
}
