#pragma once
#include "core/QtIncludes.h"

class roomManager
{
	QStackedWidget* rooms = nullptr;
public:
	static roomManager& getObject()
	{
		static roomManager inst;
		return inst;
	}

	void setCurRooms(QStackedWidget* stack)
	{
		rooms = stack;
	}

	void switch_room(int index)
	{
		if (!rooms or index > rooms->count()) cerr << "Ошибка при смене комнаты!" << endl, exit(1);

		rooms->setCurrentIndex(index);
		audioManager::getObject().play_goToAnotherRoom();
	}

private:
	roomManager() = default;
	roomManager(const roomManager&) = delete;
};