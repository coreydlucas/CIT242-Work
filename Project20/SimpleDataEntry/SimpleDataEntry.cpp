//You Do It SimpleDataEntry pg.594~

#include<iostream>
#include<string>
using namespace std;

int getInt(string prompt)
{
	int integer;
	cout << prompt;
	cin >> integer;
	return integer;
}

int main()
{
	int age;
	age = getInt("Enter your age ");
	cout << "Age is " << age << endl;
	return 0;
}