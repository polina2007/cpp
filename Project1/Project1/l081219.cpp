#include "l081219.h"
#include <iostream>

using namespace std;

void task1()
{
	int n;
	cin >> n;
	int a, b, c, d;
	d = n % 10;
	n /= 10;
	c = n % 10;
	n /= 10;
	b = n % 10;
	n /= 10;
	a = n % 10;
	if (a == d && b == c) // && - и  || - или
	{
		cout << "yes";
	}
	else
	{
		cout << "no";
	}
}

void task2()
{
	int n;
	cin >> n;
	int a, b, c, d;
	d = n % 10;
	n /= 10;
	c = n % 10;
	n /= 10;
	b = n % 10;
	n /= 10;
	a = n % 10;

	cout << (d * 1000 + c * 100 + b * 10 + a) * 2;
}