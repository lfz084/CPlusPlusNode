#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

template<typename elementType>
struct DisplayElementKeepCount
{
	int count;
	
	DisplayElementKeepCount() : count(0) {} // constructor
	
	void operator() (const elementType& element)
	{
		++count;
		cout << element << ' ';
	}
};

int main()
{
	vector<int> numsInVec{22, 2017, -1, 999, 43, 901};
	cout << "Display the vector of integers: " << endl;
	
	DisplayElementKeepCount<int> result;
	result = for_each(numsInVec.cbegin(),
				numsInVec.cend(),
				DisplayElementKeepCount<int>());
				
	cout << endl << "Functor invoke " << result.count << " times" << endl;
	
	return 0;
}