#include <iostream>
using namespace std;

void main() {

	int x[5] = { 2, 7, 8, 3, 2};

	int total = 0;

	int* ptr;

	ptr = &x[0];
	total += *ptr;

	ptr = &x[1];
	total += *ptr;

	ptr = &x[2];
	total += *ptr;

	ptr = &x[3];
	total += *ptr;

	ptr = &x[4];
	total += *ptr;

	cout << total;
}