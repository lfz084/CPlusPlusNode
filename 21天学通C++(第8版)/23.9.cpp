#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

template<typename T>
void DisplayContents(const T& container)
{
	for(auto element = container.cbegin();
			element != container.cend();
			++element)
		cout << *element << endl;
	cout << " | Number of elements: " << container.size() << endl;
}

int main()
{
	vector<int> numsInVec(6);
	
	// fill first 3 elements with value 8, last 3 with value 5
	fill(numsInVec.begin(), numsInVec.begin() + 3, 8);
	fill_n(numsInVec.begin() + 3, 3, 5);
	
	// shuffle the container
	// random_shuffle(numsInVec.begin(), numsInVec.end());
	
	cout << "The initial conyentd of vector: " << endl;
	DisplayContents(numsInVec);
	
	cout << endl << "'std::replace' value 5 by 8" << endl;
	replace(numsInVec.begin(), numsInVec.end(), 5, 8);
	
	replace_if(numsInVec.begin(), numsInVec.end(),
			[](int element){return (element % 2) == 0;}, -1);
			
	cout << endl << "Vector after replecements: " << endl;
	DisplayContents(numsInVec);
	
	return 0;
}