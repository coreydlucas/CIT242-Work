//Demonstrating a Student struct

#include <iostream>
using namespace std;

struct Student
{
	int creditHours;
	double gradePointAverage;
};

int main()
{
	Student oneSophomore;

	cout << "Please enter a student's credit hours ";
	cin >> oneSophomore.creditHours;
	cout << "Please enter the student's grade point average ";
	cin >> oneSophomore.gradePointAverage;

	cout << "The number of credit hours is " << oneSophomore.creditHours << endl;
	cout << "The grade point average is " << oneSophomore.gradePointAverage << endl;

	return 0;
}