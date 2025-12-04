#include <iostream>
using namespace std;

int main()
{
	cout << "Enter a integer: ";
	int inputNum = 0;
	cin >> inputNum;
	
	cout << "Enter the value of Pi: ";
	double Pi = 0.0;
	cin >> Pi;
	
	cout << "Enter three characters separated for space: " << endl;
	char char1 = '\0', char2 = '\0', char3 = '\0';
	cin >> char1 >> char2 >> char3;
	
	cout << "The recorded variablec value are: " << endl;
	cout << "inputNum: " << inputNum << endl;
	cout << "Pi: " << Pi << endl;
	cout << "Three characters: " << char1 << char2 << char3 << endl;
	
	return 0;
}