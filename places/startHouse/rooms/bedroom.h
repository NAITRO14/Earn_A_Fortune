#pragma once
#include "core/QtIncludes.h"

class bedroom : public QWidget
{
	Q_OBJECT
public:
	bedroom(QWidget* parent);
protected:
	void resizeEvent(QResizeEvent* event) override;

private:
	QPushButton* toHallway;
};

