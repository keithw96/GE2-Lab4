#pragma once
#include "Entity.h"
#include <vector>
class ControlSystem
{
	std::vector<Entity*> entities;

public:
	ControlSystem();
	~ControlSystem();
	void addEntity(Entity* e);
	void update();
};