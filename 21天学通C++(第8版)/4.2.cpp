#include <iostream>
using namespace std;
constexpr int Square(int number) { return number*number; }

int main()
{
	const int ARRAY_LENGTG = 5;
	int myNumber[ARRAY_LENGTG] = {5, 10, 0, -101, 201};
	int moreNumber[Square(ARRAY_LENGTG)];
	
	cout << "Enter index of the element to be chenged: ";
	int elementIndex = 0;
	cin >> elementIndex;
	
	cout << "Enter new value: ";
	int newValue = 0;
	cin >> newValue;
	
	myNumber[elementIndex] = newValue;
	moreNumber[elementIndex] = newValue;
	
	cout << "Element " << elementIndex << " in array myNumber is: ";
	cout << myNumber[elementIndex] << endl;
		
	cout << "Element " << elementIndex << " in array moreNumber is: ";
	cout << moreNumber[elementIndex] << endl;
	
	return 0;
}