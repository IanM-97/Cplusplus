// lab2q14.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


	int getPairsCount(int inputs[], int n, int product)
	{
		int count = 0; 

		for (int index = 0; index < n; index++)
		{
			for (int j = index + 1; j < n; j++)
				if (inputs[index] * inputs[j] == product)
					count++;
		}
		return count;
	}

	int main()
	{
		int product;

		int inputs[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
		int n = sizeof(inputs) / sizeof(inputs[0]);
		cout << "What is the product result?\n";
		cin >> product;
		cout << "Count of pairs is "
			<< getPairsCount(inputs, n, product);
		cout << "\n";

	system("pause");
	return 0;
}

