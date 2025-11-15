#include <iostream>
using namespace std;

int firstNumber = 0; 
int secondNumber = 0;
int multiplicationResult = 0;

void MultiplyNumbers() {
	cout << "Enter the firstNumber: ";
	cin >> firstNumber;
	
	cout << "Enter the secondNumber: ";
	cin >> secondNumber;
	
	multiplicationResult = firstNumber * secondNumber;
	
	cout << "Displaying from MultiplyNumbers(): ";
	cout << firstNumber << " X " << secondNumber;
	cout << " = " << multiplicationResult << endl;
}

int main() {
	MultiplyNumbers();
	
	cout << "Displaying from main(): ";
	cout << firstNumber << " X " << secondNumber;
	cout << " = " << multiplicationResult << endl;
	
	return 0;
}