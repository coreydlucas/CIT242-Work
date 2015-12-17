#include<iostream>

using namespace std;

class Rectangle
{
private:
	int length;
	int width;
public:
	void assignLength(int);
	void displayLength();
	void assignWidth(int);
	void displayWidth();

};

void Rectangle::assignLength(int length)
{
	this->length = length;
}

void Rectangle::displayLength()
{
	cout << "Length: " << length << endl;
}

void Rectangle::assignWidth(int width)
{
	this->width = width;
}

void Rectangle::displayWidth()
{
	cout << "Width: " << width << endl;
}

class Block : public Rectangle
{
private:
	int height;
public:
	void assignHeight(int);
	void displayHeight();
};

void Block::assignHeight(int height)
{
	this->height = height;
}

void Block::displayHeight()
{
	cout << "Height: " << height << endl;
}

int main()
{

	Rectangle rect1;
	Block block1;

	cout << "Example rectangle: " << endl;
	rect1.assignLength(10);
	rect1.assignWidth(11);
	rect1.displayLength();
	rect1.displayWidth();

	cout << "Example block: " << endl;
	block1.assignLength(7);
	block1.assignWidth(8);
	block1.assignHeight(5);
	block1.displayLength();
	block1.displayWidth();
	block1.displayHeight();
	
}


