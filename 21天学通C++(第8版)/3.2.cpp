#include <iostream>

using namespace std;

void MultiplyNumbers() {
	cout << "Enter the firstNumber: ";
	int firstNumber = 0;
	cin >> firstNumber;
	
	cout << "Enter the secondNumber: ";
	int secondNumber = 0;
	cin >> secondNumber;
	
	int multiplicationResult = firstNumber * secondNumber;
	
	cout << firstNumber << " X " << secondNumber;
	cout << " = " << multiplicationResult << endl;
}

int main() {
	MultiplyNumbers();
	return 0;
}