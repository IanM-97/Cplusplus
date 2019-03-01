// lab2q13.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int index;
	int count = 12;
	int temp;
	int inputs[12] = { -90, 69, -16, 17, 96, -72, -3, 23, -28, 75, 14, -90 };

	temp = inputs[0];
	for (int index = 0; index < 12 - 1; index++)
	{
		inputs[index] = inputs[index + 1];
	}
	inputs[12 - 1] = temp;


	cout << "The array after left shift is: \n";

	for (index = 0; index < 12; index++)
	{
		cout << inputs[index];
		cout << ", ";
	}

	cout << "\n";

	system("pause");
	return 0;
}

