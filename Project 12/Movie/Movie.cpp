//Exercise 1 Movie.cpp pg.327
/*Define a class named Movie. Include private fields for the title, year, and name of the director.
Include three public functions with the prototypes void Movie::setTitle(string);,
void Movie::setYear(int);, and void setDirector(string);. Include another
function that displays all the information about a Movie. Write a main()function that
declares a movie object named myFavoriteMovie. Set and display the object’s fields.
*/

#include<iostream>
#include<string>
using namespace std;

class Movie
{
	private:
		string title;
		int year;
		string director;
	public:
		void Movie::setTitle(string);
		void Movie::setYear(int);
		void setDirector(string);
		void displayInfo();

};

void Movie::setTitle(string cusTitle)
{
	title = cusTitle;

}

void Movie::setYear(int cusYear)
{
	if (cusYear < 1900 || cusYear > 2016)
	{
		year = 0;
	}
	else
		year = cusYear;

}

void Movie::setDirector(string cusDirector)
{
	director = cusDirector;

}

void Movie::displayInfo()
{
	cout << "Title: " << title << endl;
	cout << "Year: " << year << endl;
	cout << "Director: " << director << endl;

}

int main()
{
	Movie myFavoriteMovie;
	string cusTitle;
	int cusYear;
	string cusDirector;

	cout << "Movie title? " << endl;
	cin >> cusTitle;
	cout << "Movie Year? " << endl;
	cin >> cusYear;
	cout << "Movie director? " << endl;
	cin >> cusDirector;

	myFavoriteMovie.setTitle(cusTitle);
	myFavoriteMovie.setYear(cusYear);
	myFavoriteMovie.setDirector(cusDirector);

	myFavoriteMovie.displayInfo();


}

