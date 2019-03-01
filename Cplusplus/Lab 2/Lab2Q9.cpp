// Lab2Q8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{

	int temp = 0;
	int index;
	int deleteplace;
	int inputs[12] = { -90, 69, -16, 17, 96, -72, -3, 23, -28, 75, 14, 99};


	cout << "The array before inserting is: \n";

	for (index = 0; index < 12; index++)
	{
		cout << inputs[index];
		cout << ", ";
	}

	cout << "\n";

	cout << "Where would you like to delete from? \n";
	cin >> deleteplace;
	deleteplace = deleteplace - 1;

	for (index = deleteplace; index < 11; ++index)
	{
		inputs[index] = inputs[index + 1];
	}
	inputs[11] = 0;

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

