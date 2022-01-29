/*
	Perez, Victor

	February 16, 2021

	CS A250
	Lab 1
*/

#include<iostream>
#include <string>
#include "Movie.h"
using namespace std; 

Movie::Movie() {}

	Movie::Movie(string movieTitle, int movieYear) {
		title = movieTitle;
		year = movieYear;

	}

	void Movie::setMovieTitle(string movieTitle) {
		title = movieTitle;
	}

	string Movie:: getMovieTitle() {
		return title;
	}

	void Movie:: setYear(int movieYear) {
		year = movieYear;
	}

	int Movie:: getYear() {
		return year;
	}

	void Movie:: print() {
		cout << getMovieTitle() << " " << "(" << getYear() << ")";
	}

	bool Movie:: sameYear(Movie movie) {
		if (movie.getYear() == this->year) {
			return true;
		}
		else {
			return false;
		}
	}

	Movie::~Movie() {}