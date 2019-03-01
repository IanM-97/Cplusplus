// Lab1Q15: Write a C++ Program to Check Whether a Number is Prime or Not
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int input, index;
	bool isPrime = true;

	cout << "Enter a positive integer: ";
	cin >> input;

	for (input = 2; index <= input / 2; ++index)
	{
		if (input % index == 0)
		{
			isPrime = false;
			break;
		}
	}
	if (isPrime)
		cout << input << "is a prime number.\n";
	else
		cout << input << "is not a prime number.\n";


	system("Pause");
	return 0;
}