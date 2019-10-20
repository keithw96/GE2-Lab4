#pragma once
#include "Component.h"

class PositionComponent : public Component
{
public:
	
	PositionComponent(int x, int y);
	int getX();
	int getY();
	void setX(int x);
	void setY(int y);

private:
	int m_x;
	int m_y;
};

