#include <iostream>
using namespace std;

int main()
{
	int original = 30;
	cout << "original = " << original << endl;
	cout << "original is at address: " << hex << &original << endl;
	
	int& refl = original;
	cout << "refl is at address: " << hex << &refl << endl;
	
	int& refl2 = refl;
	cout << "refl2 is at address: " << hex << &refl2 << endl;
	cout << "Therefore refl2 = " << dec << refl2 << endl;
	
	return 0;
}