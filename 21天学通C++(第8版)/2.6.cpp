#include <iostream>
#include <string>

using namespace std;

int main() {
	int inputNumber;
	cout << "Enter an integer : ";
	cin >> inputNumber ;
	
	string inputName;
	cout << "Enter you name: ";
	cin >> inputName;
	
	cout << inputName << " entered " << inputNumber << endl;
	return 0;
}