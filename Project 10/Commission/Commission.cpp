//exercise 6 Commission pg.276
//
//Write a program that includes two functions. The first function should ask a salesperson for
//the dollar value of daily sales and then return this figure to the main program.The second
//function should calculate the salesperson’s commission based on the following rates :
//0–999		3%
//1000–2999	3.5 %
//3000–up	4.5%
//The dollar value of the calculated commission should be returned to the main program,
//which then displays it.

#include <iostream>
using namespace std;

int main()
{

	int getDailySales();
	int dailySales = getDailySales();

	double commRate;


	cout << "Daily sales are: " << dailySales << endl;

	if (dailySales <= 999)
	{
		commRate = 0.3;
	}
	else
	{
		if (dailySales <= 2999 && dailySales >= 1000)
		{
			commRate = 0.35;
		}
		else
		{
			commRate = 0.45;
		}
	}
	
	void getCommission(int, double);
	getCommission(dailySales, commRate);


	return 0;
}

int getDailySales()
{
	int dailySales;

	cout << "Please enter the daily sales amount: " << endl;
	cin >> dailySales;

	return dailySales;
}

void getCommission(int dailySales, double commRate)
{
	
	int commission;

	commission = dailySales * commRate;

	cout << "The Salesperson's commission is: $" << commission << endl;
	
}