// Lab1Q10: Write a C++ Program to Generate Multiplication Table
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int input;

	cout << "Enter a positive number: ";
	cin >> input;

	for (int i = 1; i <= 12; ++i) {
		cout << input << " * " << i << " = " << input * i << endl;
	}
	system("Pause");
	return 0;
}