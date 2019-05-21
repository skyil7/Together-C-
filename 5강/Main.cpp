#include <iostream>
#include "Doughnut.h"
using namespace std;

int main()
{
	double rad, holeRad;
	cout << "도넛의 반지름 : ";
	cin >> rad;
	cout << "도넛 구멍의 반지름 : ";
	cin >> holeRad;

	Doughnut dough = Doughnut(rad, holeRad);

	cout << dough.getArea();
}