// Lab1Q14: Write a C++ Program to Check Whether a Number is Palindrome or Not
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int input, num, digit, rev = 0;

	cout << "Enter a positive number: ";
	cin >> num;

	input = num;

	do
	{
		digit = num % 10;
		rev = (rev * 10) + digit;
		num = num / 10;
	} while (num != 0);

	if (input == rev)
		cout << " The number is a palindrome.\n";
	else
		cout << " The number is not a palindrome.\n";


	system("Pause");
	return 0;
}