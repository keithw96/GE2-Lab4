#include "HealthComponent.h"

HealthComponent::HealthComponent() : m_health(100)
{

}

int HealthComponent::getHealth()
{
	return m_health;
}

void HealthComponent::setHealth(int health)
{
	this->m_health = health;
}