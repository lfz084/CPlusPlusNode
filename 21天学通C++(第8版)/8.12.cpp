#include <iostream>
using namespace std;

int main()
{
	const int ARRAY_LEN = 5;
	
	int myNumbers[ARRAY_LEN] = {24, -1, 365, 999, 2011};
	
	int* pointsToNums = myNumbers;
	
	cout << "Display array using pointer syntax, operator*" << endl;
	for(int index = 0; index < ARRAY_LEN; ++index)
		cout << "Element " << index << " = " << *(pointsToNums + index) << endl;
		
	cout << "Display array using ptr wish array syntax, operator[]" << endl;
	for(int index = 0; index < ARRAY_LEN; ++index)
		cout << "Element " << index << " = " << myNumbers[index] << endl;
	cout << endl;
	
	return 0;
}