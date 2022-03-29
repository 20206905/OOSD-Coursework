#include <iostream>
using namespace std;
#include <conio.h>

const char ESC = 27;	//escpae key ASCII code
const double TOLL = 0.5;	//toll is 50 cents
////////////////////////////////////////////////
class tollBooth {
	private:
		unsigned int numOfCars;	//total cars passed today
		double money;	//total money collected today
	public:
		tollBooth() : numOfCars(0), money(0.0)
		{}
	void payingCar() {	//a car paid
		numOfCars++;
		money += TOLL;
	}
	void noPayCar() {	//a car didn't pay
		numOfCars++;
	}
	void display() const	//display totals
	{
		cout << "The total number of cars = " << numOfCars << endl;
		cout << "The total amount of money = " << money << endl;
	}
};

int main()
{
	tollBooth booth1;	//create a toll booth
	char ch;

	cout << "\nPress 0 for each non-paying car,"
		<< "\n	1 for each paying car,"
		<< "\n Esc to exit the program.\n";
	do {
		ch = _getche();	//get character
		if (ch == '0')	//if it's 0, car didn't pay
			booth1.noPayCar();
		if (ch == '1')	//if it's 1, car paid
			booth1.payingCar();
	} while (ch != ESC);	//exit loop on Esc key
	booth1.display();	//display totals
	return 0;
}