#include <iostream>
#include <string>

using namespace std;

void stringChanger(string aString);

void stringChanger(string aString)
{
	aString = "New";
}

int main()
{
	string testString = "Old";

	cout << "The string is " << testString << endl;

	stringChanger(testString);

	cout << "The string is " << testString << endl;
}