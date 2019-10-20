#pragma once
#include "Component.h"
#include <vector>
#include <iostream>
class Entity
{
	int id;
public:
	Entity();
	void addComponent(Component c);
	void removeComponent(Component c);
	void setTag(std::string tag);
	std::string getTag();

private:
	std::vector<Component> components;
	std::string m_tag;
};