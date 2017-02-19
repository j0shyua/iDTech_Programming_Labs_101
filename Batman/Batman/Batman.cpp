#include <iostream>
using namespace std;

int main()
{
	int pointsUser = 0;
	int pointsBatman = 0;
	int userInput;

	cout << ("Who would win in a fight, you or Batman?") << endl;
	cout << ("Answer the following questions, and this program will tell you!") << endl;

	cout << ("On a scale of one to ten, how strong are you?") << endl;
	cin >> userInput;
	if (userInput > 7)
	{
		pointsUser += 1;
	}
	else
	{
		pointsBatman += 1;
	}

	cout << ("On a scale of 1 - 10, how tactical a planner are you?") << endl;
	cin >> userInput;
	if (userInput <= 8)
	{
		pointsBatman += 1;
	}
	else
	{
		pointsUser += 1;
	}

	char userYN;
	cout << "Would you be scared of a giant bat flying at you? (y/n)" << endl;
	cin >> userYN;
	if (userYN != 'n')
	{
		pointsBatman += 1;
	}
	else
	{
		pointsUser += 1;
	}
}