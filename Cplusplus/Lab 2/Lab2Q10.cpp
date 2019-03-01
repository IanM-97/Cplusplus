// Lab2Q10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{

	int index;
	int count;
	int j;
	int inputs[12] = { -90, 69, -16, 17, 96, -72, -3, 23, -28, 75, 14, -90 };

	cout << "The array is: \n";

	for (index = 0; index < 12; index++)
	{
		cout << inputs[index];
		cout << ", ";
	}

	cout << "\n";

	int seen[10];
	for (int index = 0; index < 12; index++)
	{
		seen[index] = 0;
	}

	for (int index = 0; index < 12; index++) 
	{
		if (seen[index] == 0) 
		{
			int count = 0;
			for (int j = index; j < 12; j++)
				if (inputs[j] == inputs[index]) 
				{
					count += 1;
					seen[j] = 1;
				}
			cout << inputs[index] << " occurs " << count << " times" << "\n";
		}
	}
	system("Pause");
	return 0;
}

