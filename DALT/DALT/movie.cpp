#ifndef MOVIE_CPP
#define MOVIE_CPP
#include "movie.h"

Movie::Movie() {};
Movie::~Movie() {};
istream& operator>>(istream& istream, Movie& movie)
{
	cout << "Movie Name: ";
	istream.ignore();
	istream.get(movie.movieName, 35);
	cout << "Movie Category: ";
	istream.ignore();
	istream.get(movie.movieCategory, 20);
	cout << "Movie Producer: ";
	istream.ignore();
	istream.get(movie.movieProducer, 35);
	cout << "Movie Time: ";
	istream >> movie.movieTime;
	return istream;
};
ostream& operator<<(ostream& ostream, Movie& movie)
{
	ostream << setw(10) << movie.movieId << setw(35) << movie.movieName << setw(20) << movie.movieCategory << setw(35) << movie.movieProducer << setw(10) << movie.movieTime << " minutes" << endl;
	return ostream;
};
const bool Movie::operator==(const Movie& movies)
{
	if (this->movieId == movies.movieId)
	{
		return true;
	}
	else
	{
		return false;
	}
};
#endif