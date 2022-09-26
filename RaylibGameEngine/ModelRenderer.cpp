#include "ModelRenderer.h"

ModelRenderer::ModelRenderer(const char* fileName, Texture2D texture)
{
	m_model = LoadModel(fileName);

	m_model.materials[0].maps[MATERIAL_MAP_DIFFUSE].texture = texture;
}

ModelRenderer::ModelRenderer(const char* fileName)
{
	m_model = LoadModel(fileName);
}

ModelRenderer::~ModelRenderer()
{
}

bool ModelRenderer::startup()
{
	return true;
}

void ModelRenderer::shutdown()
{
}

void ModelRenderer::update()
{
}

void ModelRenderer::draw()
{
	DrawModel(m_model, m_position, m_scale, WHITE);
}
