#include "stHouse_room2_near_the_table.h"

stHouse_room2_near_the_table::stHouse_room2_near_the_table(QWidget* parent) : QWidget(parent)
{
	QLabel* label = new QLabel(this);
	label->setPixmap(QPixmap("./locations/startHouse_room2_nearTheTable.png"));
	label->setScaledContents(true);

	QVBoxLayout* layout = new QVBoxLayout(this);
	layout->addWidget(label);
	layout->setContentsMargins(0, 0, 0, 0);
	setLayout(layout);
}
