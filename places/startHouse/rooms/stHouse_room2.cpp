#include "stHouse_room2.h"
stHouse_room2::stHouse_room2(QWidget* parent)
{
	QLabel* label = new QLabel(this);
	label->setPixmap(QPixmap("./locations/second_room.png"));
	label->setScaledContents(true);

	QVBoxLayout* layout = new QVBoxLayout(this);
	layout->addWidget(label);
	layout->setContentsMargins(0, 0, 0, 0);
	setLayout(layout);

}
