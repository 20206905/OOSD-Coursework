#include <iostream>
#include <ctime>
#include <cstdlib>


using namespace std;

int total_time = 60;
time_t current_time = time(0);

char direction;
char input = 'f';

int score = 0;

class Grid
{
public:
	int getHeight() {
		return height;
	}
	int getWidth() {
		return width;
	}
private:
	int height = 20;
	int width = 20;
};

class Snake
{
public:
	void setXPos() {
		xPos = rand() % 20;
	}
	void setYPos() {
		yPos = rand() % 20;
	}
	int getXPos() {
		return xPos;
	}
	int getYPos() {
		return yPos;
	}
	void moveUp() {
		if (yPos < 1)
		{
			cout << "You can't move up anymore" << endl;
		}
		else
		{
			yPos -= 1;
		}
	}
	void moveDown() {
		if (yPos > 18)
		{
			cout << "You can't move down anymore" << endl;
		}
		else
		{
			yPos += 1;
		}
	}
	void moveLeft() {
		if (xPos < 1)
		{
			cout << "You can't move left anymore" << endl;
		}
		else
		{
			xPos -= 1;
		}
	}
	void moveRight() {
		if (xPos > 17)
		{
			cout << "You can't move right anymore" << endl;
		}
		else
		{
			xPos += 1;
		}
	}

private:
	int xPos = 0;
	int yPos = 0;
};

class Fruit
{
public:
	void setXPos() {
		xPos = rand() % 20;
	}
	void setYPos() {
		yPos = rand() % 20;
	}
	int getXPos() {
		return xPos;
	}
	int getYPos() {
		return yPos;
	}
private:
	int xPos = 0;
	int yPos = 0;
};

int main()
{
	Grid grid;

	Snake snake;

	Fruit fruit;

	snake.setXPos();
	snake.setYPos();

	fruit.setXPos();
	fruit.setYPos();

	while (time(0) - current_time < total_time)
	{
		for (int i = 0; i < grid.getHeight(); i++)
		{
			for (int j = 0; j < grid.getWidth(); j++)
			{
				if ((i == snake.getYPos()) && (j == snake.getXPos()))
				{
					cout << "|O";
				}
				else if ((i == fruit.getYPos()) && (j == fruit.getXPos()))
				{
					cout << "|X";
				}
				else
				{
					cout << "| ";
				}
			}
			cout << endl;
		}
		cin >> direction;
		if (direction == 'u')
		{
			snake.moveUp();
		}
		else if (direction == 'd')
		{
			snake.moveDown();
		}
		else if (direction == 'l') {
			snake.moveLeft();
		}
		else if (direction == 'r') {
			snake.moveRight();
		}

		if ((snake.getXPos() == fruit.getXPos()) && (snake.getYPos() == fruit.getYPos()))
		{
			score += 1;
			fruit.setXPos();
			fruit.setYPos();
		}
	}

	cout << "You scored " << score << endl;

	while (input != 'e')
	{
		cout << "The game is over, press 'e' and then <enter> to exit ";
		cin >> input;
	}
    return 0;
}