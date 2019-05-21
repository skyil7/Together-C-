#include "Doughnut.h"

Doughnut::Doughnut(double _radius, double _holeRadius)
{
	radius = _radius;
	holeRadius = _holeRadius;
}

double Doughnut::getArea()
{
	return pi * radius* radius - pi * holeRadius * holeRadius;
}

Doughnut::Doughnut()
{
}


Doughnut::~Doughnut()
{
}
