#include <iostream>

using namespace std;

int main()
{
	int startValue = 101;
	cout << "Start value of integer being operated: " << startValue << endl;
	
	int postfixIncrement = startValue++;
	cout << "Result of postfix Increment = " << postfixIncrement << endl;
	cout << "After postfix Increment, startValue = " << startValue << endl;
	
	startValue = 101;
	int profixIncrement = ++startValue;
	cout << "Result of profix Increment = " << profixIncrement << endl;
	cout << "After profix Increment, startValue = " << startValue << endl;
	
	startValue = 101;
	int postfixDecrement = startValue--;
	cout << "Result of postfix Decrement = " << postfixDecrement << endl;
	cout << "After postfix Decrement, startValue = " << startValue << endl;
	
	startValue = 101;
	int profixDecrement = --startValue;
	cout << "Result of profix Decrement = " << profixDecrement << endl;
	cout << "After profix Decrement, startValue = " << startValue << endl;
		
	return 0;
}