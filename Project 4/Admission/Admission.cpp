//Exercise 7 pg.118

#include <iostream>
using namespace std;

int main()
{
	double studentGPA;
	int admissionTestScore;

	cout << "Enter the student's GPA: " << endl;
	cin >> studentGPA;

	cout << "Enter the student's Admission Test score: " << endl;
	cin >> admissionTestScore;

	if (studentGPA >= 3.0 && admissionTestScore >= 60)
	{
		cout << "Accept" << endl;
	}
	else
	{
		if (studentGPA < 3.0 && admissionTestScore >= 80)
		{
			cout << "Accept" << endl;
		}
		else
		{
			cout << "Reject" << endl;
		}
	}

	return 0;

}