#include <map>
#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

template<typename T>
void DisplayContents(const T& cont)
{
	for(auto element = cont.cbegin();
			element != cont.cend();
			++element)
		cout << element->first << " -> " << element->second << endl;
	cout << endl;
}

struct PredIgnoreCase
{
	bool operator() (const string& str1, const string& str2)
	{
		string strNoCase1(str1), strNoCase2(str2);
		transform(str1.begin(), str1.end(), strNoCase1.begin(), ::tolower);
		transform(str2.begin(), str2.end(), strNoCase2.begin(), ::tolower);
		
		return (strNoCase1 < strNoCase2);
	}
};

typedef map<string, string> DIR_WITH_CASE;
typedef map<string, string, PredIgnoreCase> DIR_NOCASE;

int main()
{
	//Case sansitive directorycase of string-key plays no role
	DIR_WITH_CASE dirWithCase;
	
	dirWithCase.insert(make_pair("John", "2345764"));
	dirWithCase.insert(make_pair("JOHN", "2345764"));
	dirWithCase.insert(make_pair("Sara", "42367236"));
	dirWithCase.insert(make_pair("Jack", "32435348"));
	
	cout << "Displaying contents of the case-sensitive map:" << endl;
	DisplayContents(dirWithCase);
	
	// Case-insensitive mapcase of string-key affects insertion & search
	 DIR_NOCASE dirNoCase(dirWithCase.begin(), dirWithCase.end());
	// DIR_WITH_CASE dirNoCase(dirWithCase.begin(), dirWithCase.end());
	
	cout << "Displaying contents of the case-insensitive map:" << endl;
	DisplayContents(dirNoCase);
	
	// Search for a name in the two maps and diaplay result
	cout << "Please enter a name to search" << endl << "> ";
	string name;
	cin >> name;
	
	auto pairWithCase = dirWithCase.find(name);
	if(pairWithCase != dirWithCase.end())
		cout << "Num in case-sens. dir: " << pairWithCase->second << endl;
	else
		cout << "Num not found in case-sencitive dir" << endl;
		
	auto pairNoCase = dirNoCase.find(name);
	if(pairNoCase != dirNoCase.end())
		cout << "Num found in CI dir: " << pairNoCase->second << endl;
	else
		cout << "Num not found in case-insencitive directory" << endl;
	
	return 0;
}