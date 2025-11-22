#include <iostream>
using namespace std;

class Fish
{
public:
	bool isFreshWaterFish;
	
	void Swin()
	{
		if (isFreshWaterFish)
			cout << "Swims in lake" << endl;
		else
			cout << "Swims in sea" << endl;
	}
};

class Tuna: public Fish
{
public:
	Tuna()
	{
		isFreshWaterFish = false;
	}
};

class Carp: public Fish
{
public:
	Carp()
	{
		isFreshWaterFish = true;
	}
};

int main()
{
	Carp myLunch;
	Tuna myDinner;
	
	cout << "Aboat my food:" << endl;
	
	cout << "Lunch: ";
	myLunch.Swin();
	
	cout << "Dinner: ";
	myDinner.Swin();
	
	return 0;
}