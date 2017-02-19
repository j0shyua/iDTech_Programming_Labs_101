#include <iostream>
#include <string>
using namespace std;

int main()
{
	string userInput;
	
	cout << ("List of characters: The Donald, The Soup Nazi, Julia Child") << endl;
	cout << ("Enter a character: ") << endl;
	getline (cin,userInput);	//Allows string comparison to ignore white space

	if (userInput == "The Donald")
	{
		cout << ("You're Fired!") << endl;
	}
	
	if (userInput == "The Soup Nazi")
	{
		cout << ("No Soup for You!") << endl;
	}
	
	if (userInput == "Julia Child")
	{
		cout << ("Needs more butter!!!") << endl;
	}
}