#include "places/places.h"

places::places(QWidget* parent) : QWidget(parent)
{
	plasesSt = new QStackedWidget(this);
	plasesSt->resize(800, 600);

	//ÌÅÑÒÀ
	auto* stHouse = new startHouse(plasesSt);

	//ÏÎÄÊÎŞ×ÅÍÈß
	plasesSt->addWidget(stHouse);

}
