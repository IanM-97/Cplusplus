// Lab1Q17: Write a C++ Program to convert chars 0-9 input from the keyboard into an integer number.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	char input;

	cout << "Enter a number between 1 and 9: ";
	cin >> input;


	int output = (int)input - 48;

	cout << "The input was " << output;

	system("Pause");
	return 0;

}

