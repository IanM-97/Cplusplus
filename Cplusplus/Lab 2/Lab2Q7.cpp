// Lab2Q7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	int index;
	int inputs[20] = {-90, 69, -16, 17, 96, -72, -97, -3, 23, -28, 75,  81, 98, -88, -18, 95, 92, -12, 24, -75 };
	int outputs[20];

	for (index = 0; index < 10; index++)
	{
		outputs[index] = inputs[index];
	}

	cout << "The first array is: \n";

	for (index = 0; index < 10; index++)
		{
			cout << inputs[index] << " ";
		}
	cout << "\n";

	cout << "The second array is: \n";

	for (index = 0; index < 10; index++)
		{
			cout << outputs[index] << " ";
		}
	cout << "\n";

	system("Pause");
	return 0;
}

