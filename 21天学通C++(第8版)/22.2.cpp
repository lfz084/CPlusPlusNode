#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> numsInVec{20, 101, 2017, -50};
	
	auto evenNum = find_if(numsInVec.cbegin(),
						numsInVec.cend(),		// Range to find if
						[](const int& num) { return (num % 2 == 0);});
	
	if(evenNum != numsInVec.cend())
		cout << "Even number in collection is: " << *evenNum << endl;
		
	return 0;
}