#include <iostream>

using namespace std;

int main()
{
	int a, b, c, b1;
	double b2;
	b = INT_MIN;
	b1 = INT_MAX;
	b2 = 0;

	cin >> c;

	for (int i = 1; i <= c; ++i)
	{
		cin >> a;
		if ( b < a)
		{
			b = a;
		}
	    if (b1 > a)
	    {
		    b1 = a;
	    }
		b2 += a;
}
	cout <<(b + b1)/2 - b2 /c;
	return 0;
}