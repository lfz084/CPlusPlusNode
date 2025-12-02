#include <algorithm>
#include <vector>
#include <list>
#include <iostream>
using namespace std;


template<typename T>
void DisplayContents(const T& container)
{
	for(auto element = container.begin();
			element != container.end();
			++element)
		cout << *element << ' ';
	cout << " | Number of Elements: " << container.size() << endl;
}

int main()
{
	list<int> numsInList{2017, 0, -1, 42, 10101, 25};
	
	cout << "Source (list) contains: "  << endl;
	DisplayContents(numsInList);
	
	// Initialize vector to hold 2x element as the list
	vector<int> numsInVec(numsInList.size() * 2);
	
	auto lastElement = copy(numsInList.cbegin(),	// Start source range
							numsInList.cend(),		// End source range
							numsInVec.begin());		// Start dest range
							
	// copy old numbers from list into vector
	copy_if(numsInList.begin(), numsInList.end(),
					lastElement,
					[](int element) {return (element % 2) != 0;});
					
	cout << "Destination (vector) after copy and copy_if: " << endl;
	DisplayContents(numsInVec);
	
	// Remove all instances of '0', resize vector using erase()
	auto newEnd = remove(numsInVec.begin(), numsInVec.end(), 0);
	numsInVec.erase(newEnd, numsInVec.end());
	
	// Remove all odd number from the vector using remove_if
	newEnd = remove_if(numsInVec.begin(), numsInVec.end(),
					[](int element) {return (element % 2) != 0;});
	numsInVec.erase(newEnd, numsInVec.end());
	
	cout << "Destination (vector) after remove, remove_if, erase: " << endl;
	DisplayContents(numsInVec);
	
	return 0;
}