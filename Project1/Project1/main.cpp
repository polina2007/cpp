#include <iostream>

using namespace std;

int main()
{
	int a, c, d, e;
	double b = 0;
	double f = 0;
	cin >> c;
	d = 0;
	e = 0;

	for (int i = 1; i <= c; ++i)
	{
		cin >> a;
		if (a % 2 == 0)
		{
			d += 1;
			b += a;
		}
		if (a % 2 == 1)
		{
			e += 1;
			f += a;
		}
	}
		if (d > e)
		{
			cout << b;
		}
		if (e > d)
		{
			cout << f;
		}
		if (d == e)
		{
			cout << f + b;
		}
	return 0;
}