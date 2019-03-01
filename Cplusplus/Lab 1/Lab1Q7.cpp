// Lab1Q7: Write a C++ Program to Check Whether a character is Vowel or Consonant.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	char input;

	cout << "Enter a letter: ";
	cin >> input;

	if (input == 'a' || input == 'e' || input == 'i' || input == 'o' || input == 'u' || input == 'A' || input == 'E' || input == 'I' || input == 'O' || input == 'U')

		cout << input << " is a vowel.\n";

	else

		cout << input << " is a consonant.\n";


	system("Pause");
	return 0;
}