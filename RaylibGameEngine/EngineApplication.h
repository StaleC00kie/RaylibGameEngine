#pragma once
#include "Application.h"
#include "raylib.h"
#include "ModelRenderer.h"
#include <iostream>

class EngineApplication : public Application
{
public:
	EngineApplication();
	virtual ~EngineApplication();

	virtual bool startup() override;
	virtual void shutdown() override;

	virtual void update(float deltaTime) override;
	virtual void draw() override;

protected:

	ModelRenderer* m_modelRenderer;

	Model model;
};

