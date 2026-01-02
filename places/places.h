#pragma once
#include "core/QtIncludes.h"
#include"places/startHouse/startHouse.h"

class places : public QWidget
{
	Q_OBJECT
public:
	places(QWidget* parent);
private:
	QStackedWidget* plasesSt;
};

