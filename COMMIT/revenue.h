#pragma once
#ifndef REVENUE_H
#define REVENUE_H
#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include "LinkedList.h"
using namespace std;
class Revenue
{
public:
	int movieID;
	char movieName[35];
	int quantity;
	Revenue();
	~Revenue();
	friend ostream& operator<<(ostream&, Revenue&);
};
class RevenueController {
public:
	List<Revenue> revenues;
public:
	class {
	public:
		int revenue() {
			system("cls");
			int n;
			cout << "+---------------------------+" << endl
				 << "|                           |" << endl
				 << "| CNIEMA Management System  |" << endl
				 << "|                           |" << endl
				 << "+----------REVENUE----------+" << endl
				 << "|1. Revenue each movie      |" << endl
				 << "|2. Revenue all movie       |" << endl
				 << "|3. Back                    |" << endl
				 << "+---------------------------+" << endl
				 << "Your option: ";
			cin >> n;
			return n;
		}
		void revenueMovie() {
			/*cout << endl
				<< "REVENUE SHOW" << endl;
			cout << setw(10) << "MOVIE ID" << setw(25) << "MOVIE NAME" << setw(10) << "QUANTITY" << setw(20) << "REVENUE" << endl;
			for (int t = 0; t < revenues.length; t++) {
				for (int j = 0; j < times.length; j++) {
					if (revenues[t].movieID == times[j].movieID) {
						for (int i = 0; i < tickets.length; i++) {
							if (times[j].timesID == tickets[i].timesID) {
								revenues[t].quantity = revenues[t].quantity + 1;
							}
						}
					}
				}
			}
			Revenue sort;
			for (int i = 0; i < revenues.length - 1; i++) {
				for (int j = i + 1; j < revenues.length; j++) {
					if (revenues[i].quantity < revenues[j].quantity) {
						sort = revenues[i];
						revenues[i] = revenues[j];
						revenues[j] = sort;
					}
				}
			}
			for (int i = 0; i < revenues.length; i++)
			{
				cout << revenues[i];
			}*/
		}
		void revenueAll() {
			/*cout << endl
				<< "TOTAL REVENUE: " << endl;
			cout << "Total Ticket:  " << setw(20) << revenueTotal.length << endl;
			cout << "Total Revenue: " << setw(20) << revenueTotal.length * 400000 << " VND" << endl;*/
		}
	}views;
	void menuRevenue() {
		switch (views.revenue())
		{
		case 1:
			revenueMovie();
			menuRevenue();
		case 2:
			revenueAll();
			menuRevenue();
		default:
			break;
		}
	}
	void revenueMovie() {
		/*List<Movie> movies;
		List<Times> times;
		List<Ticket> tickets;
		Movie movie;*/
		/*models.getAllMovie(movies);
		Times time;
		models.getAllTimes(times);
		Ticket ticket;
		models.getAllTicket(tickets);
		List<Revenue> revenues;
		Revenue revenuess;
		models.setRevenue(revenues);
		views.revenueShow(movies, times, tickets, revenues, movie, time, ticket, revenuess);
		revenue();*/
	}
	void revenueAll() {
		/*List<Ticket> tickets;*/
		/*models.getAllTicket(tickets);
		views.revenueShowTotal(tickets);
		revenue();*/
	}

};
#endif

