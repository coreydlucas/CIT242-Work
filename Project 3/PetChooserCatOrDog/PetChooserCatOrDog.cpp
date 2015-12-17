//You Do It PetChooserCatOrDog pg.107~

#include <iostream>
using namespace std;

int main()
{
	int hoursGone;
	const int MANY_HOURS = 6;

	cout << "On average, how many hours are you gone from home each day? ";
	cin >> hoursGone;
	if (hoursGone > MANY_HOURS)
		cout << "You should consider a cat" << endl;
	else
		cout << "You can consider a dog" << endl;


	return 0;

}

