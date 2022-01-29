
/*
	Perez, Victor

	February 16, 2021

	CS A250
	Lab 1
*/

#include "Movie.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	//create an object of the Movie class
	//use overloaded constructor
	Movie movie1("Jurassic World", 2015);

	//test function getName
	cout << "Movie 1: " << movie1.getMovieTitle() << endl;

	//test function getYear
	if (movie1.getYear() == 0)
		cout << "No data available." << endl;
	else
		cout << "Released in: " << movie1.getYear() << endl;

	//test functions setName and setYear
	movie1.setMovieTitle("Deadpool");
	movie1.setYear(2016);

	//create another three objects of the Movie class
	Movie movie2("Zootopia", 2016);
	Movie movie3("John Wick", 2014);
	Movie movie4("John Wick: Chapter 2", 2017);

	//test function print
	cout << "\nMovie 1 - ";
	movie1.print();
	cout << "\nMovie 2 - ";
	movie2.print();
	cout << "\nMovie 3 - ";
	movie3.print();
	cout << "\nMovie 4 - ";
	movie4.print();

	cout << endl;

	//test function sameYear
	if (movie1.sameYear(movie2))
		cout << "\nMovie 1 and movie 2 were released the same year.";
	else
		cout << "\nMovie 1 and movie 2 were NOT released the same year.";

	if (movie1.sameYear(movie3))
		cout << "\nMovie 1 and movie 3 were released the same year.";
	else
		cout << "\nMovie 1 and movie 3 were NOT released the same year.";

	if (movie1.sameYear(movie4))
		cout << "\nMovie 1 and movie 4 were released the same year.\n";
	else
		cout << "\nMovie 1 and movie 4 were NOT released the same year.";
	// ---------------------------------------LEAVE A BLANK LINE

	//create an object of the Movie class using the default constructor
	Movie movie5;
	cout << "\n\nMovie 5: " << movie5.getMovieTitle() << endl;
	if (movie5.getYear() == 0)
		cout << "No data available." << endl;
	else
		cout << "Released in: " << movie5.getYear() << endl;
	movie5.setMovieTitle("Fight Club");
	movie5.setYear(1999);
	movie5.print();
	cout << endl;

	cout << endl;
	system("pause");
}
