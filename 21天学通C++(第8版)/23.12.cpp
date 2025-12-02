#include <algorithm>
#include <list>
#include <string>
#include <iostream>
using namespace std;

template<typename T>
void DisplayConcents(const T& container)
{
	for(auto element = container.cbegin();
			element != container.cend();
			++element)
		cout << *element << endl;
}

int main()
{
	list<string> names{"John", "Bred", "jack", "sean", "Anna"};
	
	cout << "Sorted contents of the list are: " << endl;
	names.sort();
	DisplayConcents(names);
	
	cout << "Lowest index where \"Bred\" can be inserted is: " << endl;
	auto minPos = lower_bound(names.begin(), names.end(), "Bred");
	cout << distance(names.begin(), minPos) << endl;
	
	cout << "The highest index where \"Bred\" can be inserted is: " << endl;
	auto maxPos = upper_bound(names.begin(), names.end(), "Bred");
	cout << distance(names.begin(), maxPos) << endl;
	
	cout << endl;
	
	cout << "List after inserting Bred in sorted order: " << endl;
	names.insert(minPos, "Bred");
	DisplayConcents(names);
	
	return 0;
}