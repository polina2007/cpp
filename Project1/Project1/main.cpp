#include <iostream>
#include "l081219.h"

using namespace std;

int main()
{
	int n;
	int k = 0;
	cin >> n;
	while (n != 0)
	{
		++k;
		n /= 10;
	}
	cout << k;
	return 0;
}