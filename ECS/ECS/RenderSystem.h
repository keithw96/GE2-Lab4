#pragma once
#include "Entity.h"
#include <vector>
class RenderSystem
{
	std::vector<Entity*> entities;

public:
	RenderSystem();
	~RenderSystem();
	void addEntity(Entity* e);
	void update();

};

