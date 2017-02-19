#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

void printText(string printOut)
{
	string hello = printOut;
	int x = 0;
	while (hello[x] != '\0')
	{
		cout << hello[x];
		Sleep(85);
		x++;
	}
}

int main()
{
	printText ("Hi, welcome to my cave adventure game! You will make several decisions on where to go and try to exit \nthe cave quickly and safely.");
	cout << endl;

	printText("You enter a dark and mysterious cave.");


}