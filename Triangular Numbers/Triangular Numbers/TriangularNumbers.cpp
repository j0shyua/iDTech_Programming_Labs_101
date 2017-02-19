#include <iostream>
#include <string>
using namespace std;

int main()
{
	int userInput = -1;

	do
	{
		cout << ("Please enter a positive integer.") << endl;
		cin >> userInput;
		cin.clear();
		cin.ignore(256, '\n');
	} 
	while ((cin.fail()) || (userInput <= 0));

	int finalSum = 0;

	for (int i = userInput; i > 0; i--)
	{
		finalSum = (finalSum + userInput);
		userInput--;
	}

	cout << ("The total is ") << finalSum << endl;
}