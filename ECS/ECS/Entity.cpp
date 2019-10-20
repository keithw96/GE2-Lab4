#include "Entity.h"

Entity::Entity()
{

}

void Entity::addComponent(Component c)
{
	components.push_back(c);
}

void Entity::removeComponent(Component c)
{

}

std::string Entity::getTag()
{
	return m_tag;
}

void Entity::setTag(std::string tag)
{
	m_tag = tag;
}