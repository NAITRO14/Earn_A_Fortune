#pragma once
#include "core/QtIncludes.h"
#include "places/startHouse/rooms/hallway.h"
#include "places/startHouse/rooms/bedroom.h"
#include "places/startHouse/rooms/stHouse_room2_near_the_table.h"

class startHouse : public QWidget
{
	Q_OBJECT
public:
	startHouse(QWidget* parent);
private:
	QStackedWidget* rooms;

	QVector<QPushButton*> firstRoomBtns = {
		new QPushButton(this),
	};

	QVector<QPushButton*> secondRoomBtns = {
		new QPushButton(this),
		new QPushButton(this),
	};

	QVector<QPushButton*> secondRoomNearTableBtns = {
		new QPushButton(this),
	};

	void fromSecondToFirstRoom();
	void fromFirstToSecondRoom();
	void toTableInSndRoom();
	void outTableInSndRoom();

	void configureBtns();
};


