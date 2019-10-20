#include "ControlSystem.h"

ControlSystem::ControlSystem()
{

}

ControlSystem::~ControlSystem()
{

}

void ControlSystem::addEntity(Entity* e)
{
	entities.push_back(e);
}

void ControlSystem::update()
{
	for (auto entity : entities)
	{
		std::cout << "Control System Update of " << entity->getTag() << std::endl;
	}
}