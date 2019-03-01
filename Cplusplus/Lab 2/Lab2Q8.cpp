// Lab2Q8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{

	int index;
	int newinput;
	int newplace;
	int inputs[12] = { -90, 69, -16, 17, 96, -72, -3, 23, -28, 75, 14};

	
	cout << "The array before inserting is: \n";

	for (index = 0; index < 12; index++)
	{
		cout << inputs[index];
		cout << ", ";
	}

	cout << "\n";

	cout << "What number would you like to input? \n";
	cin >> newinput;

	cout << "Where would you like to input it? \n";
	cin >> newplace;

	for (index = 11; index >= newplace; index--)
	{
		inputs[index + 1] = inputs[index];
	}

	inputs[index + 1] = inputs[index];
	inputs[index] = newinput;

	cout << "The array after inserting is: \n";

	for (index = 0; index < 12; index++)
	{
		cout << inputs[index];
		cout << ", ";
	}
	
	cout << "\n";

	system("Pause");
	return 0;
}

