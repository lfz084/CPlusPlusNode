#include <iostream>

using namespace std;

int main() {
	cout << "This program will help you multiply two numbers" << endl;
	
	cout << "Enter the first number: ";
	int firstNumber;
	cin >> firstNumber;
	
	cout << "Enter the second nunber: ";
	int secondNumber;
	cin >> secondNumber;
	
	int multiplicationResult = firstNumber * secondNumber;
	
	cout << firstNumber << " X " << secondNumber;
	cout << " = " << multiplicationResult << endl;
	
	return 0;
}