#include <iostream>
using namespace std;

class Date
{
private:
	int day, month, year;
public:
	Date(int inMonth, int inDay, int Year)
		: month(inMonth), day(inDay), year(inDay) {}
		
	bool operator == (const Date& compareTo)
	{
		return ((day == compareTo.day)
			&& (month == compareTo.month)
			&& (year == compareTo.year));
	}
	
	bool operator != (const Date& compareTo)
	{
		return !(this->operator==(compareTo));
	}
	
	void DisPlayDate()
	{
		cout << month << " / " << day << " / " << year << endl;
	}
};

int main()
{
	Date holiday1(12, 25, 2016);
	Date holiday2(12, 31, 2016);
	
	cout << "holiday1 is: ";
	holiday1.DisPlayDate();
	cout << "holiday2 is: ";
	holiday2.DisPlayDate();
	
	if (holiday1 == holiday2)
		cout << "Equality operator: the two are on the same day" << endl;
	else
		cout << "Equality operator: the two are on different days" << endl;
		
	if(holiday1 != holiday2)
		cout << "Inequality operator: the two are on different days" << endl;
	else
		cout << "Inequality operator: the two are on the same day" << endl;
	
	return 0;
}