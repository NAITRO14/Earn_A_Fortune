#pragma once
#include "QtIncludes.h"
#include "stHouse_room1.h"
#include "stHouse_room2.h"

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

	void fromSecondToFirstRoom();
	void fromFirstToSecondRoom();

	void configureBtns();
};


