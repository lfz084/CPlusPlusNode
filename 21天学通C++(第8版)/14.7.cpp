#include <iostream>
// #include <string>
using namespace std;

template<typename Res, typename ValType>
void Sum(Res& result, ValType& val)
{
	// cout << result << " + " << val << endl;
	result = result + val;
}

template<typename Res, typename First, typename... Rest>
void Sum(Res& result, First val1, Rest... valN)
{
	// cout << result << " + " << val1 << " ..." << endl;
	result = result + val1;
	Sum(result, valN...);
}

int main()
{
	double dResult = 0;
	Sum(dResult, 3.14, 4.56, 1.1111);
	cout << "dResult = " << dResult << endl;
	
	string strResult;
	Sum(strResult, "Hello ", "World");
	cout << "strResult = " << strResult << endl;
	
	return 0;
}