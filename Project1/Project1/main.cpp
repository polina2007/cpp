#include <iostream>

using namespace std;

int sumOfDigit(int number)
{
	int e, d, s;

	e = number % 10;
	number /= 10; // number = number / 10
	d = number % 10;
	number /= 10;
	s = number % 10;

	return e + d + s;
}

int main()
{
	cout << sumOfDigit(125);
	return 0;
}