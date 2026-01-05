#include "startHouse.h"

startHouse::startHouse(QWidget* parent) : QWidget(parent)
{
	if (!initialize_sounds()) exit(1);

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

bool startHouse::initialize_sounds()
{
	goToAnothrRoom = Mix_LoadWAV("./sounds/goToAnotherRoom.wav");
	if (!goToAnothrRoom) {
		printf("Не загрузился goToAnothrRoom.wav: %s\n", Mix_GetError());
		return false;
	}
	return true;
}





