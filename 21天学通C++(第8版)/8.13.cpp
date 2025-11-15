#include <iostream>
using namespace std;

int main()
{
	bool* isSunny;
	
	cout << "Is it sunny(y/n) ? " << endl;
	char userInput = '\0';
	cin >> userInput;
	
	if(userInput == 'y')
	{
		isSunny = new bool;
		*isSunny = true;
	}
	
	cout << "Boolean flag sunny says: " << *isSunny << endl;
	
	delete isSunny;
	
	return 0;
}