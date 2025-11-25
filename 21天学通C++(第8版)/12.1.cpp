#include <iostream>
using namespace std;

class Date
{
private:
	int day, month, year;
public:
	Date (int inDay, int inMonth, int inYear)
		: day(inDay), month(inMonth), year(inYear) {}
	
	Date& operator++ () // prefix increment
	{
		++day;
		return *this;
	}
	
	Date operator-- () // prefix decrement
	{
		--day;
		return *this;
	}
	
	void DisPlayDate()
	{
		cout << month << " / " << day << " / " << year << endl;
	}
};

int main()
{
	Date holiDay(12, 25, 2016); // Dec, 25, 2016
	
	cout << "The date object is iniitalized to: ";
	holiDay.DisPlayDate();
	
	++holiDay; // move date ahead by a day
	cout << "Date after prefix-increment is: ";
	holiDay.DisPlayDate();
	
	--holiDay; // move date backwards by a day
	cout << "Date after a prefix-decrement is: ";
	holiDay.DisPlayDate();
	
	return 0;
}