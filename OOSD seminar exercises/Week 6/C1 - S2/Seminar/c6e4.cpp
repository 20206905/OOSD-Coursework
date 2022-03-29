// c6e3.cpp - This program reads some integers froma file and displays:
// The number, number^2, and the sum of all numbers reads up to that point

#include<iostream>
#include<fstream> // Step (1)
#include<cstdlib>
#include<cmath>
using namespace std;

void get_stream(ifstream& in_s);

int main()
{
	int x, count = 0;
	float sum = 0, avg;

	// Step (2)-B - declaration of the stream of type input
	ifstream in_s;

	get_stream(in_s);

	cout << "\t x \t\t x^2 \t\t Current Sum \n";
	cout << "\t === \t\t === \t\t =========== \n";

	// Step (4)-Read all numbers one-by-one to the end of the file 
	while (in_s >> x)
	{
		sum = sum + x;
		cout << "\t " << x << "\t\t " << pow(x, 2) << "\t\t " << sum << "\n";
		count++;
	}
	avg = sum / count;
	cout << "\n \t\t The average of these " << count << " numbers is: " << avg << endl;
	// Step (5)-Close the connection (close the file)
	in_s.close();

	return 0;
}

void get_stream(ifstream& in_s)
{
	char input_file[15]; // Step (2)-A
	// Step (3)-A Get the file name

	cout << "Please input the input file name \n";
	cin >> input_file;
	// Step (3)-B - connect to the input file and test
	in_s.open(input_file);

	if (in_s.fail())
	{
		cout << "Input file opening failed. \n";
		exit(1); // if we couldn't open the file to read from we exit
	}
}