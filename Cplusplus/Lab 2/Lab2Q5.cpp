// Lab2Q5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	int index, max = -100, secondbiggest = -100;
	int inputs[10] = { 45, 16, 1, -1, 100, -37, 79, -79, -8, 96 };

	for (index = 0; index < 10; index++)
	{
		if (inputs[index] > max)
		{
			max = inputs[index];
		}
		if (inputs[index] > secondbiggest && inputs[index] < max)
		{
			secondbiggest = inputs[index];
		}
	}


	cout << "The max is: " << max << "\n";
	cout << "The second biggest is: " << secondbiggest;
	cout << "\n";

	system("Pause");
	return 0;
}

