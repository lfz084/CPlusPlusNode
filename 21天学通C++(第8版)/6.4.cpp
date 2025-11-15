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
	
	if (dayInput == Sunday)
		cout << "Sunday wad named after the sun" << endl;
	else if (dayInput == Monday)
		cout << "Monday wad named after the Moon" << endl;
	else if (dayInput == Tuesday)
		cout << "Tuesday wad named after the Mars" << endl;
	else if (dayInput == Wednesday)
		cout << "Wednesday wad named after the Mercury" << endl;
	else if (dayInput == Thursday)
		cout << "Thursday wad named after the Jupiter" << endl;
	else if (dayInput == Friday)
		cout << "Friday wad named after the Venus" << endl;
	else if (dayInput == Saturday)
		cout << "Saturday wad named after the Saturn" << endl;
	else
		cout << "Wrong input, execute again" << endl;
		
	return 0;
}