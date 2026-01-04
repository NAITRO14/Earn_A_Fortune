#include "bedroom.h"
bedroom::bedroom(QWidget* parent)
{
	QLabel* label = new QLabel(this);
	label->setPixmap(QPixmap("./locations/houses/startHouse/bedroom.jpg"));
	label->setScaledContents(true);

	QVBoxLayout* layout = new QVBoxLayout(this);
	layout->addWidget(label);
	layout->setContentsMargins(0, 0, 0, 0);
	setLayout(layout);

	//КНОПКИ
	toHallway = new QPushButton(this);
	toHallway->setStyleSheet("QPushButton{background-color: yellow}");

	//НАСТРОЙКА
	connect(toHallway, &QPushButton::clicked, this, [=]()
		{
			auto* rooms = (QStackedWidget*)parent;
			rooms->setCurrentIndex(0);
		});

}

void bedroom::resizeEvent(QResizeEvent* event)
{
	toHallway->move(width() * 0.15, height() * 0.90);
	toHallway->setFixedSize(width() * 0.70, height() * 0.10);

	QWidget::resizeEvent(event);
}
