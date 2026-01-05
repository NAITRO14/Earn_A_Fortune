#include "PhoneUI.h"


PhoneUI::PhoneUI(QWidget* parent, QPushButton* callBut) : QWidget(parent)
{
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
			audioManager::getObject().play_getPhone();
		});

	auto* layout = new QVBoxLayout(); //вниз
	layout->setContentsMargins(0, 0, 0, 0);
	layout->addWidget(black_frame);



	setLayout(layout);
	
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


