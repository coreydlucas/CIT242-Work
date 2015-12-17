//You Do It Increase2.cpp pg.540~

#include<iostream>
#include<string>
using namespace std;

template <class T>

T increase(T item, int byValue)
{
	item = item + byValue;
	return item;
}

class Classroom
{
	friend ostream& operator<<(ostream&, Classroom);
private:
	string teacher;
	int numStudents;
public:
	Classroom(string, int);
	Classroom operator+(int);
};

Classroom::Classroom(string teacherName, int students)
{
	teacher = teacherName;
	numStudents = students;
}

Classroom Classroom::operator+(int val)
{
	numStudents += val;
	return *this;
}

ostream& operator<<(ostream& out, Classroom c)
{
	out << c.teacher << "'s classroom has " <<
		c.numStudents << " students" << endl;
	return out;
}

class DinnerReservation
{
	friend ostream& operator<<(ostream&, DinnerReservation);
private:
	int numGuests;
	string lastName;
	string time;
public:
	DinnerReservation(int, string, string);
	DinnerReservation operator+(int);
};

DinnerReservation::DinnerReservation(int guests,
	string last, string resTime)
{
	numGuests = guests;
	lastName = last;
	time = resTime;
}

DinnerReservation DinnerReservation::operator+(int val)
{
	numGuests += val;
	return *this;
}

ostream& operator<<(ostream& out, DinnerReservation res)
{
	out << "The dinner reservation for the " <<
		res.lastName << " party at " <<
		res.time << " is for " << res.numGuests <<
		" dinner guests" << endl;
	return out;
}


int main()
{
	Classroom aClassroom("Miss Gleason", 28);
	DinnerReservation aDinnerReservation(4, "Parker",
		"7:30");
	int byValue = 2;
	cout << aClassroom << aDinnerReservation << endl;
	aClassroom = increase(aClassroom, byValue);
	aDinnerReservation = increase(aDinnerReservation,
		byValue);
	cout << aClassroom << aDinnerReservation << endl;
	return 0;
}