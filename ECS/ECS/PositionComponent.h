#pragma once
#include "Component.h"

class PositionComponent : public Component
{
public:

	PositionComponent(int x, int y) : m_x(x), m_y(y) {}
	int getX() { return m_x; }
	int getY() { return m_y; }
	void setX(int x) { this->m_x = x; }
	void setY(int y) { this->m_y = y; }
private:
	int m_x;
	int m_y;
};