#include <algorithm>
#include <iostream>
#include <vector>
#include <list>
using namespace std;

// struct that behaves as a unary function
template<typename elementType>
struct DisplayElement
{
	void operator() (const elementType& element) const
	{
		cout << element << ' ';
	}
};

int main()
{
	vector<int> numsInVec{0, 1, 2, 3, -1, -9, 0, -999};
	cout << "Vector of integers contains: " << endl;
	
	for_each(numsInVec.cbegin(),	// start of range
			numsInVec.cend(),		// end of range
			DisplayElement<int>());	// unary function object
	
	// Diaplay the list of characters
	list<char> charsInList{'a', 'z', 'k', 'd'};
	cout << endl << "List of characters contains: " << endl;
	
	for_each(charsInList.cbegin(),
			charsInList.cend(),
			DisplayElement<char>());
	cout << endl;
	
	return 0;
}
