#include <iostream>
using namespace std;

int main()
{
	int myNumbers[5];
	
	int* pointsToNums = myNumbers;
	
	cout << "pointsToNums = 0x" << hex << pointsToNums << endl;
	
	cout << "&myNumbers[0] = 0x" << hex << &myNumbers[0] << endl;
	
	return 0;
}