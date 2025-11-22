#include <iostream>
using namespace std;

int main()
{
	int* pointsToManyNums = new(nothrow) int[0xffffffffff];
	
	if(pointsToManyNums)
	{
		delete[] pointsToManyNums;
	}
	else
		cout << "Memory allocation failed. Ending program" << endl;
		
	cout << "Goodbye!" << endl;
	
	return 0;
}