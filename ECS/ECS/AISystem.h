#pragma once

#include "Entity.h"
#include <vector>
class AISystem
{
	std::vector<Entity*> entities;

public:
	AISystem();
	~AISystem();
	void addEntity(Entity* e);
	void update();
};

