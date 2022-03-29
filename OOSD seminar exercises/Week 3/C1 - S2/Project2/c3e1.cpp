// c3e1.cpp - This program illustrates the Boolean expressions and the order of precedence
#include<iostream>
using namespace std;
int main()
{
	int count = 0, limit = 10;
	int x, y;
	cout << "a " << ((count == 0) && (limit < 20)) << "\n";
	cout << "b " << (count == 0 && limit < 20) << "\n";
	cout << "c " << ((limit > 12) || (count < 5)) << "\n";
	cout << "d " << (!(count == 5)) << "\n";
	//cout << "e " << ((count == 1) && (x < y)) << "\n";
	//cout << "f " << ((count < 10) || (x < y)) << "\n";
	//cout << "g " << (!(((count < 10) || (x < y)) && (count >= 0))) << "\n";
	//cout << "h " << (((limit / count)> 7) || (limit < 20)) << "\n";
	//cout << "i " << ((limit < 20) || ((limit / count) > 7)) << "\n";
	//cout << "j " << (((limit / count)> 7) && (limit < 0)) << "\n";
	//cout << "k " << ((limit < 0) && ((limit / count) > 7)) << "\n";
	cout << "l " << ((5 && 7) + (!6)) << "\n";
	return 0;
}