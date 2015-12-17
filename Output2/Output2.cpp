//A first C++ program demonstrating variable use

#include<iostream>

using namespace std;

int main()
{
	int creditHours;
	double gradePointAverage;

	cout << "Please enter your credit hours ";
	cin >> creditHours;

	cout << "Please enter your grade point average ";
	cin >> gradePointAverage;

	cout << "The number of credit hours is " << creditHours << endl;
	cout << "The grade point average is " << gradePointAverage << endl;

	return 0;
}