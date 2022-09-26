#include "EngineApplication.h"

EngineApplication::EngineApplication()
{

}

EngineApplication::~EngineApplication()
{
}

bool EngineApplication::startup()
{
	// TODO: Move this to a scene class

	m_camera = { 0 };

	m_camera.position = { 10.0f, 10.0f, 10.0f }; // Camera position
	m_camera.target = { 0.0f, 0.0f, 0.0f };      // Camera looking at point
	m_camera.up = { 0.0f, 1.0f, 0.0f };          // Camera up vector (rotation towards target)
	m_camera.fovy = 45.0f;                       // Camera field-of-view Y
	m_camera.projection = CAMERA_PERSPECTIVE;    // Camera mode type

	SetCameraMode(m_camera, CAMERA_FREE);
	
	//model = LoadModel("../Models/sphere.obj");


	m_modelRenderer = new ModelRenderer("../Models/Bunny.obj");

	return true;
}

void EngineApplication::shutdown()
{
}

void EngineApplication::update(float deltaTime)
{

}

void EngineApplication::draw()
{
	m_modelRenderer->draw();
	//DrawModel(model, {0, 0, 0}, 1, WHITE);
	DrawGrid(10, 1.0f);
}
