#include "places/places.h"

places::places(QWidget* parent) : QWidget(parent)
{
	placesSt = new QStackedWidget(this);

	//МЕСТА
	auto* stHouse = new startHouse(placesSt);

	//ПОДКОЮЧЕНИЯ
	placesSt->addWidget(stHouse);
	roomManager::getObject().setCurRooms(stHouse->getRooms());

	//НАСТРОЙКА
	setAutoFillBackground(true);

	auto* layout = new QVBoxLayout(this);
	layout->addWidget(placesSt, 1);
	layout->setContentsMargins(0, 0, 0, 0);

	setLayout(layout);
}
