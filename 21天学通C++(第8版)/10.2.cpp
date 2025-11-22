#include <iostream>
using namespace std;

class Fish
{
protected:

	bool isFreshWaterFish;
	
public:
	
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
	
	// uncomment line below to see that protected members
	// are not accseeible from outside the class hirarchy
	// myLunch.isFreshWaterFish = false;
	
	return 0;
}