//You Do It MultipleExceptionsOneCatch pg.594~

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

class OutOfRangeException : public runtime_error
{
private:
	int value;
public:
	OutOfRangeException(int);
	int getValue();
};

OutOfRangeException::OutOfRangeException(int val) :
runtime_error("Out of range")
{
	value = val;
}

int OutOfRangeException::getValue()
{
	return value;
}


int getDoubleDigitInt(string prompt)
{
	int integer;
	string badData;
	const int HIGH = 99;
	const int LOW = 10;
	cout << prompt;
	if (!(cin >> integer))
	{
		cin.clear();
		cin >> badData;
		NonIntegerException e(badData);
		throw e;
	}
	if (integer < LOW || integer > HIGH)
	{
		OutOfRangeException e(integer);
		throw e;
	}
	return integer;
}

int main()
{
	int age;
	try
	{
		age = getDoubleDigitInt("Enter your age ");
	}
	catch (runtime_error e)
	{
		cout << e.what() << endl;
		age = 0;
	}
	cout << "Age is " << age << endl;
	return 0;
}