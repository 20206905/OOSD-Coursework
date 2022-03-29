// c3e8.cpp - This program illustrates the scope of variables in a block
#include<iostream>
using namespace std;
int main()
{
	int x = 10;
	for (int i = 0; i < x; i++)
	{
		x = 5;
		cout << "i = " << i << endl;
	}
	cout << "x = " << x << endl;
	return 0;
}