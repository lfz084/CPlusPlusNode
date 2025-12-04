#include <fstream>
#include <sstream>
#include <iostream>
using namespace std;

int main()
{
	cout << "Enter a integer: " ;
	int input  = 0;
	cin >> input;
	
	stringstream converterStream;
	converterStream << input;
	string inputAsStr;
	converterStream >> inputAsStr;
	
	cout << "String input = " << input << endl;
	cout << "String gained from integer = " << inputAsStr << endl;
	
	stringstream anotherStream;
	anotherStream << inputAsStr;
	int Copy = 0;
	anotherStream >> Copy;
	
	cout << "Integer gainde from anotherStream, Copy = " << Copy << endl;
	
	return 0;
}