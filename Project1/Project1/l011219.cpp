#include <iostream>

using namespace std;

int task1(int n)
{
	int s = 0;
	for (int i = 1; i <= n; ++i)
	{
		s += i;
	}
	return s;
}

void task2()
{
	int n;
	cin >> n;
	if (n % 2 == 0)
	{
		cout << "da";
	}
	else
	{
		cout << "net";
	}
}

void task3()
{
	int n;
	cin >> n;
	int s = 0;
	while (n != 0)
	{
		int d = n % 10;
		s += d;
		n /= 10;
	}
	cout << s;
}