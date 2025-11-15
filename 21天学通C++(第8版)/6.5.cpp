#include <iostream>
using namespace std;

int main()
{
	enum DaysOfWeek
	{
		Sunday = 0,
		Monday,
		Tuesday,
		Wednesday,
		Thursday,
		Friday,
		Saturday
	};
	
	cout << "Find what days of the week are named after!" << endl;
	cout << "Enter a number for a day(Sunday = 0): ";
	
	int dayInput = Sunday;
	cin >> dayInput;
	
	switch(dayInput)
	{
	case Sunday:
		cout << "Sunday wad named after the sun" << endl;
		break;
	case Monday:
		cout << "Monday wad named after the Moon" << endl;
		break;
	case Tuesday:
		cout << "Tuesday wad named after the Mars" << endl;
		break;
	case Wednesday:
		cout << "Wednesday wad named after the Mercury" << endl;
		break;
	case Thursday:
		cout << "Thursday wad named after the Jupiter" << endl;
		break;
	case Friday:
		cout << "Friday wad named after the Venus" << endl;
		break;
	case Saturday:
		cout << "Saturday wad named after the Saturn" << endl;
		break;
	default:
		cout << "Wrong input, execute again" << endl;
		break;
	}
	
	return 0;
}