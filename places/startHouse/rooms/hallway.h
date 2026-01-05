#pragma once
#include "core/QtIncludes.h"

class startHouse;

class hallway : public QWidget
{
	Q_OBJECT
public:
	hallway(QWidget* parent);

protected:
    void resizeEvent(QResizeEvent* event) override;

private:

    QPushButton* toKitchen;
	QPushButton* toBedroom;

};

