#include <iostream>
#include <string>
using namespace std;

class DisPlay
{
public:
	void operator () (string input) const
	{
		cout << input << endl;
	}
};

int main()
{
	DisPlay displayFuncObj;
	
	// equivalent to displayFuncObj.operator ()
	displayFuncObj("DisPlay this string! ");
	
	return 0;
}