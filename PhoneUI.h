#pragma once
#include "core/QtIncludes.h"
class PhoneUI : public QWidget
{
	Q_OBJECT
public:
	PhoneUI(QWidget* parent, QPushButton* callBut);

protected:
	void resizeEvent(QResizeEvent* event) override;
private:
	QFrame* black_frame;
	QPushButton* button;

	QLabel* UIPicture;

};

