// Lab1Q6: Write a C++ Program to Check Whether Number is Even or Odd
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
using namespace std;


int main()
{
	int n;

	cout << "Enter an integer: ";
	cin >> n;

	if (n % 2 == 0)
		cout << n << " is even.\n";
	else
		cout << n << " is odd.\n";

	system("pause");
}

