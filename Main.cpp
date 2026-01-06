#include "core/mainWindow.h"


int main(int argc, char* argv[])
{
    QApplication app(argc, argv);

    mainWindow window;
    window.resize(800, 450);

    window.show();

    return app.exec();
}
