#include <iostream>
using namespace std;

int main()
{
	try
	{
		int* pointsToManyNums = new int[0xffffffffff];
		delete[] pointsToManyNums;
	}
	catch(bad_alloc)
	{
		cout << "Memory allocation failed, Ending program" << endl;	
	}
	
	cout << "Goodbye!" << endl;
	
	return 0;
}