// c3e5.cpp - This program draws a rectangle n rows and m columns.
// The program asks the user to input a character for drawing the rectangle
#include<iostream>
using namespace std;
int main()
{
	int rows, columns;
	char draw_char;
	cout << "Enter number of rows and columns \n";
	cin >> rows >> columns;
	cout << "Enter the character to draw with \n";
	cin >> draw_char;
	for (int i = 0; i < rows; i++)
	{
		for (int j = columns; j > 0; j--)
		{
			cout << draw_char;
		}
		cout << endl;
	}
	return 0;
}