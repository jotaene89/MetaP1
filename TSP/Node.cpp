#include "Node.h"

meta::Node::Node()
{
	
}

meta::Node::~Node()
{

}

meta::Node::Node(const int n, const double x, const double y)
{
	this->n = n;
	this->x = x;
	this->y = y;
}

int meta::Node::getN()
{
	return this->n;
}

double meta::Node::getX()
{
	return this->x;
}

double meta::Node::getY()
{
	return this->y;
}

void meta::Node::setN(const int n)
{
	this->n = n;
}

void meta::Node::setX(const double x)
{
	this->x = x;
}

void meta::Node::setY(const double y)
{
	this->y = y;
}
