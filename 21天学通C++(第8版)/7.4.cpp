#include <iostream>
using namespace std;

double Area(double radius, double pi = 3.14);

int main()
{
	cout << "Enter radius: ";
	double radius = 0;
	cin >> radius;
	
	cout << "pi is 3.14, do you wish to change this (y/n) ?" << endl;
	char changePi = 'n';
	cin >> changePi;
	
	double circleArea = 0;
	if (changePi == 'y')
	{
		cout << "Enter the new pi: ";
		double newPi = 3.14;
		circleArea = Area(radius, newPi);
	}
	else
		circleArea = Area(radius);
		
	cout << "Area is: " << circleArea << endl;
	
	return 0;
}
double Area(double radius, double pi)
{
	return pi * radius * radius;
}
