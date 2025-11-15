#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "How many integer shall i reserve memory for?" << endl;
	int  numEntries = 0;
	cin >> numEntries;
	
	int* numbers = new int[numEntries];
	
	cout << "Memory allocated at 0x" << hex << numbers << endl;
	
	delete[] numbers;
	
	return 0;
}