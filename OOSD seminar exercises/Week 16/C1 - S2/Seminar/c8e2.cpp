// c8e1.cpp - This program demonstrates the use of C-string functions

#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	char s1[8];
	char s2[8];
	char s3[16];
	int length1, length2;
	int count = 0;
	// Initialize the two strings
	strcpy_s(s1, "Black");
	strcpy_s(s2, "Black");
	while (count < 2)
	{
		if (count > 0)
			// After the first time ask the user to enter them
		{
			cout << "Now I let you enter two strings \n";
			cout << "Enter the first string, then the second\n";
			// Another way to initialize the two strings
			cin >> s1 >> s2;
		}
		// Find their lengths
		length1 = strlen(s1);
		length2 = strlen(s2);
		// Compare their length
		if (length1 == length2)
		{
			cout << "The two strings are the same length, are they the same? \n";
		}
		// See if they are the same
		if (!strcmp(s1, s2))
		{
			cout << "The two strings: ";
			cout << s1 << " and " << s2 << " are the same \n";
		}
		else
		{
			cout << "The two strings: ";
			cout << s1 << " and " << s2 << " are NOT the same \n";
		}
		count++;
	}
	
	return 0;
}