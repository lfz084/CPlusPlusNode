#include <iostream>
using namespace std;

class Fish
{
private:
	bool isFreshWaterFish;
	
public:
	Fish(bool isFreshWater) : isFreshWaterFish(isFreshWater) {}
	
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
	
	void Swin()
	{
		cout << "Tuna swims real fast" << endl; 
	}
};

class Carp : public Fish
{
public:
	Carp() : Fish(true) {}
	
	void Swin()
	{
		cout << "Carp swims real slow" << endl;
		Fish::Swin();
	}
};

int main()
{
	Carp myLunch;
	Tuna myDinner;
	
	cout << "About my food:" << endl;
	
	cout << "Lunch: ";
	myLunch.Swin();
	
	cout << "Dinner: ";
	myDinner.Fish::Swin();
	
	return 0;
}