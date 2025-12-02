#include <algorithm>
#include <iostream>
#include <vector>
#include <list>
#include <ctime>

int main()
{
	using namespace std;
	srand(time(NULL));	// seed random generator using time
	
	vector<int> numsInVec(5);
	generate(numsInVec.begin(), numsInVec.end(),	// range
				rand);		// generator function
	
	cout << "Elements in the vector are: ";
	for(size_t index = 0; index < numsInVec.size(); ++index)
		cout << numsInVec[index] << ' ';
	cout << endl;
	
	list<int> numsInList(5);
	generate_n(numsInList.begin(), 3, rand);
	
	cout << "Elements in the list are: ";
	for(auto element = numsInList.begin(); 
			element != numsInList.end();
			++element)
		cout << *element << ' ';
	cout << endl;
	
	return 0;
}