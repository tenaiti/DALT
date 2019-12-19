#pragma once
#ifndef TIMES_H
#define TIMES_H
#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include "LinkedList.h"
using namespace std;

class Times
{
public:
	int timesID;
	int movieID;
	int roomID;
	int shiftID;
	Times();
	~Times();
	friend ostream& operator<<(ostream&, Times&);
};
class TimesController {
public:
	List<Times> times;
	class {
	public:
		int times() {
			system("cls");
			int n;
			cout
				<< "+---------------------------+" << endl
				<< "|                           |" << endl
				<< "| CNIEMA Management System  |" << endl
				<< "|                           |" << endl
				<< "+-----------TIMES-----------+" << endl
				<< "|1. Show Times Movie        |" << endl
				<< "|2. Back                    |" << endl
				<< "+---------------------------+" << endl
				<< "Your option: ";
			cin >> n;
			return n;
		}
		/*void timesShowMovie(List<detailTimes>& detail, List<Movie>& movies, List<Shift>& shifts) {
			cout << "TIMES SHOW" << endl;
			cout << setw(10) << "TIMESID" << setw(10) << "MOVIE ID" << setw(25) << "MOVIE NAME" << setw(20) << "TIME" << setw(10) << "ROOM ID" << endl;
			for (int i = 0; i < detail.length; i++) {
				for (int t = 0; t < detail.length; t++) {
					if (detail[i].movieID == movies[t].movieId) {
						for (int j = 0; j < 35; j++) {
							detail[i].movieName[j] = movies[t].movieName[j];
						}
					}
				}
			}
			for (int i = 0; i < detail.length; i++) {
				for (int t = 0; t < detail.length; t++) {
					if (detail[i].shiftID == shifts[t].shiftID) {
						for (int j = 0; j < 20; j++) {
							detail[i].shiftTime[j] = shifts[t].shiftTime[j];
						}
					}
				}
			}
			detailTimes sort;
			for (int i = 0; i < detail.length - 1; i++) {
				for (int j = i + 1; j < detail.length; j++) {
					if (detail[i].movieID < detail[j].movieID) {
						sort = detail[i];
						detail[i] = detail[j];
						detail[j] = sort;
					}
				}
			}
			for (int i = 0; i < detail.length; i++)
			{
				cout << detail[i];
			}
		}*/
	}views;
	void menuTimes() {
		switch (views.times()){
			case 1:
				showTimeMovie();
				menuTimes();
			//case 2:
			//	showTimeShift();
			//	menuTimes();
			default:	
				break;
		}
	}
	void showTimeMovie() {
		/*List<Movie> movies;
		Movie movie;
		models.getAllMovie(movies);
		List<Shift> shifts;
		Shift shift;
		models.getAllShift(shifts);
		List<detailTimes> detail;
		models.getIDTimes(detail);
		views.timesShowMovie(detail, movies, shifts);*/
		menuTimes();
	}
	void showTimeShift() {

	}

};
#endif