#pragma once
#include "Component.h"
#include <vector>
#include <iostream>
class Entity
{
	int id;
public:
	Entity() {}
	void addComponent(Component c) { components.push_back(c); }
	void removeComponent(Component c) { /* TBI */ }
	

private:
	std::vector<Component> components;
};