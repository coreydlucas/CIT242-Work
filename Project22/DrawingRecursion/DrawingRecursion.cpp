//you do it DrawingRecursion.cpp pg.717~

#include<iostream>
using namespace std;

void draw(char ch, int num)
{
	if (num > 0)
	{
		cout << ch;
		draw(ch, num - 1);
	}
}

void display(char sym, int off, int len)
{
	if (len > 0)
	{
		draw(' ', off);
		draw(sym, len);
		cout << endl;
		display(sym, off + 2, len - 4);
	}
}

int main()
{
	char symbol;
	int offset = 0;
	int length;
	cout << "Enter length ";
	cin >> length;
	cout << "Enter symbol ";
	cin >> symbol;
	cout << endl << endl;
	display(symbol, offset, length);
	return 0;
}