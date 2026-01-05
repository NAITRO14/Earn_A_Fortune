#include "PhoneUI.h"

PhoneUI::PhoneUI(QWidget* parent, QPushButton* callBut) : QWidget(parent)
{
	if (!initialize_sounds()) exit(1);


	black_frame = new QFrame(this);
	black_frame->setStyleSheet("QFrame{background-color: black; border-radius: 15px;}");
	
	UIPicture = new QLabel(this);
	UIPicture->setPixmap(QPixmap("./phone.png"));
	UIPicture->setScaledContents(true);

	button = new QPushButton(this);
	button->setStyleSheet("QPushButton{border:none;}");

	connect(button, &QPushButton::clicked, this, [=]()
		{
			hide();
			callBut->show();
			make_a_sound();
		});

	auto* layout = new QVBoxLayout(); //вниз
	layout->setContentsMargins(0, 0, 0, 0);
	layout->addWidget(black_frame);



	setLayout(layout);
	
}

bool PhoneUI::initialize_sounds()
{
	getPhone = Mix_LoadWAV("./sounds/getPhone.wav");
	if (!getPhone) {
		printf("Не загрузился getPhone.wav: %s\n", Mix_GetError());
		return false;
	}
	return true;
}

void PhoneUI::make_a_sound()
{
	if (getPhone)
	{
		Mix_PlayChannel(-1, getPhone, 0);
	}
	else
	{
		cerr << "Звук не найден! Ошибка!" << endl;
		exit(1);
	}
}

void PhoneUI::resizeEvent(QResizeEvent* event)
{
	black_frame->setFixedSize(width(), height());
	UIPicture->move(width() * 0.1, height() * 0.01);
	UIPicture->setFixedSize(width() * 0.8, height() * 0.98);

	button->move(width() * 0.4, height() * 0.925);
	button->setFixedSize(width() * 0.2, height() * 0.7);

	QWidget::resizeEvent(event);
}


