#include <fstream>
#include <iostream>
using namespace std;

int main()
{
	ofstream myFile;
	myFile.open("HelloFile.txt", ios_base::out);
	
	if(myFile.is_open())
	{
		cout << "File open successful" << endl;
		
		myFile << "my first text file!" << endl;
		myFile << "Hello file!" << endl;
		
		cout << "Finished wirting to file, will close now." << endl;
		myFile.close();
	}
	
	return 0;
}