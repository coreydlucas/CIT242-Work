//You Do It ValidID pg.149

#include <iostream>
using namespace std;

int main()
{
	int idNum;
	const int LOW_NUM = 111;
	const int HIGH_NUM = 999;

	cout << "Enter an ID number between " << LOW_NUM << " and " << HIGH_NUM << " inclusive ";
	cin >> idNum;

	while (idNum < LOW_NUM || idNum > HIGH_NUM)
	{
		cout << "Invalid ID number" << endl;
		cout << "Please enter a number from " << LOW_NUM << " through " << HIGH_NUM << " ";
		cin >> idNum;
	}

	cout << "Thank you. Your valid ID is " << idNum << endl;
	
	return 0;
}