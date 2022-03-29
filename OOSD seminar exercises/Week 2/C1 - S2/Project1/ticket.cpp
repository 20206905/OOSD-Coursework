// ticket.cpp - This C++ Program will compute the cost of a ticket depending on your age.
#include <iostream>
using namespace std;
int main()
{
	int age;
	cout << "Please enter your age: ";
	cin >> age;
	if (age <= 8 || age > 65) {
		cout << "\nThe ticket will cost you $6\n";
	}
	else {
		cout << "\nThe ticket will cost you $12\n";
	}
	return 0;
}