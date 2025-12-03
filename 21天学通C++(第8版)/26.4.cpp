#include <iostream>
#include <memory>	// include this to use std::unique_ptr
using namespace std;

class Fish
{
public:
	Fish() { cout << "Fish constructed" << endl; }
	~Fish() { cout << "Fish destructed" << endl; }
	
	void Swim() const { cout << "Fish swims in water" << endl; }
};

void MakeFishSwim(const unique_ptr<Fish>& inFish)
{
	inFish->Swim();
}

int main()
{
	unique_ptr<Fish> smartFish(new Fish);
	
	smartFish->Swim();
	MakeFishSwim(smartFish);	// OK, as MakeFishSwim accepts reference
	
	unique_ptr<Fish> copySmartFish;
	// copySmartFish = smartFish;	// error: operator= is private
	
	return 0;
}