#include <vector>

int main()
{
	// vector of integers
	std::vector<int> integers;
	
	// vector initialized using c++ list initializadtion
	std::vector<int> initVector = {202, 2017, -1};
	
	// Instantiate a vector with 10 elements (it can still grow)
	std::vector<int> tenElements(10);
	
	// Instantiate a vector with 10 elements, each initialted 90
	std::vector<int> tenElemInit(10, 90);
	
	// Initialize vector to the contents of another
	std::vector<int> copyVertor(tenElemInit);
	
	// Vertor initialized to 5 elements form another using iterators
	std::vector<int> partialCopy(tenElements.cbegin(), tenElements.cbegin() + 5);
	
	return 0;
}