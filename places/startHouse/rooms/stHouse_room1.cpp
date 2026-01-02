#include "stHouse_room1.h"

stHouse_room1::stHouse_room1(QWidget* parent)
{
	QLabel* label = new QLabel(this);
	label->setPixmap(QPixmap("./locations/first_room.png"));
	label->setScaledContents(true);

	QVBoxLayout* layout = new QVBoxLayout(this);
	layout->addWidget(label);
	layout->setContentsMargins(0, 0, 0, 0);
	setLayout(layout);

}
