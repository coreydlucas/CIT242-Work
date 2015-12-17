//You Do It MemoryAddress2 pg.208~

#include<iostream>
using namespace std;
int main()
{
	int firstNum, secondNum;
	cout << "Enter first number ";
	cin >> firstNum;
	cout << "Enter second number ";
	cin >> secondNum;
	cout << "The numbers are " << firstNum << " and " << secondNum << endl;
	
	cout << "The addresses are " << &firstNum << " and " << &secondNum << endl;


	return 0;
}