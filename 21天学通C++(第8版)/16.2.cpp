#include <string>
#include <iostream>

int main()
{
	using namespace std;
	
	string stlString("Hello string!"); // sample
	
	// Access the contents of the string using array syntax
	cout << "Display elements in string using array-syntax" << endl;
	for(size_t charCounter = 0;
		charCounter < stlString.length();
		++charCounter)
	{
		cout << "Character[" << charCounter << "] is: ";
		cout << stlString[charCounter] << endl;
	}
	cout << endl;
	
	// Access the contents of a string using iterators
	cout << "Display elements in string using iterators: " << endl;
	int charOffset = 0;
	string::const_iterator charLocator;
	for(auto charLocator = stlString.begin();
		charLocator != stlString.end();
		++charLocator)
	{
		cout << "stlString[" << charOffset++ << "] is: ";
		cout << *charLocator << endl;
	}
	cout << endl;
	
	// Access contents of as a constc char*
	cout << "The char representation of the string is: ";
	cout << stlString.c_str() << endl;
	
	return 0;
}