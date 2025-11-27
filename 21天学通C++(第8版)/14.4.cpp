#include <iostream>
using namespace std;

// template with default params: int & double
template<typename T1=int, typename T2=double>
class HoldaPair
{
private:
	T1 value1;
	T2 value2;
public:
	HoldaPair(const T1& val1, const T2& val2)	// constructor
		: value1(val1), value2(val2) {}
		
	// Accessor function
	const T1& GetFirstValue() const
	{
		return value1;
	}
	
	const T2& GetSecondValue() const
	{
		return value2;
	}
};

int main()
{
	HoldaPair<> pairIntDbl(300, 10.09);
	HoldaPair<short, const char*> pairShortStr(25, "Learn template, love C++");
	
	cout << "The first object contains -" << endl;
	cout << "Value1 is: " << pairIntDbl.GetFirstValue() << endl;
	cout << "Value2 is: " << pairIntDbl.GetSecondValue() << endl;
	
	cout << "The second object contains -" << endl;
	cout << "Value1 is: " << pairShortStr.GetFirstValue() << endl;
	cout << "Value2 is: " << pairShortStr.GetSecondValue() << endl;
	
	return 0;
}