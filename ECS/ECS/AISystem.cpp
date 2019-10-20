#include "AISystem.h"

AISystem::AISystem()
{

}

AISystem::~AISystem()
{

}

void AISystem::addEntity(Entity* e)
{
	entities.push_back(e);
}


void AISystem::update()
{
	for (auto entity : entities)
	{
		std::cout << "Ai System Update of " << entity->getTag() << std::endl;
	}
}