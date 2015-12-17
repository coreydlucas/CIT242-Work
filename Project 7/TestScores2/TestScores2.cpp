//You Do It TestScores2 pg.205~

#include<iostream>
using namespace std;

int main()
{
	const int NUM_SCORES = 10;
	int score[NUM_SCORES];
	int sub = 0;
	double total = 0;
	double average = 0;
	const int END = 999;
	int scoresEntered;

	cout << "Enter score #" << (sub + 1) << " or " << END << " to quit ";
	cin >> score[sub];

	sub++;
	
	while (sub < NUM_SCORES && score[sub - 1] != END)
	{
		cout << "Enter score #" << (sub + 1) << " or " << END << " to quit ";
		cin >> score[sub];
		++sub;
	}
	scoresEntered = sub - 1;
	cout << endl << "The scores are:" << endl;
	
	for (sub = 0; sub < scoresEntered; ++sub)
	{
		total += score[sub];
		cout << score[sub] << " ";
	}
	cout << endl;
	if (scoresEntered == 0)
		average = 0;
	else
		average = total / scoresEntered;

	cout << "The average score is " << average << endl;
	
	return 0;
}