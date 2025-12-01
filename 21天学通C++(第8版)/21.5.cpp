#include <vector>
#include <iostream>
#include <algorithm>

template<typename elementType>
class Multiply
{
public:
	elementType operator() (const elementType& elem1, const elementType& elem2)
	{
		return (elem1 * elem2);
	}
};

int main()
{
	using namespace std;
	
	vector<int> multiplicands{0, 1, 2, 3, 4};
	vector<int> multipliers{100, 101, 102, 103, 104};
	
	// A third container that holds the result of multiplication
	vector<int> vecResult;
	
	// Make space for the result of the multiplication
	vecResult.resize(multipliers.size());
	transform(multiplicands.begin(),	// range of multiplicands
				multiplicands.end(),	// end range
				multipliers.begin(),	// multiplier values
				vecResult.begin(),		// holds result
				Multiply<int>());		// multiplies
	
	cout << "The contents of the first vector are: " << endl;
	for(size_t index = 0; index < multiplicands.size(); ++index)
		cout << multiplicands[index] << ' ';
	cout << endl;
	
	cout << "The contents of the second vector are: " << endl;
	for(size_t index = 0; index < multipliers.size(); ++index)
		cout << multipliers[index] << ' ';
	cout << endl;
	
	cout << "The result of the multiplication is: " << endl;
	for(size_t index = 0; index < vecResult.size(); ++index)
		cout << vecResult[index] << ' ';
	cout << endl;
	
	return 0;
}