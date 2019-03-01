// Lab2Q2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	int index;
	int inputs[10] = { 45, 16, 1, -1, 100, -37, 79, -79, -8, 96 };

	cout << "The negative elements in the array are as follows:\n";

	for (index = 0; index < 10; index++)
	{
		if (inputs[index] < 0)
		{
			cout << inputs[index] << " ";
		}
	}

	cout << "\n";

	system("Pause");
	return 0;
}

