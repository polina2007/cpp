#include <iostream>

using namespace std;

int main()
{
	int a, c;
	double b = 1;
	cin >> c;
	for (int i = 0; i < c; i++)
	{
		cin >> a;
		if (a % 7 == 0)
		{
			b *= a;
		}
    }
	cout << b;
	return 0;
}
