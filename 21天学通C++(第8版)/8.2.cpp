#include <iostream>
using namespace std;

int main()
{
	int age = 30;
	int* pointsToInt = &age;
	
	cout << "Integer age is located at: " << pointsToInt << endl;
	
	return 0;
}