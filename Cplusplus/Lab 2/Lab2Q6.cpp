// Lab2Q6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	int index, numOfOdd = 0, numOfEvens = 0;
	int inputs[10] = { 45, 16, 1, -1, 100, -37, 79, -79, -8, 96 };

	for (index = 0; index < 10; index++)
	{
		if (inputs[index] % 2 == 0)
		{
			numOfEvens++;
		}
		if (inputs[index] % 2 != 0)
		{
			numOfOdd++;
		}
	}


	cout << "The number of evens is: " << numOfEvens << "\n";
	cout << "The number of odds is: " << numOfOdd;
	cout << "\n";

	system("Pause");
	return 0;
}

