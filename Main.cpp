#include "core/mainWindow.h"

int main(int argc, char* argv[])
{
    QApplication app(argc, argv);

    if (Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, 2, 2048) < 0) {
        printf("Ошибка звука: %s\n", Mix_GetError());
        return false;
    }

    mainWindow window;
    window.resize(1600, 900);

    window.show();

    return app.exec();
}
