#include <map>
#include <iostream>
#include <string>

using namespace std;

// Type-define the map and multimap definition for easy readability
typedef map<int, string> MAP_INT_STRING;
typedef multimap<int, string> MMAP_INT_STRING;

template<typename T>
void DisplayContents(const T& cont)
{
	for(auto element = cont.cbegin();
			element != cont.cend();
			++element)
		cout << element->first << " -> " << element->second << endl;
	cout << endl;
}

int main()
{
	MAP_INT_STRING mapIntToStr;
	
	// insert key-value pairs into the map using value_type
	mapIntToStr.insert(MAP_INT_STRING::value_type(3, "Three"));
	
	// insert a pair using function make_pair
	mapIntToStr.insert(make_pair(-1, "Minus One"));
	
	// insert a pair object directly
	mapIntToStr.insert(pair<int, string>(1000, "One Thousand"));
	
	// Use an array-like systax for inserting key-value pairs
	mapIntToStr[1000000] = "One million";
	
	cout << "The map contains " << mapIntToStr.size();
	cout << " key-value pairs. The are: " << endl;
	DisplayContents(mapIntToStr);
	
	// instantiate a multimap that is a copy of a map
	MMAP_INT_STRING mmapIntToStr(mapIntToStr.cbegin(), mapIntToStr.cend());
	
	// The insert function works the same way for multimap too
	// A multimap can atore duplicates - insert a duplicate
	mmapIntToStr.insert(make_pair(1000, "Thousand"));
	
	cout << endl << "The multimap contains " << mmapIntToStr.size();
	cout << " key-value paira. The are: " << endl;
	cout << "The element in the multimap are: " << endl;
	DisplayContents(mmapIntToStr);
	
	// The multimap can return number of pairs with same key
	cout << "The number of pairs in the multimap with 1000 as their key: "
		<< mmapIntToStr.count(1000) << endl;
	
	return 0;
}