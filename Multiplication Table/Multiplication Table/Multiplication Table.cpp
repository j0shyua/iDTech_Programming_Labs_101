#include <iostream>
#include <string>

using namespace std;

int main()
{
	cout << "  ";
	for (int y = 1; y < 21; y++)
	{
		cout << y << (" ");
	}

	cout << endl;

	for (int i = 1; i < 21; i++)
	{		

		cout << i << " ";

		for (int j = 1; j < 21; j++)
		{
			cout << i*j << (" ");
		}

		cout << endl;
	}
}