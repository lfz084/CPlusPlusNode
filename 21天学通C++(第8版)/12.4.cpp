#include <iostream>
using namespace std;

class Date
{
private:
	int day, month, year;
	string dateInString;
public:
	Date (int inMonth, int inDay, int inYear)
		:month(inMonth), day(inDay), year(inYear) {}
	
	Date operator + (int daysToAdd) // binary addition
	{
		Date newDate(month, day + daysToAdd, year);
		return newDate;
	}
	
	Date operator - (int daysToSub)
	{
		return Date(month, day - daysToSub, year);
	}
	
	void DisPlayDate()
	{
		cout << month << " / " << day << " / " << year << endl;
	}
};

int main()
{
	Date holiday(12, 25, 2016);
	cout << "holiday on: ";
	holiday.DisPlayDate();
	
	Date previousHoliday(holiday - 19);
	cout << "Previous Holiday on: ";
	previousHoliday.DisPlayDate();
	
	Date nextHoliday(holiday + 6);
	cout << "Next Holiday on: ";
	nextHoliday.DisPlayDate();
	
	return 0;
}
