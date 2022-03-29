#include<stdio.h>
#include <iostream>
using namespace std;

void swapXY(int& x, int& y);

void main() {
	int x;
	int y;
	cout << "Please enter two numbers seperated by a space: ";
	cin >> x >> y;
	cout << endl;
	cout << "x is equal to " << x << endl;
	cout << "y is equal to " << y << endl;
	swapXY(x, y);
	cout << "After the swap, x is equal to " << x << endl;
	cout << "And y is equal to " << y << endl;
}

void swapXY(int& x, int& y) {
	int temp;
	temp = x;
	x = y;
	y = temp;
}