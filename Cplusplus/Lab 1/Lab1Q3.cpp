// Lab1Q3: 3.	Write a C++ Program to Add Two Numbers
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	int input1;
	int input2;
	cout << "Enter a number: ";
	cin >> input1;
	cout << "Enter a number: ";
	cin >> input2;

	int sum = input1 + input2;
	cout << "The sum of " << input1 << " and " << input2 << " is " << sum << "\n";
	system("pause");
	return 0;
}

