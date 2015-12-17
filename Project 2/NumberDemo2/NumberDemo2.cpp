//NumberDemo, Starts on pg.67
#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	double x, y, z;
	a = 13;
	b = 4;
	x = 3.3;
	y = 15.78;

	c = a + b;
	cout << "a + b is " << c << endl;
	//shows what the sum of the variables "a" and "b" are

	z = x + y;
	cout << "x + y is " << z << endl;
	c = a / b;
	cout << "a / b is " << c << endl;
	c = a % b;
	cout << "a % b is " << c << endl;

	a = 2;
	c = --a;

	cout << "a is " << a << " and c is " << c << endl;

	a = 2;
	c = a--;
	cout << "a is " << a << " and c is " << c << endl;



	return 0;
}