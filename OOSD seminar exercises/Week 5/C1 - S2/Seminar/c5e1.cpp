// c5e1.cpp This function illustrates how a function can return two values
#include<iostream>
using namespace std;
// This is the declaration for the function that reads the value for i and j
void get_input(int& i, int& j);
// This is the declaration for the function that adds 10 to i and 20 to j
void process(int& i, int& j);

int main()
{
	int i, j;
	get_input(i, j);
	cout << "I am about to call function process, i = " << i << " j = " << j << endl;
	process(i, j);
	cout << "I just came back from function Process, i = " << i << " j = " << j << endl;
	return 0;
}

void get_input(int& i, int& j)
{
	cout << "Please enter two values for i and j seperated by a single space, then press <Enter> : ";
	cin >> i >> j;
	cout << endl;
	return; // a void function, returns nothing
}

void process(int& i, int& j)
{
	i = i + 10;
	j = j + 20;
	cout << "Inside function Process \n";
	cout << "I've added 10 to i, and 20 to j, i = " << i << " and j = " << j << "\n";
}