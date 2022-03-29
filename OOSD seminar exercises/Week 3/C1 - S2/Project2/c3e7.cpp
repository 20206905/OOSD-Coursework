// c3e6.cpp - This program displays the days of a month
// Day 0 : Sunday, Day 1: Monday, Day 2: Tuesday
// Day 3: Wednesday, Day 4: Thursday, Day 5: Friday
// Day 6: Saturday
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n_days, start_day;
	cout << "Enter the number of days, 28, 29, 30 or 31 \n";
	cin >> n_days;
	cout << "Enter the first day of the month \n";
	cin >> start_day;
	cout << "Sun\tMon\tTue\tWed\tThr\tFri\tSat\n";
	display_month(n_days, start_day);
	cout << endl;
	return 0;
}
void display_month(int n_days, int start_day) {
	get_tabs(start_day);
	for (int j = 1; j <= n_days; j++)
	{
		if (j % 7 == 0)
			cout << endl;
		cout << j << "\t";
	}
}
void get_tabs(int start_day) {
	switch (start_day) {
	case '1':
		cout << " \t";
		break;
	default:
		cout << " \t";
		break;
	}
}