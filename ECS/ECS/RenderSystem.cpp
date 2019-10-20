#include "RenderSystem.h"

RenderSystem::RenderSystem()
{

}

RenderSystem::~RenderSystem()
{

}

void RenderSystem::addEntity(Entity* e)
{
	entities.push_back(e);
}

void RenderSystem::update()
{
	for (auto entity : entities)
	{
		std::cout << "Render System update of " << entity->getTag() << std::endl;
	}

	std::cout << std::endl;
	std::cout << std::endl;
}