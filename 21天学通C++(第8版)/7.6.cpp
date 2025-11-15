#include <iostream>
using namespace std;
const double Pi = 3.1415926;

void QueryAndCalculate()
{
	cout << "Enter radius: ";
	double radius = 0;
	cin >> radius;
	
	cout << "Area: " << Pi * radius * radius << endl;
	
	cout << "Do you wish to calculate cricumference (y/n) ?" << endl;
	char  calcCricum = 'n';
	cin >> calcCricum;
	
	if (calcCricum == 'n')
		return;
	
	cout << "Cricumference: " << 2 * Pi * radius << endl;
	return;
}

int main()
{
	QueryAndCalculate();
	return 0;
}