#pragma once
#ifndef MOVIE_H
#define MOVIE_H
#include<iostream>
#include <iomanip>
#include <stdlib.h>
#include "LinkedList.h"
#include "models.h"

using namespace std;
class Movie {
public:
	char movieName[35];
	char movieCategory[20];
	char movieProducer[35];
	int movieTime;
	int movieId;
public:
	Movie();
	~Movie();
	friend ostream& operator<<(ostream&, Movie&);
	friend istream& operator>>(istream&, Movie&);
	const bool operator==(const Movie&);
};
class MovieController{
	public:
	List<Movie> movies;
	class {
	public:
		int movie() {
			system("cls");
			int n;
			cout << "+---------------------------+" << endl
				 << "|                           |" << endl
				 << "| CNIEMA Management System  |" << endl
				 << "|                           |" << endl
				 << "+-----------MOVIE-----------+" << endl
				 << "|1. Show Movie              |" << endl
				 << "|2. Add Movie               |" << endl
				 << "|3. Remove Movie            |" << endl
				 << "|4. Back                    |" << endl
				 << "|5. Exit                    |" << endl
				 << "+---------------------------+" << endl
				 << "Your option: ";
			cin >> n;
			return n;
		}
		void movieShow(List<Movie>& movies) {
			cout << "=================================================== MOVIE SHOW ======================================================" << endl;
			//cout << endl
			//	<< "MOVIE SHOW" << endl
				cout<< setw(10) << "MOVIE ID" << setw(35) << "MOVIE NAME" << setw(20) << "MOVIE CATEGORY" << setw(35) << "MOVIE PRODUCER" << setw(15) << "MOVIE TIME" << endl;
			for (int i = 0; i < movies.length; i++)
			{
				cout << movies[i];
			}
			system("pause");
		}
		Movie movieAdd() {
			cout << "========== MOVIE ADD =========" << endl;
			Movie newMovie;
			cin >> newMovie;
			return newMovie;
		}
		int movieRemove(List<Movie>& movies) {
			cout << "========== MOVIE REMOVE =========" << endl;
			movieShow(movies);
			int movieId;
			cout << endl
				<< "MOVIE REMOVE" << endl;
			cout << "Input movieId to Remove:" << endl;
			cin >> movieId;
			return movieId;
		}
	} views;

		void menuMovie() {
		switch (views.movie()) {
		case 1:
			showMovie();
			menuMovie();
			break;
		case 2:
			addMovie();
			menuMovie();
			break;
		case 3:
			removeMovie();
			menuMovie();
			break;
		case 4:
			break;
		case 5:
			exit(1);
		default:
			break;
		};
	};
	void showMovie() {
		//models.getAllMovie(movies);
		views.movieShow(movies);
		menuMovie();
	}
	void addMovie() {
		//models.getAllMovie(movies);
		Movie temp;
		temp = views.movieAdd();
		movies.insertFirst(temp);
		//models.movieAdd(temp);
		menuMovie();
	}
	void removeMovie() {
		
		//models.getAllMovie(movies);
		/*int _movieId;  
		_movieId = views.movieRemove(movies);
		for (int t = 0; t < movies.length; t++) {
			if (_movieId == movies[t].movieId) {
				movies.deletePosition(t);
			}
		}*/
		movies.deletePosition(1);
		views.movieShow(movies);
		//models.movieRemove(_movieId);
		menuMovie();
	}
};
#endif