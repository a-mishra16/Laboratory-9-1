/*
* Program: Laboratory 9-1.cpp
* Author: Aanika Mishra
* Date: 10-31-2024
* Description: This program creates an array with 10 four digit random numbers shows even indexed elements,
* even value elements, elements in reversed order, and first and last elements.
*/

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
	srand(time(0));
	int values[11];

	cout << "The random integers: ";
	for (int i = 0; i < 10; i++)
	{
		values[i] = rand() % 9000 + 1000;
		cout << values[i] << "\t";
	}

	cout << "\nEven indicies:\t     ";
	for (int x = 0; x < 10; x++)
	{
		if (x % 2 == 0)
		{
			cout << values[x] << "\t";
		}
	}

	cout << "\nEven values:\t     ";
	for (int i = 0; i < 10; i++)
	{
		if (values[i] % 2 == 0)
		{
			cout << values[i] << "\t";
		}
	}

	
}

