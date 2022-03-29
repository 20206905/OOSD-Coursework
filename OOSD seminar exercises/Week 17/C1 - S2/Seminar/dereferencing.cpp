#include <iostream>
using namespace std;

void main() {
	int* pointer;
	int pointed;

	pointed = 5;
	pointer = &pointed;

	cout << "pointer = " << *pointer << endl;


}