#include <queue>
#include <list>

int main()
{
	using namespace std;
	
	// A queue of integers
	queue<int> numsInQ;
	
	// A queue of double
	queue<double> dblsInQ;
	
	// A queue of doubles shored internally in a list
	queue<double, list<double>> dblsInQInList;
	
	// One queue created as a copy of another
	queue<int> copyQ(numsInQ);
	
	return 0;
}