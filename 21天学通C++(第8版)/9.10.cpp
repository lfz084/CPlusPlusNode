#include <iostream>
#include <string>
using namespace std;

class President
{
private:
	President();
	President(const President&);
	const President& operator= (const President&);
	string name;
public:
	static President& GetInstance()
	{
		static President onlyInstance;
		return onlyInstance;
	}
	
	string GetName()
	{
		return name;
	}
	
	void SetName(string inputName)
	{
		name = inputName;
	}
};

int main()
{
	President& onlyPresident = President::GetInstance();
	onlyPresident.SetName("Abraham lincoln");
	
	// uncomment lines to see how compile failures prohibit duplicates
	// President second;						// canot access constructor
	// President* third = new President();		// canot access constructor
	// President fourth = onlyPresident;		// canot access copy constructor
	// onlyPresident = President::GetInstance();// canot access operator=
	
	cout << "The name of the President is: ";
	cout << onlyPresident.GetName() << endl;
	
	return 0;
}