#include <iostream>
using namespace std;

int choice;
int rows;
char shapesChar;

int menu();
void drawTriangle();
int getRows();
char getChar();

int main() {
	menu();
	if (choice == 1) {
		drawTriangle();
	}
	else if(choice == 2) {
		cout << "Draw a diamond" << endl;
	}
	else {
		return 0;
	}
}

int menu() {
	cout << "Would you like to :" << endl;
	cout << "1. Draw a triangle." << endl;
	cout << "2. Draw a diamond." << endl;
	cout << "3. Exit" << endl;
	cin >> choice;
	cout << endl;
	return choice;
}

void drawTriangle() {
	getRows();
	getChar();
	for (int i = 0; i >= rows; i++) {
		cout << "hi";
	}
}

int getRows() {
	cout << "What size would you like to make your shape? ";
	cin >> rows;
	cout << endl;
	return rows;
}

char getChar() {
	cout << "What character would you like to use for your shape? ";
	cin >> shapesChar;
	cout << endl;
	return shapesChar;
}