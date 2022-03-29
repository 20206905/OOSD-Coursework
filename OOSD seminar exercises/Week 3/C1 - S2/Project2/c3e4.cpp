// c3e2.cpp - A simple elevator for 4 floors and a basement with a
// close door button and 5 keys for floors
#include<iostream>
#include<cmath>
using namespace std;
void close_door();
int change_floor(int choice, int floor);
int main()
{
	int key;
	int floor = 0;
	cout << "Press a Key \n";
	cin >> key;
	switch (key) {
		case '0':
			close_door();
			if (floor != 0) // otherwise nothing happens
			{
				cout << "I am moving to the Basement \n";
				floor = change_floor(0, floor);
			}
			break;
		case '1':
			close_door();
			if (floor != 1) // otherwise nothing happens
			{
				cout << "I am moving to the First Floor \n";
				floor = change_floor(1, floor);
			}
			break:
		case '2':
			close_door();
			if (floor != 2) // otherwise nothing happens
			{
				cout << "I am moving to the Second Floor \n";
				floor = change_floor(2, floor);
			}
			break:
		case '3':
			close_door();
			if (floor != 3) // otherwise nothing happens
			{
				cout << "I am moving to the Third Floor \n";
				floor = change_floor(3, floor);
			}
			break:
		case '4':
			close_door();
			if (floor != 4) // otherwise nothing happens
			{
				cout << "I am moving to the Fourth Floor \n";
				floor = change_floor(4, floor);
			}
			break;
		default:
			close_door();
	}
	return 0;
}

void close_door()
{
	cout << "I am closing the door \n";
}

int change_floor(int choice, int floor)
{
	int move;
	move = floor - choice;
	// Note floor - choice is already considered in main
	if (move < 0)
	{
		cout << "Move up by " << abs(move) << endl;
	}
	else
	{
		cout << "Move down by " << abs(move) << endl;
	}
	floor = choice;
	cout << "You are at floor " << floor << endl;
	return floor;
}