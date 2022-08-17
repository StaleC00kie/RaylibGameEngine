#include "Application.h"
#include <raylib.h>

Application::Application()
{
	m_fps = 0;
}

Application::~Application()
{
}

void Application::run(const char* title, int width, int height)
{
	createWindow(title, width, height);

	if (startup())
	{
		double prevTime = GetTime();
		double currTime = 0;
		double deltaTime = 0;
		unsigned int frames = 0;
		double fpsInterval = 0;

		while (!WindowShouldClose())
		{
			currTime = GetTime();

			deltaTime = currTime - prevTime;

			if (deltaTime > 0.1f)
			{
				deltaTime = 0.1f;
			}

			prevTime = currTime;

			// TODO: get input manager

			frames++;
			fpsInterval += deltaTime;

			if (fpsInterval >= 1.0f) 
			{
				m_fps = frames;
				frames = 0;
				fpsInterval -= 1.0f;
			}

			update(float(deltaTime));

			draw();
		}
	}

	// cleanup
	shutdown();
	destroyWindow();
}

void Application::createWindow(const char* title, int width, int height)
{
	InitWindow(width, height, title);
}

void Application::destroyWindow()
{

}
