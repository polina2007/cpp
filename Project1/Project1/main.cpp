#include <iostream>

using namespace std;

int main()
{
	int a, b, c, d;
	b = INT_MIN;
	d = INT_MAX;
	int k = 0;
	int m = 0;

	cin >> c;

	for (int i = 1; i <= c; ++i)
	{
		cin >> a;
		if (a % 3 == 0 && d > a)
		{ 
		d = a;
		++k;
		}
		if (a % 7 == 0 && b < a)
		{
		b = a;
		++m;
		}
	}
	if (k > 0 && m > 0)
	{
		cout << b - d;
	}
	else
	{
		cout << "what???";
	}
	return 0;
}
