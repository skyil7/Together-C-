#include "Circle.h"

Circle::Circle(double _radius)
{
	pi = 3.1415;
	radius = _radius;
}

double Circle::getArea()
{
	return pi * radius* radius;
}

Circle::Circle()
{
	pi = 3.1415;
}


Circle::~Circle()
{
}
