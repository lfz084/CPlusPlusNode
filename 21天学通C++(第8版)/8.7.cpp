#include <iostream>
using namespace std;

int main()
{
	int* pointsToAge = new int;
	
	cout << "Enter your dog' s age: ";
	cin >> *pointsToAge;
	
	cout << "Age " << *pointsToAge << " is stored at 0x" << hex << pointsToAge << endl;
	
	delete pointsToAge;
	
	return 0;
}