﻿/*

*/

#include <iostream>

using namespace std;

	int main()
    {
		int number;
		int sumOf7_3 = 0;
		cin >> number;
		while (number != 0)
		{
			if(number % 7 == 0 && number % 10 == 3)
			{
				sumOf7_3 += number;
			}
			cin >> number;
		}
		cout << sumOf7_3;

    return 0;
    }
