// c1e1.cpp - This C++ Program will compute the profit of selling soft drinks
#include <iostream>
using namespace std;
int main()
{
	int casesPerDay, bottlesPerDay, bottlesPerYear, bottlesPerDecade, profitPerDayInPounds;
	int bottlesPerCase = 12;
	double profitPerBottle = 0.22; // 22 pence per bottle profit
	double profitPerDay, profitPerYear, profitPerDecade, profitPerDayInPoundsPs;
	cout << "Press enter after entering each number \n";
	cout << "Enter number of cases \n";
	cin >> casesPerDay;
	profitPerDay = casesPerDay * bottlesPerCase * profitPerBottle;
	profitPerDayInPounds = profitPerDay / 100;
	profitPerDayInPoundsPs = (profitPerDay / 100) - profitPerDayInPounds;
	profitPerYear = 365 * profitPerDay;
	cout << "The store has made : ";
	cout << profitPerDayInPounds;
	cout << " today\n";
	bottlesPerDay = casesPerDay * bottlesPerCase;
	cout << "The store has sold : ";
	cout << bottlesPerDay;
	cout << " bottles today. \n";
	cout << "That means the profit for one year will be : ";
	cout << profitPerYear << endl;
	cout << "That means that the amount of bottles sold in one year will be : ";
	bottlesPerYear = bottlesPerDay * 365;
	cout << bottlesPerYear;
	profitPerDecade = profitPerYear * 10;
	cout << "\nThat means the profit for ten years will be : ";
	cout << profitPerDecade << endl;
	cout << "And the amount of bottles sold in ten years would be : ";
	bottlesPerDecade = bottlesPerYear * 10;
	cout << bottlesPerDecade;
	cout << "\nGood business ? !\n";
	return 0;
}