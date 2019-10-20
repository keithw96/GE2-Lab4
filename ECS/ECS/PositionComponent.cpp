#include "PositionComponent.h"

PositionComponent::PositionComponent(int x, int y) : m_x(x), m_y(y)
{

}

int PositionComponent::getX()
{
	return m_x;
}

int PositionComponent::getY()
{
	return m_y;
}

void PositionComponent::setX(int x)
{
	this->m_x = x;
}

void PositionComponent::setY(int y)
{
	this->m_y = y;
}