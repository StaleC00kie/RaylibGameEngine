#pragma once
#include "Application.h"
#include "raylib.h"

class EngineApplication : public Application
{
public:
	EngineApplication();
	virtual ~EngineApplication();

	virtual bool startup() override;
	virtual void shutdown() override;

	virtual void update(float deltaTime) override;
	virtual void draw() override;
};

