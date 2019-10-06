#include <iostream>

using namespace std;

// ��������� �����, ���������� ����� ���� 
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

// ��������� �����, ���������� ����������� �����
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

// ��������� ����� �����, ���������� ������������ ��� ����
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

// ��������� ��� ���������� �����, ���������� ����� � ������������ ������ ����
int maxSumOfDigit(int number1, int number2)
{
	if (sumOfDigit(number1) > sumOfDigit(number2))
	{
		return number1;
	}
	return number2;
}

/* 
��������� ��� ���������� �����, ���������� 
1) �� �����, ���� ������������ ���� ������� ����� ����� ���� �������
2) �� ������������, ���� ����� ���� ������� ����� ������������ ���� �������
3) ������� �� ������� ������� �� ������ � ��������� �������
*/
int task1(int n1, int n2)
{
	int s1 = sumOfDigit(n1);
	int s2 = sumOfDigit(n2);
	int p1 = prodOfDigit(n1);
	int p2 = prodOfDigit(n2);

	if (s1 == p2)
	{
		return n2 * n1;
	}

	if (p1 == s2)
	{
		return n2 + n1;
	}

	return n1 % n2;
}

int main()
{
	cout << maxSumOfDigit(456, 650);
	return 0;
}