//You Do It DataEntryThrowException pg.594~

#include<iostream>
#include<string>
using namespace std;

int getInt(string prompt)
{
	int integer;
	cout << prompt;
	
	if (!(cin >> integer))
	{
		runtime_error e("Non-integer data");
		throw e;
	}

	return integer;
}

int main()
{
	int age;
	
	try
	{
		age = getInt("Enter your age ");
	}
	catch (runtime_error e)
	{
		cout << e.what() << endl;
		cout << "Age is being set to 0" << endl;
		age = 0;
	}

	cout << "Age is " << age << endl;
	return 0;
}