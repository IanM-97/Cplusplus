// Lab1Q8: Write a C++ Program to Find Largest Number Among Three Numbers
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	int number1, number2, number3;

	cout << "Enter number 1: ";
	cin >> number1;

	cout << "Enter number 2: ";
	cin >> number2;

	cout << "Enter number 3: ";
	cin >> number3;


	if (number1 >= number2 && number1 >= number3)
	{
		cout << "Largest number: " << number1 << "\n";
	}

	if (number2 >= number1 && number2 >= number3)
	{
		cout << "Largest number: " << number2 << "\n";
	}

	if (number3 >= number1 && number3 >= number2) {
		cout << "Largest number: " << number3 << "\n";
	}

	system("Pause");
    return 0;
}

