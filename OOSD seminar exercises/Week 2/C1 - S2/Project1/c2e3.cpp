// c2e3.cpp - Read and average N integers, print the result.
#include <iostream>
using namespace std;
int main(void)
{
	int x;
	int count = 0; // (1) initialize a counter to 0 to count number of values
	int N; // Number of values for which the average must be computed.
	double sum = 0; // initialize the sum to 0 to make sure the sum at the beginning is 0
	double average;
	// prompt the user:
	cout << "Enter number of values, N, to be read in <Enter>:" << endl;
	cin >> N;
	while (count < N) // (2) read N grades and compute their sum, count ensures N entries
	{ // read each number and compute the sum:
		cout << "\n Enter a grade <Enter>: ";
		cin >> x;
		sum = sum + x;
		count++; // (3) update the count
	}
	if (N == 0) {
		cout << "You haven't enter 0 number, no average will be computed, bye \n";
	}
	else
	{
		average = average = sum / N;
		cout << "The average of these " << N << " grades is " << average << endl;
	}
	return 0;
}