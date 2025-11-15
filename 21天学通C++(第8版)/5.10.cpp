#include <iostream>

using namespace std;

int main()
{
	cout << "Use sizeof to determine memory used by arrays" << endl;
	int myNumbers[100] = {0};
	
	cout << "Byte used by an int: " << sizeof(int) << endl;
	cout << "Byte used by myNumbers: " << sizeof(myNumbers) << endl;
	cout << "Byte used by an element: " << sizeof(myNumbers[0]) << endl;
	
	return 0;
}