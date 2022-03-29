#include <iostream>
using namespace std;

class Parent
{
protected:
	int basedata = 0;
};
class Child1 : virtual public Parent
{};
class Child2 : virtual public Parent
{};
class Grandchild : public Child1, public Child2
{
public:
	int getdata()
	{
		return basedata;
	}
};

void main() {
	Grandchild gc;
	cout << gc.getdata();
}