#pragma once
#include "QtIncludes.h"
class places : public QWidget
{
	Q_OBJECT
public:
	places(QWidget* parent);
private:
	QStackedWidget* plasesSt;
};

