#pragma once
class Application
{
public:

	Application();
	virtual ~Application();


	void run(const char* title, int width, int height);

	virtual bool startup() = 0;
	virtual void shutdown() = 0;
	virtual void update(float deltaTime) = 0;
	virtual void draw() = 0;

protected:
	virtual void createWindow(const char* title, int width, int height);
	virtual void destroyWindow();

	unsigned int m_fps;
};

