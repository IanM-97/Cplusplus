// Lab1Q5: 5.	Write a C++ Program to Swap Two Numbers
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int a; 
	int b;
	int temp;

	cout << "Enter number A:\n";
	cin >> a;
	cout << "Enter number B:\n";
	cin >> b;

	cout << "Before swapping." << endl;
	cout << "a = " << a << ", b = " << b << endl;

	temp = a;
	a = b;
	b = temp;

	cout << "\nAfter swapping." << endl;
	cout << "a = " << a << ", b = " << b << endl;


	system("pause");
	return 0;

	
}