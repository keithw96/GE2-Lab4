#pragma once
#include "Component.h"
class HealthComponent : public Component
{
public:
	HealthComponent();
	int getHealth();
	void setHealth(int health);
private:
	int m_health;

};