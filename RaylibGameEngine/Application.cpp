#include "Application.h"

Application::Application()
{
	m_fps = 0;
	m_camera = { 0 };
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

			Time::deltaTime = currTime - prevTime;

			if (Time::deltaTime > 0.1f)
			{
				Time::deltaTime = 0.1f;
			}

			prevTime = currTime;

			// TODO: get input manager

			frames++;
			fpsInterval += Time::deltaTime;

			if (fpsInterval >= 1.0f) 
			{
				m_fps = frames;
				frames = 0;
				fpsInterval -= 1.0f;
			}

			update(float(Time::deltaTime));

			BeginDrawing();

			ClearBackground(RAYWHITE);

			BeginMode3D(m_camera);

			draw();

			EndMode3D();

			EndDrawing();
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
	CloseWindow(); // Close window and OpenGL context
}
