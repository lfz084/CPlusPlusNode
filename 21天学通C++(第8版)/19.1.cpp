#include <set>

// used as a template parameter in set / multiset instantiation
template<typename T>
struct SortDescending
{
	bool operator () (const T& lhs, const T& rhs) const
	{
		return (lhs > rhs);
	}
};

int main()
{
	using namespace std;
	
	// a simple set or multiset of integers (using default sort predicate)
	set<int> setInt1;
	multiset<int> msetInt1;
	
	// set and multiset instantiated given a user-define sort predicate
	set<int, SortDescending<int>> setInt2;
	multiset<int, SortDescending<int>> msetInt2;
	
	// creating one set from another, or part of another container
	set<int> setInt3(setInt1);
	multiset<int> msetInt3(setInt1.cbegin(), setInt1.cend());
	
	return 0;
}