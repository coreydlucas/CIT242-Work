//you do it MaskConvertLetter.cpp pg.717~

#include<iostream>
using namespace std;

int main()
{
	char ch;
	cout << "Enter a lowercase character ";
	cin >> ch;
	cout << "You entered " << ch << endl;
	ch &= 223;
	cout << "Uppercase version is " << ch << endl;
	return 0;
}