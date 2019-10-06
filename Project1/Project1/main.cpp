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

int invertedNumber(int number)
{
	int e, d, s;
	
	e = number % 10;
	number /= 10;
	d = number % 10;
	number /= 10;
	s = number % 10;

	return e * 100 + d * 10 + s;
}

int prodOfDigit(int number)
{
	int e, d, s;

	e = number % 10;
	number /= 10; // number = number / 10
	d = number % 10;
	number /= 10;
	s = number % 10;

	return e * d * s;
}

int maxSumOfDigit(int number1, int number2)
{
	if (sumOfDigit(number1) > sumOfDigit(number2))
	{
		return number1;
	}
	else
	{
		return number2;
	}
}

int main()
{
	cout << prodOfDigit(456);
	return 0;
}