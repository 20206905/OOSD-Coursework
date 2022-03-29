#include <iostream>
using namespace std;
struct time
{
	int hours;
	int minutes;
	int seconds;
};
void main()
{
	time t1;
	cout << "Enter your hours, minutes and seconds seperated by a space: ";
	cin >> t1.hours >> t1.minutes >> t1.seconds;
	long totalsecs = t1.hours * 3600 + t1.minutes * 60 + t1.seconds;
	cout << "Total number of seconds equals: " << totalsecs;
}