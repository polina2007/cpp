#include <iostream>

using namespace std;

int main()
{
	// ������������ ������ ����������� �����, ������� ������������ �������� ��������������� ��� ������ ���� � �������� ��������������� ��� �������� ���� //
	int number;
	cin >> number;
	double sumOfEven = 0;
	int amountOfEven = 0;
	double sumOfOdd = 0;
	int amountOfOdd = 0;

	while (number != 0)
	{
		int currentDigit = number % 10;
		if (currentDigit % 2 == 0)
		{
			sumOfEven += currentDigit;
			++amountOfEven;
		}
		if(currentDigit % 2 == 1)
			{
			sumOfOdd += currentDigit;
			++amountOfOdd;
			}
		number /= 10;

	}

	cout << (sumOfOdd / amountOfOdd) * (sumOfEven / amountOfEven);
	return 0;
}
