#pragma once
#include "core/QtIncludes.h"
class restroom : public QWidget
{
	Q_OBJECT
public:
	restroom(QWidget* parent);
protected:
	void resizeEvent(QResizeEvent* event) override;
private:
	QPushButton* toHallway;
};

