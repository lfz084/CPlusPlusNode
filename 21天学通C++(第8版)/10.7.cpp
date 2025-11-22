#include <iostream>
using namespace std;

class FishDummyMember
{
public:
	FishDummyMember()
	{
		cout << "FishDummyMember constructor" << endl;
	}
	
	~FishDummyMember()
	{
		cout << "FishDummyMember destructor" << endl;
	}
};

class Fish
{
protected:
	FishDummyMember dummy;
public:
	Fish()
	{
		cout << "Fish constructor" << endl;
	}
	
	~Fish()
	{
		cout << "Fish destructor" << endl;
	}
};

class TunaDemmyMember
{
public:
	TunaDemmyMember()
	{
		cout << "TunaDemmyMember constructor" << endl;
	}
	
	~TunaDemmyMember()
	{
		cout << "TunaDemmyMember destructor" << endl;
	}
};

class Tuna : public Fish
{
private:
	TunaDemmyMember dummy;
public:
	Tuna()
	{
		cout << "Tuna constructor" << endl;
	}
	
	~Tuna()
	{
		cout << "Tuna destructor" << endl;
	}
};

int main()
{
	Tuna myDinner;
	return 0;
}
