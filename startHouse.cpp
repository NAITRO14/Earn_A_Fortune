#include "startHouse.h"

startHouse::startHouse(QWidget* parent) : QWidget(parent)
{
	rooms = new QStackedWidget(this);

	//КОМНАТЫ
	auto* first_room = new stHouse_room1(rooms);
	auto* second_room = new stHouse_room2(rooms);

	//НАТСРЙОКА
	rooms->addWidget(first_room);
	rooms->addWidget(second_room);

	QVBoxLayout* layout = new QVBoxLayout(this);
	layout->addWidget(rooms);
	layout->setContentsMargins(0, 0, 0, 0);
	setLayout(layout);

	configureBtns();


}

void startHouse::fromSecondToFirstRoom()
{
	rooms->setCurrentIndex(0);
	for (auto& btn : secondRoomBtns)
	{
		btn->hide();
	}
	for (auto& btn : firstRoomBtns)
	{
		btn->show();
	}
}

void startHouse::fromFirstToSecondRoom()
{
	rooms->setCurrentIndex(1);
	for (auto& btn : firstRoomBtns)
	{
		btn->hide();
	}

	for (auto& btn : secondRoomBtns)
	{
		btn->show();
	}
}

void startHouse::configureBtns()
{
	//СОЗДАТЬ И ПОДКЛЮЧИТЬ
	firstRoomBtns[0] = new QPushButton(this);
	connect(firstRoomBtns[0], &QPushButton::clicked, this, &startHouse::fromFirstToSecondRoom);
	firstRoomBtns[0]->setGeometry(298, 192, 104, 192);

	secondRoomBtns[0] = new QPushButton(this);
	connect(secondRoomBtns[0], &QPushButton::clicked, this, &startHouse::fromSecondToFirstRoom);
	secondRoomBtns[0]->setGeometry(192, 537, 416, 63);
	secondRoomBtns[0]->hide();

	/*secondRoomBtns[1] = new QPushButton(this);
	connect(secondRoomBtns[1], &QPushButton::clicked, this, &startHouse::fromSecondToFirstRoom);
	secondRoomBtns[1]->setGeometry(192, 537, 416, 63);
	secondRoomBtns[1]->setStyleSheet("QPushButton{background-color: green}");
	secondRoomBtns[1]->hide();*/



	//РАЗЛОЖИТЬ
	
}


