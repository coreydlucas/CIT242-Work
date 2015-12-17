//You Do It Increase.cpp pg.540~

#include<iostream>
using namespace std;

template <class T>

T increase(T item, int byValue)
{
	item = item + byValue;
	return item;
}

int main()
{
	int anInteger = 12;
	double aDouble = 13.5;
	char aChar = 'F';
	int byValue = 2;
	cout << anInteger << endl << aDouble <<
		endl << aChar << endl;
	anInteger = increase(anInteger, byValue);
	aDouble = increase(aDouble, byValue);
	aChar = increase(aChar, byValue);
	cout << anInteger << endl << aDouble <<
		endl << aChar << endl;
	return 0;
}