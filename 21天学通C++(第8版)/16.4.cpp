#include <string>
#include <iostream>

int main()
{
	using namespace std;
	
	string sampleStr("Good day string! Today is beautiful!");
	cout << "Sample string is: " << endl << sampleStr << endl << endl;
	
	// Find substring "day" - find return position
	size_t charPos = sampleStr.find("day", 0);
	
	// Check if the substring was found...
	if(charPos != string::npos)
		cout << "First instance \"day\" as pos. " << charPos << endl;
	else
		cout << "Substring not found." << endl;
	
	cout << "Locating all instances of substring \"day\"" << endl;
	size_t subStrPos = sampleStr.find("day", 0);
	
	while(subStrPos != string::npos)
	{
		cout << "\"day\" found at position " << subStrPos << endl;
		
		// Make find() search forword from next character onwords
		size_t searchOffset = subStrPos + 1;
		
		subStrPos = sampleStr.find("day", searchOffset);
	}
	
	return 0;
}