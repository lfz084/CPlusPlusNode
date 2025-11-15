#include <iostream>
using namespace std;

int main()
{
	int age = 30;
	int dogsAge = 9;
	
	cout << "Integer age = " << age << endl;
	cout << "Integer dogsAge = " << dogsAge << endl;
	
	int* pointsToAge = &age;
	cout << "pointsToAge points to age" << endl;
	
	cout << "pointsToAge = 0x" << hex << pointsToAge << endl;
	cout << "pointsToAge = " << dec << *pointsToAge << endl;
		
	pointsToAge = &dogsAge;
	
	cout << "pointsToAge = 0x" << hex << pointsToAge << endl;
	cout << "pointsToAge = " << dec << *pointsToAge << endl;
		
	return 0;
}