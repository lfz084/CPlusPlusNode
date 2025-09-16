#include <iostream>

using namespace std;

int DemoConsoleOutput() {
	cout << "This is a simple string literal" << endl;
	cout << "Writing number five: " << 5 << endl;
	cout << "Performing division 10 / 2 = " << 10 / 2 << endl;
	cout << "Pi when approximated is 22 / 7 = " << 22 / 7 << endl;
	cout << "Pi actually is 22 / 7 = " << 22.0 / 7 << endl;
	return 0;
}

int main() {
	return DemoConsoleOutput();
}