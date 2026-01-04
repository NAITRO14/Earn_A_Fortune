#include "PhoneUI.h"

PhoneUI::PhoneUI(QWidget* parent) : QWidget(parent)
{
	auto* z = new QFrame(this);
	z->setStyleSheet("QFrame{background-color: magenta}");
	z->setFixedSize(200, 300);

	auto* l1 = new QVBoxLayout(); //вниз
	auto* l2 = new QHBoxLayout();//вправо
	l1->addStretch(1);

	l1->addLayout(l2);
	l2->addStretch(1);
	l2->addWidget(z, 0);

	setLayout(l1);
	
}
