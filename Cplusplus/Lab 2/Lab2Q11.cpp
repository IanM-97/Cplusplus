// lab2q11.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int dupes = 0;
	int inputs[12] = { -90, 69, -16, 17, 96, -72, -3, 23, -28, 75, 14, -90 };

	for (int i = 0; i < 12; i++)
	{
		int found = 0;
		for (int j = 0; j < i; j++)
		{
			if (inputs[i] == inputs[j])
			{
				found++;
			}
		}

		if (found == 0)
		{
			int count = 1;
			for (int j = i + 1; j < 12; j++)
			{
				if (inputs[i] == inputs[j])
				{
					count++;
					if (count > 1)
					{
						dupes++;
					}
				}
			}

		}
	}

	cout << "Number of duplicates in array is: " << dupes << "\n";

	system("pause");
	return 0;
}

