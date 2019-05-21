#include "Circle.h"
#pragma once
class Doughnut:Circle
{
public:
	Doughnut();
	Doughnut(double _radius, double _holeRadius);
	~Doughnut();
	double holeRadius;
	double getArea();
};

