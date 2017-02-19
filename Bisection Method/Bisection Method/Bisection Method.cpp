#include <iostream>
#include <string>
#include <math.h>

using namespace std;

double Find_Y_Value(double value)
{
	return ((log10(25)*(value)) - 10);
}

int main()
{
	// Declare a, b, and m
	double a = 6.0;
	double b = 8.0;
	double m = 0.0;
	
	// FUNCTION: f(x) = x*log(25) -10

	while (b - a > 0.001)
	{
		
		m = ((a + b) / 2);

		if (Find_Y_Value(a) > 0 && Find_Y_Value(m) > 0)
		{
			a = m;
		}
		
		if (Find_Y_Value(b) > 0 && Find_Y_Value(m) > 0)
		{
			b = m;
		}
		
		if (Find_Y_Value(b) < 0 && Find_Y_Value(m) < 0)
		{
			b = m;
		}
		
		if (Find_Y_Value(a) < 0 && Find_Y_Value(m) < 0)
		{
			a = m;
		}

	}

	// Print the value of the intecept
	cout << ("The x-intercept is ") << m << endl;
}