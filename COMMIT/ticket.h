#ifndef TICKET_H
#define TICKET_H
#include <iostream>
#include <iomanip>
#include <stdlib.h>
using namespace std;

class Ticket
{
public:
	int ticketID;
	int timesID;
	char seatID[5];
	Ticket();
	~Ticket();
	friend ostream& operator<<(ostream&, Ticket&);
	friend istream& operator>>(istream&, Ticket&);
};
class TicketController {
public:
	class {
	public:
		int ticket() {
			system("cls");
			int n;
			cout
				<< "+---------------------------+" << endl
				<< "|                           |" << endl
				<< "| CNIEMA Management System  |" << endl
				<< "|                           |" << endl
				<< "+-----------TIMES-----------+" << endl
				<< "|1. Show Times Movie        |" << endl
				<< "|2. Show Times Shift        |" << endl
				<< "|3. Back                    |" << endl
				<< "+---------------------------+" << endl
				<< "Your option: ";
			cin >> n;
			return n;
		}
		void timesShowMovie() {
			/*List<Movie> movies;
			Movie movie;
			models.getAllMovie(movies);
			List<Shift> shifts;
			Shift shift;
			models.getAllShift(shifts);
			List<detailTimes> detail;
			models.getIDTimes(detail);
			views.timesShowMovie(detail, movies, shifts);
			List<Ticket> tickets;
			models.getAllTicket(tickets);
			Ticket temp;
			temp = views.ticketAdd();
			tickets.insertFirst(temp);
			models.ticketAdd(temp);
			ticketBuy();*/

		}
		void timesShowShift() {
			/*List<Movie> movies;
			Movie movie;
			models.getAllMovie(movies);
			List<Shift> shifts;
			Shift shift;
			models.getAllShift(shifts);
			List<detailTimes> detail;
			models.getIDTimes(detail);
			views.timesShowShift(detail, movies, shifts);
			List<Ticket> tickets;
			models.getAllTicket(tickets);
			Ticket temp;
			temp = views.ticketAdd();
			tickets.insertFirst(temp);
			models.ticketAdd(temp);
			ticketBuy();*/
		}
	}views;
	void menuTicket() {
		switch (views.ticket())
		{	
		case 1:
			timesShowMovie();
			menuTicket();
		case 2:
			timesShowShift();
			menuTicket();
		default:
			break;
		}
	}
	void timesShowMovie() {
		views.timesShowMovie();
		//List<Movie> movies;
		//Movie movie;
		//models.getAllMovie(movies);
		//List<Shift> shifts;
		//Shift shift;
		//models.getAllShift(shifts);
		//List<detailTimes> detail;
		//models.getIDTimes(detail);
		//views.timesShowMovie(detail, movies, shifts);
		//List<Ticket> tickets;
		//models.getAllTicket(tickets);
		//Ticket temp;
		//temp = views.ticketAdd();
		//tickets.insertFirst(temp);
		//models.ticketAdd(temp);
		//ticketBuy();
	}
	void timesShowShift() {
	/*	List<Movie> movies;
		Movie movie;
		models.getAllMovie(movies);
		List<Shift> shifts;
		Shift shift;
		models.getAllShift(shifts);
		List<detailTimes> detail;
		models.getIDTimes(detail);
		views.timesShowShift(detail, movies, shifts);
		List<Ticket> tickets;
		models.getAllTicket(tickets);
		Ticket temp;
		temp = views.ticketAdd();
		tickets.insertFirst(temp);
		models.ticketAdd(temp);
		ticketBuy()*/
		views.timesShowShift();
	}
};
#endif