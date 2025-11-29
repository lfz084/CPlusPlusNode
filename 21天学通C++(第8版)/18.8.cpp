#include <forward_list>
#include <iostream>
using namespace std;

template<typename T>
void DisplayContents(const T& container)
{
	for(auto element = container.cbegin();
			element != container.cend();
			++element)
	{
		cout << *element << ' ';
	}
	cout << endl;
}

int main()
{
	forward_list<int> firstIntegers{3, 4, 2, 2, 0};
	firstIntegers.push_front(1);
	
	cout << "Contents of forward_list: " << endl;
	DisplayContents(firstIntegers);
	
	firstIntegers.remove(2);
	firstIntegers.sort();
	cout << "Contents after removing 2 and sorting: " << endl;
	DisplayContents(firstIntegers);
	
	return 0;
}