//You Do It Letter2 pg. 317~

#include<iostream>
#include<string>
using namespace std;
class Letter
{
private:
	string title;
	string recipient;
	static int count;

public:
	void setRecipient(string, string);
	void displayGreeting();
	static void displayCount();
	void showMemoryLocations();

};

int Letter::count = 0;

void Letter::setRecipient(string title, string name)
{
	this->title = title;
	recipient = name;
	++count;
}

void Letter::displayGreeting()
{
	cout << "Dear " << title << ". " <<
		recipient << "," << endl;
}

void Letter::displayCount()
{
	cout << "Current count is " << count << endl << endl;
}

void Letter::showMemoryLocations()
{
	cout << "Memory addresses:" << endl;
	cout << "title: " << &title << endl;
	cout << "recipient " << &recipient << endl;
	cout << "count " << &count << endl;
}

int main()
{
	Letter aLetter;
	string title;
	string name;
	void displayLetter(Letter);

	char more = 'y';
	while (more != 'n')
	{
		cout << "Enter title for recipient, " <<
			"for example 'Mr' or 'Ms' >> ";
		cin >> title;
		cout << "Enter last name of recipient >> ";
		cin >> name;
		aLetter.setRecipient(title, name);
		displayLetter(aLetter);
		Letter::displayCount();
		aLetter.showMemoryLocations();
		cout << "Do you want to send another - y or n? ";
		cin >> more;
	}

	return 0;

}

void displayLetter(Letter letter)
{
	letter.displayGreeting();
	cout << "Thank you for your recent order. We look" <<
		endl << "forward to serving you again soon." <<
		endl << " Sincerely," <<
		endl << " ABC Company" <<
		endl << endl;
}


