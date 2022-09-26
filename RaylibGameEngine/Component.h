#pragma once
class Component
{
public:
	Component();
	virtual ~Component();

	virtual bool startup() = 0;
	virtual void shutdown() = 0;
	virtual void update() = 0;
	virtual void draw() = 0;
};

