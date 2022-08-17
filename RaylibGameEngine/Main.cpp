#include "raylib.h"
#include "EngineApplication.h"

int main()
{
    auto engine = new EngineApplication();

    engine->run("Game Engine", 800, 600);

    delete engine;

    return 0;
}
