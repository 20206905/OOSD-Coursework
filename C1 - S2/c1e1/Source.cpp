// c1e1.cpp - This C++ Program will compute the profit of selling soft drinks
#include <iostream>
using namespace std;
int main()
{
	int casesPerDay, bottlesPerDay;
	int bottlesPerCase = 12;
	double profitPerBottle = 0.2; // 20 pence per bottle profit
	double profitPerDay, profitPerYear;
	cout << "Press enter after entering each number \n";
	cout << "Enter number of cases \n";
	cin >> casesPerDay;
	profitPerDay = casesPerDay * bottlesPerCase * profitPerBottle;
	profitPerYear = 365 * profitPerDay;
	cout << "The store has made : ";
	cout << profitPerDay;
	cout << " per day. \n";
	cout << "That means the profit for one year will be : ";
	cout << profitPerYear << endl;
	cout << "Good business ? !\n";
	return 0;
}