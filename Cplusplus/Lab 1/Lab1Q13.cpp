// Lab1Q13: Write a C++ Program to Multiply two Numbers
//

#include "stdafx.h"
using namespace std;
#include <iostream>


int main()
{
	int input1;
	int input2;
	int sum;

	cout << "Enter first number: ";
	cin >> input1;

	cout << "Enter the second number: ";
	cin >> input2;

	sum = input1 * input2;

	cout << "The multiplication of " << input1 << " and " << input2 << " is " << sum << "\n";

	system("Pause");
    return 0;
}

