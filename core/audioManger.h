#pragma once
#define SDL_MAIN_HANDLED
#include <SDL2/SDL.h>
#include <SDL2/SDL_mixer.h>

class audioManager
{
	Mix_Chunk* getPhone = nullptr;
	Mix_Chunk* goToAnotherRoom = nullptr;
public:
	static audioManager& getObject() {
		static audioManager instance;
		return instance;
	}
	
	void play_getPhone()
	{
		Mix_PlayChannel(-1, getPhone, 0);
	}

	void play_goToAnotherRoom()
	{
		Mix_PlayChannel(-1, goToAnotherRoom, 0);
	}
private:
	audioManager()
	{
		if (!initional()) cerr << "Выход..." << endl, exit(1);

		getPhone = Mix_LoadWAV("./sounds/getPhone.wav");
		if (!getPhone) cerr << "Звук поднятия телефона не найден" << endl, exit(1);

		goToAnotherRoom = Mix_LoadWAV("./sounds/goToAnotherRoom.wav");
		if (!goToAnotherRoom) cerr << "Звук перехода в другую комнату не найден" << endl, exit(1);

	}

	~audioManager() {
		if (getPhone) Mix_FreeChunk(getPhone);
		if (goToAnotherRoom) Mix_FreeChunk(goToAnotherRoom);
		Mix_CloseAudio();
	}

	bool initional()
	{
		if (Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, 2, 2048) < 0) {
			printf("Ошибка звука: %s\n", Mix_GetError());
			return false;
		}
		return true;
	}


};