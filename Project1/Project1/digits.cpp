// ��������� ���������� �����, ���������� ����� ���� 
int sumOfDigit3(int number)
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
int invertedNumber3(int number)
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
int prodOfDigit3(int number)
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
int maxSumOfDigit3(int number1, int number2)
{
	if (sumOfDigit3(number1) > sumOfDigit3(number2))
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
	int s1 = sumOfDigit3(n1);
	int s2 = sumOfDigit3(n2);
	int p1 = prodOfDigit3(n1);
	int p2 = prodOfDigit3(n2);

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

/*
�������� ��� �����, ���������� � �������������.
���������� ����� � ������� ������������� ����.
*/
int maxProdOfDigit(int a, int b)
{
	int const number1 = a;
	int const number2 = b;
	int e1, d1, s1;
	e1 = a % 10;
	a /= 10; // number = number / 10
	d1 = a % 10;
	a /= 10;
	s1 = a % 10;

	int e2, d2, s2, t2;
	e2 = b % 10;
	b /= 10; // number = number / 10
	d2 = b % 10;
	b /= 10;
	s2 = b % 10;
	b /= 10;
	t2 = b % 10;

	int product1 = e1 * d1 * s1;
	int product2 = e2 * d2 * s2 * t2;
	if (product1 > product2)
	{
		return number1;
	}
	return number2;
}

/*
��������� ����������� �����, ���������� ����� ��� ����
*/
int sumOfDigit(int n)
{
	int sum = 0;
	while (n != 0)
	{
		sum += n % 10;
		n /= 10;
	}
	return sum;
}

/*
��������� ����������� �����, ���������� ��������� ���� � �����
*/
int lengthOfNumber(int n)
{
	int count = 0;
	while (n != 0)
	{
		++count;
		n /= 10;
	}
	return count;
}

/*
��������� ����������� �����(���������� ���� ����������), ���������� ������������ ��� ����
*/
int prodOfDigit(int n)
{
	int product = 1;
	while (n != 0)
	{
		product *= n % 10;
		n /= 10;
	}
	return product;
}

/*
��������� ������������� �����, ���������� ����������� �����
*/
int invertedNumber4(int n)
{
	int e, d, s, x;

	e = n % 10;
	n /= 10;
	d = n % 10;
	n /= 10;
	s = n % 10;
	n /= 10;
	x = n % 10;

	return e * 1000 + d * 100 + s * 10 + x;
}

/*
��������� ����������� �����, ���������� ������������ ������ ���� �����
*/
int prodOfEvenDigit(int n)
{
	int prod = 1;
	while (n != 0)
	{
		int digit = n % 10;
		if (digit % 2 == 0)
		{
			prod *= digit;
		}
		n /= 10;
	}
	return prod;
}

/*
��������� ����������� �����, ���������� ����� �������� ���� �����
*/
int sumOfOddDigit(int n)
{
	int sum = 0;
	while (n != 0)
	{
		int digit = n % 10;
		if (digit % 2 == 1)
		{
			sum += digit;
		}
		n /= 10;
	}
	return sum;
}


/*
��������� ����������� �����, ���������� ����� ����, ������� 3
*/
int task1(int n)
{
	int sum = 0;
	while (n != 0)
	{
		int digit = n % 10;
		if (digit % 3 == 0)
		{
			sum += digit;
		}
		n /= 10;
	}
	return sum;
}

/*
�������� ��� �����, ���������� � �������������.
���������� �����, ���������� ������������� ������� � ������� ������(��������, ���� ������ 123 � 4567, �� ��������� ���������� - 1234567).
*/
int numbersGluing(int a, int b)
{
	return 10000 * a + b;
}


/*
��������� ����������� �����(���������� ���� ����������), ���������� ������������ �����
*/
int maxDigit(int n)
{
	int maxDigit = 0;
	while (n != 0)
	{
		int digit = n % 10;
		if (digit > maxDigit)
		{
			maxDigit = digit;
		}
		n /= 10;
	}

	return maxDigit;
}

/*
��������� ����������� �����(���������� ���� ����������), ���������� ����������� �����
*/
int minDigit(int n)
{
	int minDigit = 9;
	while (n != 0)
	{
		int digit = n % 10;
		if (digit < minDigit)
		{
			minDigit = digit;
		}
		n /= 10;
	}

	return minDigit;
}

/*
��������� ����������� �����(���������� ���� ����������), ���������� ����������� ������ �����
*/
int minDigit2(int n)
{
	int minDigit = 9;
	while (n != 0)
	{
		int digit = n % 10;
		if (digit < minDigit && digit % 2 == 0)
		{
			minDigit = digit;
		}
		n /= 10;
	}

	if (minDigit == 9)
	{
		return -1;
	}
	else
	{
		return minDigit;
	}
}

/*
��������� ����������� �����(���������� ���� ����������), ���������� ������������ �����, ������� 7
*/
int maxDigit7(int n)
{
	int maxDigit = 0;
	while (n != 0)
	{
		int digit = n % 10;
		if (digit > maxDigit && digit % 7 == 0)
		{
			maxDigit = digit;
		}
		return maxDigit;
	} 
}