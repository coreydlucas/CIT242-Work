//Exercise 4 Jobs.cpp pg.443

#include<iostream>
#include<string>
using namespace std;

class Job
{
private:
	int jobNumber;
	int timeToComplete;
	int wage;

public:
	Job()
	{
		jobNumber = 0;
		timeToComplete = 0;
		wage = 0;
	}
	
	Job(int jn, int ttc, int w)
	{
		jobNumber = jn;
		timeToComplete = ttc;
		wage = w;
	}
		
	friend ostream& operator<<(ostream &output, const Job& aJob)
	{
		output << "Job number: " << aJob.jobNumber << " takes " << aJob.timeToComplete << " hours to complete "
			<< "and pays " << aJob.wage << " dollars an hour." << endl;

		return output;
	}

	friend istream& operator>>(istream& input, Job& aJob)
	{
		input >> aJob.jobNumber >> aJob.timeToComplete >> aJob.wage;
		return input;
	}

	int operator+(Job);
	int operator-(Job);
};

int Job::operator+(Job aJob)
{
	int totalTime;
	totalTime = timeToComplete + aJob.timeToComplete;
	return totalTime;
}

int Job::operator-(Job aJob)
{
	int timeDifference;
	timeDifference = timeToComplete - aJob.timeToComplete;
	return timeDifference;
}


int main()
{
	Job newJob1;
	Job newJob2(2, 12, 12);

	cout << "Enter new job info: " << endl;
	cin >> newJob1;
	cout << newJob1;
	cout << newJob2;

	cout << "The total time to complete both jobs is: " << newJob1 + newJob2 << endl;
	cout << "The difference in time for completing both jobs is: " << newJob1 - newJob2 << endl;

	return 0;
}