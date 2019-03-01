// Lab1Q16: Write a C++ Program to Convert Binary Number to Decimal and vice-versa
//


#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	int input;
	int choice;
	int output = 0;
	int remainder;


	cout << "Would you like to convert from: \n 1)Binary to Decimal \n 2)Decimal to Binary\n Please choose either 1 or 2: " ;
	cin >> choice;

	if (choice == 1) //Binary to Decimal
	{
		cout << "Enter a Binary Number: \n";
		cin >> input;

		int index = 0;

		while (input != 0)
		{
			remainder = input % 10;
			input /= 10;
			output += remainder * pow(2, index);
			++index;
		}

	}
	if (choice == 2) //Decimal to Binary
	{
		cout << "Enter a Decimal Number: \n";
		cin >> input;

		int index = 1;

		while (input != 0)
		{
			remainder = input % 2;
			input /= 2;
			output += remainder * index;
			index *= 10;
		}
	}
	

	cout << "The converted number is " << output << "\n";

	system("Pause");
    return 0;
}

