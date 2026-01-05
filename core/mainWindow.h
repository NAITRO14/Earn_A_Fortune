#pragma once
#include "core/QtIncludes.h"
#include "places/places.h"
#include "PhoneUI.h"

class mainWindow : public QWidget
{
	Q_OBJECT
public:
	mainWindow(QWidget* parent = nullptr);

protected:
	void resizeEvent(QResizeEvent* event) override;
private:
	places* placesPtr;
	PhoneUI* phone;

	QPushButton* PhoneButton;
	

	
};

