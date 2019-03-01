// Lab2Q3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	int index;
	int inputs[10] = { 45, 16, 1, -1, 100, -37, 79, -79, -8, 96 };
	bool there;
	int search;

	cout << "Enter the number you would like to search for: ";
	cin >> search;

	for (index = 0; index < 10; index++)
	{
		if (inputs[index] == search)
		{
			there = true;
			break;
		}
		else if(inputs[index] != search)
		{
			there = false;
			
		}
	}

	if (there == true)
	{
		cout << "The inputted number is at position " << index ;
	}
	else if (there == false)
	{
		cout << "-1";
	}

	cout << "\n";

	system("Pause");
	return 0;
}

