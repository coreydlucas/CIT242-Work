//Exercise 1 pg.215

//"Riley Residence Hall charges different rates for semester room and board based on the
//number of meals per day the student wants.The semester rate with no meals is $300.
//With one meal per day, the rate is $450.With two meals per day, the rate is $520, and
//with three meals per day, the rate is $590.Store these rates in an array.Write a program
//that allows a student to enter the number of meals desired per day.Output the semester
//room and board rate."

//no meals:		$300
//1 meal/day:	$450
//2 meal/day:	$520
//3 meal/day:	$590

#include<iostream>
using namespace std;

int main()
{
	int mealRates[4] = { 300, 450, 520, 590 };
	int mealsPerDay;

	cout << "Please enter the amount of meals you would like a day: " << endl;
	cin >> mealsPerDay;

	cout << "The room and board rate (per semester) with " << mealsPerDay << " meals per day is " << mealRates[mealsPerDay] << endl;


}