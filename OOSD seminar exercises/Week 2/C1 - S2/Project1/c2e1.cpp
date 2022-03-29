// c2e1.cpp - Read and compute the average for 6 integers, display the result.
#include <iostream>
using namespace std;
int main(void)
{
	int x, y, z, p, q, r, a, b, c, d; // (A)
	double average;
	// prompt the user:
	cout << "Enter six grades seperated by spaces, then press <Enter>:" << endl;
	// read and store six integers:
	cin >> x >> y >> z >> p >> q >> r >> a >> b >> c >> d; // (B)
	average = (x + y + z + p + q + r + a + b + c + d) / 10; // (C)
	cout << "The average is " << average << endl;
	return 0;
}