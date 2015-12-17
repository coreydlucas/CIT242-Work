//HoursAndRate2 You Do It pg. 267~

#include <iostream>
using namespace std;

int main()
{

	double rate;
	int hours;
	

	double getRate();
	int getHours();

	void displayWeekly(double, int);

	rate = getRate();
	hours = getHours();

	displayWeekly(rate, hours);

	return 0;

}

double getRate()
{

	double rate;
	cout << "Enter your hourly rate in dollars and cents ";
	cin >> rate;


	return rate;

}

int getHours()
{

	int time;
	cout << "Please enter the hours you worked" << endl;
	cout << "You must enter a whole number ";
	cin >> time;

	return time;

}

void displayWeekly(double hourlyWage, int hrs)
{
	
	double weekPay;
	weekPay = hourlyWage * hrs;
	cout << "Weekly pay is " << weekPay << endl;


}
