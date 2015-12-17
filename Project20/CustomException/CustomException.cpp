//You Do It CustomException pg.594~

#include<iostream>
#include<string>
using namespace std;

class NonIntegerException : public runtime_error
{
private:
	string nonIntegerData;
public:
	NonIntegerException(string);
	string getNonIntegerData();
};

NonIntegerException::NonIntegerException(string s) :
runtime_error("Non-integer data")
{
	nonIntegerData = s;
}

string NonIntegerException::getNonIntegerData()
{
	return nonIntegerData;
}

int getInt(string prompt)
{
	int integer;
	string badData;
	cout << prompt;
	if (!(cin >> integer))
	{
		cin.clear();
		cin >> badData;
		NonIntegerException e(badData);
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
	catch (NonIntegerException e)
	{
		cout << e.what() << endl;
		cout << "The entered value was " << e.getNonIntegerData() << endl;
		cout << "Age is being set to 0" << endl;
		age = 0;
	}

	cout << "Age is " << age << endl;
	return 0;
}