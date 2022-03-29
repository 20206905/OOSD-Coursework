#include <iostream>
using namespace std;
////////////////////////////////////////////////////
struct point
{
	int x_coordinate;
	int y_coordinate;
};
////////////////////////////////////////////////////
int main()
{
	point p1;
	point p2;
	point p3;
	cout << "\nEnter the x-coordinate and y-coordinate for point 1 seperated by a space: ";
	cin >> p1.x_coordinate >> p1.y_coordinate;

	cout << "\nNow do the same for point 2: ";
	cin >> p2.x_coordinate >> p2.y_coordinate;

	p3.x_coordinate = p1.x_coordinate + p2.x_coordinate;
	p3.y_coordinate = p1.y_coordinate + p2.y_coordinate;

	cout << "\nThe co-ordinates of point 1 + point 2 are: " << p3.x_coordinate << " " << p3.y_coordinate << endl;
	return 0;
}