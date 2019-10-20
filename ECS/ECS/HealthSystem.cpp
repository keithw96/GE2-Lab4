#include "HealthSystem.h"

HealthSystem::HealthSystem()
{

}

HealthSystem::~HealthSystem()
{

}

void HealthSystem::addEntity(Entity* e)
{
	entities.push_back(e);
}

void HealthSystem::update()
{
	for (auto entity : entities)
	{
		std::cout << "Health System Update of " << entity->getTag() << std::endl;
	}
}