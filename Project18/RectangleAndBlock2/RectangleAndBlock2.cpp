//exercise 1b RectangleAndBlock2.cpp pg.496

#include<iostream>

using namespace std;

class Rectangle
{
protected:
	int length;
	int width;
public:
	void assignLength(int);
	void displayLength();
	void assignWidth(int);
	void displayWidth();
	int computeSize();
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

int Rectangle::computeSize()
{
	int area;
	area = length * width;
	return area;

}
class Block : public Rectangle
{
private:
	int height;
public:
	void assignHeight(int);
	void displayHeight();
	int computeSize();
};

void Block::assignHeight(int height)
{
	this->height = height;
}

void Block::displayHeight()
{
	cout << "Height: " << height << endl;
}

int Block::computeSize()
{
	int volume;
	volume = length * width * height;
	return volume;

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
	cout << "Area of rectangle: " << rect1.computeSize() << endl;

	cout << "Example block: " << endl;
	block1.assignLength(7);
	block1.assignWidth(8);
	block1.assignHeight(5);
	block1.displayLength();
	block1.displayWidth();
	block1.displayHeight();
	cout << "Volume of block: " << block1.computeSize() << endl;

}


