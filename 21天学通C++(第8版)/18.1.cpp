#include <list>
#include <vector>

int main()
{
	using namespace std;
	
	// instantiate an empty list
	list<int> linkInts;
	
	// instantiate a list with 10 integers
	list<int> listWith10Ingegers(10);
	
	// instantiate a list with 4 integers, each value 99
	list<int> listWith4IntegerEach99(10, 99);
	
	// create an exact copy of an existing list
	list<int> listCopyAnother(listWith4IntegerEach99);
	
	// a vector with 10 integers, each 2017
	vector<int> vecintegers(10, 2017);
	
	// inatantiate a list using values form another contener
	list<int> listContainsCopyOfAnother(vecintegers.cbegin(), vecintegers.cend());
	
	return 0;
}