#include <iostream>

using namespace std;

int main()
{
	int a, c;
	double b = 1;

	cin >> c;
	for (int i = 1; i <= c; ++i)
	{
		cin >> a;
	    b *= a;
	}

	cout << b;
	return 0;
}