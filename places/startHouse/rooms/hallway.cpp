#include "hallway.h"

void hallway::resizeEvent(QResizeEvent* event) {
	// Пересчитываем позицию кнопки
	toKitchen->move(width() * 0.07, height() * 0.03);
	toKitchen->setFixedSize(width() * 0.17, height() * 0.97);

	toBedroom->move(width() * 0.38, height() * 0.25);
	toBedroom->setFixedSize(width() * 0.05, height() * 0.32);

	QWidget::resizeEvent(event);
}


hallway::hallway(QWidget* parent)
{
	//ФОН
	QLabel* label = new QLabel(this);
	label->setPixmap(QPixmap("./locations/houses/startHouse/hallway.jpg"));
	label->setScaledContents(true);

	QVBoxLayout* layout = new QVBoxLayout(this);
	layout->addWidget(label, 1);
	layout->setContentsMargins(0, 0, 0, 0);

	setLayout(layout);

	//КНОПКИ
	toKitchen = new QPushButton(this);


	toBedroom = new QPushButton(this);
	toBedroom->setStyleSheet("QPushButton { border: none; }");

	//НАСТРЙОКА

	//в спальню
	toBedroom->setToolTip("В спальню");
	connect(toBedroom, &QPushButton::clicked, this, [=]() {
		auto* rooms = (QStackedWidget*)parent;
		rooms->setCurrentIndex(1);
		

		}
	);


}
