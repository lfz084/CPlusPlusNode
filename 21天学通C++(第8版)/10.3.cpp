#include <iostream>
using namespace std;

class Fish
{
protected:
	bool isFreshWaterFish;

public:
	Fish(bool isFishWater) : isFreshWaterFish(isFishWater) {}
	
	void Swin()
	{
		if(isFreshWaterFish)
			cout << "Swims in lake" << endl;
		else
			cout << "Swims in sea" << endl;
	}
};

class Tuna : public Fish
{
public:
	Tuna() : Fish(false) {}
};

class Carp : public Fish
{
public:
	Carp() : Fish(true) {}
};

int main()
{
	Carp myLunch;
	Tuna myDinner;
	
	cout << "About my food:" << endl;
	
	cout << "Lunch: ";
	myLunch.Swin();
	
	cout << "Dinner: ";
	myDinner.Swin();
	
	return 0;
}