#pragma once
#include "core/QtIncludes.h"

class livingroom : public QWidget
{
	Q_OBJECT
public:
	livingroom(QWidget* parent);
protected:
	void resizeEvent(QResizeEvent* event) override;
private:
	QPushButton* toHallway;
};

