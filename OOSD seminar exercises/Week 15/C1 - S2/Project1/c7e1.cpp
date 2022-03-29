// c7_e1.cpp - A program that uses an array of integers
#include <iostream>
using namespace std;
int main(void)
{
	int numlist[8], i;
	// Read 8 integers from the keyboard
	for (i = 0; i < 8; i++)
	{
		cout << "Enter value #" << i + 1 << ": ";
		cin >> numlist[i];
	}
	// Display the numbers in a reverse order
	for (i = 8; i > 0; i--)
	{
		cout << "Value #" << i << ": ";
		cout << numlist[i - 1] << endl;  //Pay attention to i - 1!
	}
	return 0;
}