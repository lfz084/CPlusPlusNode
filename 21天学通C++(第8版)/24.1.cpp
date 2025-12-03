#include <stack>
#include <vector>

int main()
{
	using namespace std;
	
	// a stack of integers
	stack<int> numsInStack;
	
	// a stack of double
	stack<double> dulsInStack;
	
	// a stack of double contained in a vector
	stack<double, vector<double>> doublesStackedInVec;
	
	// initializing one stack to be a copy another
	stack<int> numsStackInCopy(numsInStack);
	
	return 0;
}