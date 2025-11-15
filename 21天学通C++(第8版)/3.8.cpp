#include <iostream>

constexpr double GetPi() { return 22.0 / 7; }
constexpr double TwicePi() { return 2 * GetPi(); }

int main()
{
	using namespace std;
	const double pi = 22.0 / 7;
	
	cout << "constant pi contains value " << pi << endl;
	cout << "constexpr GetPi() return value " << GetPi() << endl;
	cout << "constexpr TwicePi() return value " << TwicePi() << endl;
	
	return 0;	
}