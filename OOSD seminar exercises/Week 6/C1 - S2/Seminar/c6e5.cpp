// c6e5.cpp - This program reads the entire contents of ai input fileand will display it with the same result

#include<iostream>
#include<fstream> // Step (1)
#include<cstdlib>
using namespace std;
void get_input_stream(ifstream& in_s);

int main()
{
	char c;
	ifstream in_s; // Step (2)-B - declaration of the stream of type input
	get_input_stream(in_s);
	cout << "Here are the entire contents of the input file\n";
	// Step (4)-Read all numbers one-by-one to the end of the file.
	while (in_s >> c)
	{
		cout << c;
	}
	cout << "\n I am done with writing the contents of the file\n";
	// Step (5)-Close the connection (close the file)
	in_s.close( );
	return 0;
}

void get_input_stream(ifstream& in_s)
{
	char input_file[15]; // Step (2)-A
	// Step (3)-A Get the file name
	cout << "Please input the input file name \n";
	cin >> input_file;
	// Step (3)-B - Connect to the input file and test
	in_s.open(input_file);
	if (in_s.fail())
	{
		cout << "Input file opening failed. \n";
		exit(1); // if we couldn't open the file to read from we exit
	}
}