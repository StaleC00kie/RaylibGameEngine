#pragma once
#include "Component.h"
#include "raylib.h"

class ModelRenderer : public Component
{
public:

	ModelRenderer(const char* fileName, Texture2D texture);
	ModelRenderer(const char* fileName);

	virtual ~ModelRenderer();

	virtual bool startup() override;
	virtual void shutdown() override;

	virtual void update() override;
	virtual void draw() override;

protected:
	
	Model m_model;

	// TODO: Move this to a transform component
	Vector3 m_position = { 0.0f, 0.0f, 0.0f };

	// TODO: Move this to a transform component
	float m_scale = 1;
};

