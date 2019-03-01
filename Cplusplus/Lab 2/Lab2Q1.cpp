// Lab2Q1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	int index;
	int inputs[10] = { 45, 16, 1, -1, 100, -37, 79, -79, -8, 96 };

	cout << "The array is as follows:\n";

	for (index = 0; index < 10; index++)
	{
		cout << inputs[index] << " " ;
	}

	cout << "\n";

	system("Pause");
    return 0;
}

