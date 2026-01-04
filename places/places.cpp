#include "places/places.h"

places::places(QWidget* parent) : QWidget(parent)
{
	placesSt = new QStackedWidget(this);

	//ÌÅÑÒÀ
	auto* stHouse = new startHouse(placesSt);

	//ÏÎÄÊÎÞ×ÅÍÈß
	placesSt->addWidget(stHouse);

	//ÍÀÑÒÐÎÉÊÀ
	setAutoFillBackground(true);

	auto* layout = new QVBoxLayout(this);
	layout->addWidget(placesSt, 1);
	layout->setContentsMargins(0, 0, 0, 0);

	setLayout(layout);
}
