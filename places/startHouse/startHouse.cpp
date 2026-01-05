#include "startHouse.h"

startHouse::startHouse(QWidget* parent) : QWidget(parent)
{
	rooms = new QStackedWidget(this);

	//КОМНАТЫ

	auto* hallwayPtr = new hallway(rooms);
	auto* bedroomPrt = new bedroom(rooms);

	//НАТСРЙОКА
	rooms->addWidget(hallwayPtr);
	rooms->addWidget(bedroomPrt);

	QVBoxLayout* layout = new QVBoxLayout(this);
	layout->addWidget(rooms);
	layout->setContentsMargins(0, 0, 0, 0);
	setLayout(layout);

	
}

QStackedWidget* startHouse::getRooms()
{
	return rooms;
}







