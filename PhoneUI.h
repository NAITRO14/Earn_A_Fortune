#pragma once
#include "core/QtIncludes.h"
class PhoneUI : public QWidget
{
	Q_OBJECT
public:
	PhoneUI(QWidget* parent);
protected:
	void resizeEvent(QResizeEvent* event) override;
private:
	QFrame* z;
};

