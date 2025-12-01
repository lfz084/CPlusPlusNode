#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

// Insert code from Listing 21.3 here

// A structrue as a unary predicate
template<typename numberType>
struct IsMultiple
{
	numberType Divisor;
	
	IsMultiple(const numberType& divisor)
	{
		Divisor = divisor;
	}
	
	bool operator() (const numberType& element) const
	{
		// Check if the divisor is a multiple of the divisor
		return ((element % Divisor) == 0);
	}
};

int main()
{
	vector<int> numsInVec{25, 26, 27, 28, 29, 30, 31};
	cout << "The vector contains: 25, 26, 27, 28, 29, 30, 31" << endl;
	
	cout << "Enter divisor (> 0): ";
	int divisor = 0;
	cin >> divisor;
	
	// Find the firat element that is multiple of divisor
	auto element = find_if(numsInVec.cbegin(),
						numsInVec.cend(),
						IsMultiple<int>(divisor));
						
	if(element != numsInVec.cend())
	{
		cout << "First element in vector divisible by " << divisor;
		cout << ": " << *element << endl;
	}
	
	return 0;
}