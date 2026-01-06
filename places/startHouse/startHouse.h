#pragma once
#include "core/QtIncludes.h"
#include "places/startHouse/rooms/hallway.h"
#include "places/startHouse/rooms/bedroom.h"
#include "places/startHouse/rooms/livingroom.h"
#include "places/startHouse/rooms/restroom.h"

class startHouse : public QWidget
{
	Q_OBJECT
public:
	startHouse(QWidget* parent);
	QStackedWidget* getRooms();

private:
	QStackedWidget* rooms;	
};


