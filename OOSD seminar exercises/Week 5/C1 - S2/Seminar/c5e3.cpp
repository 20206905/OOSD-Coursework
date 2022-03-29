#include <iostream>
#include <stdio.h>
using namespace std;

double bb_4ac();
void get_a_b_c(double& a, double& b, double& c);

void main() {
	bb_4ac();
}
double bb_4ac()
{
	double a, b, c; // Coefficients of a quadratic equation
	get_a_b_c(a, b, c);
	cout << "The result of this equation is " << b * b - 4 * a * c;
	return b * b - 4 * a * c;
}

void get_a_b_c(double& a, double& b, double& c) {
	cout << "Please input a value for a, b & c sepearted by a space: ";
	cin >> a >> b >> c;
	cout << endl;
}