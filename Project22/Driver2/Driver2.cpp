//you do it Driver2.cpp pg.713~

#include<iostream>
#include<string>
using namespace std;

class Driver
{
private:
	int idNum;
	string lastName;
	unsigned genderCode : 1;
	unsigned ageCode : 1;
	unsigned numVehicles : 2;
public:
	Driver(int, string, int, int);
	void showDriver();
	Driver(int, string, int, int, int);
};

Driver::Driver(int id, string name, int gender, int age,
	int cars)
{
	idNum = id;
	lastName = name;
	genderCode = gender;
	ageCode = age;
	numVehicles = cars;
}

void Driver::showDriver()
{
	enum Gender { MALE = 0, FEMALE };
	enum Age { YOUNG = 0, OLD };
	cout << "ID #" << idNum << " Name: " << lastName <<
		" Gender: ";
	if (genderCode == MALE)
		cout << "Male ";
	else
		cout << "Female ";
	if (ageCode == YOUNG)
		cout << "Not over 25";
	else
		cout << "Over 25";
	cout << " Driver has " << numVehicles <<
		" vehicle(s)." << endl;
}

int main()
{
	Driver firstDriver(222, "Wallace", 0, 0, 0),
		secondDriver(333, "Parker", 0, 1, 1),
		thirdDriver(444, "Larson", 1, 0, 2),
		fourthDriver(555, "Hernandez", 1, 1, 3);
	firstDriver.showDriver();
	secondDriver.showDriver();
	thirdDriver.showDriver();
	fourthDriver.showDriver();
	return 0;
}

