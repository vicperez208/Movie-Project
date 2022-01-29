/*
	Perez, Victor

	February 16, 2021

	CS A250
	Lab 1
*/

#ifndef MOVIE_H
#define MOVIE_H
#pragma once

#include <iostream>
using namespace std;
class Movie {
private:
	string title = "No name assigned";
	int year = 0;

public:
	Movie();

	Movie(string movieTitle, int movieYear);

	void setMovieTitle(string movieTitle);

	string getMovieTitle();

	void setYear(int movieYear);

	int getYear();

	void print();

	bool sameYear(Movie movie);

	~Movie();
};
#endif
