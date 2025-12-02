#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <functional>

int main()
{
	using namespace std;
	
	string str("THIS is a TEst string!");
	cout << "The sample string is: " << str << endl;
	
	string strLowerCaseCopy;
	strLowerCaseCopy.resize(str.size());
	
	transform(str.cbegin(),				// Start source range
			str.cend(),					// End source range
			strLowerCaseCopy.begin(),	// Start dest range
			::tolower);					// unary function
	
	cout << "Result of 'transform' on the string with 'tolower': " << endl;
	cout << "\"" << strLowerCaseCopy << "\"" << endl << endl;
	
	// Two sample vectors of integers...
	vector<int> numsInVec1{2017, 0, -1, 42, 10101, 25};
	vector<int> numsInVec2(numsInVec1.size(), -1);
	
	// A destination range for holding the result of addition
	deque<int> sumInDeque(numsInVec1.size());
	
	transform (numsInVec1.begin(),	// Start of source range 1
				numsInVec1.end(),	// End of source range 1
				numsInVec2.begin(),	// Start of source range 2
				sumInDeque.begin(),	// Startc of dest range
				plus<int>());		// binary function
	
	cout << "Result of 'transform' using binary function 'plus': " << endl;
	cout << "Index Vector1 + Vector2 = Result (in Deque)" << endl;
	for(size_t index = 0; index < numsInVec1.size(); ++index)
	{
		cout << index << "\t" << numsInVec1[index] << "\t+ ";
		cout << numsInVec2[index] << "\t= ";
		cout << sumInDeque[index] << endl;
	}
	
	return 0;
}