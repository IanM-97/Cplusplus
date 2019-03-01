// Lab1Q11: Write a C++ Program to Reverse a Number. Number is an int.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int input, reversedNumber = 0, remainder;

	cout << "Enter an integer: ";
	cin >> input;

	while (input != 0)
	{
		remainder = input % 10;
		reversedNumber = reversedNumber * 10 + remainder;
		input /= 10;
	}

	cout << "Reversed Number = " << reversedNumber << "\n" ;


	system("Pause");
	return 0;
}