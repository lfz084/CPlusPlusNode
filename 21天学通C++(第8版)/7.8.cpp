#include <iostream>
using namespace std;

void DisplayArray(int numbers[], int length)
{
	for (int index = 0; index < length; ++index)
		cout << numbers[index] << " ";
	cout << endl;
}

void DisplayArray(char characters[], int length)
{
	for (int index = 0; index < length; ++index)
		cout << characters[index] << " ";
	cout << endl;
}

int main()
{
	int myNums[4] = {24, 58, -1, 245};
	DisplayArray(myNums, 4);
	
	char myStatement[7] = {'h', 'e', 'l', 'l', '0', '!', '\0'};
	DisplayArray(myStatement, 7);
	
	return 0;
}