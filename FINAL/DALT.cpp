#include <iostream>
#include <stdlib.h>
using namespace std;
#include "movie.h"
#include "room.h"
#include "shift.h"
#include "revenue.h"
#include "ticket.h"
#include "times.h"
#include "detailTimes.h"
#include "models.h"
MovieController movies;
RoomController rooms;
TicketController tickets;
ShiftController shifts;
TimesController times;
RevenueController revenues;
class {
public:
	class {
	public:
		int menu() {
			cout<< "+-------------------------------------------------+" <<endl
				<< "|            NHOM DALT_02 - 18TCLDT3-18N15        |" << endl
				<< "| THANH VIEN NHOM: NGUYEN KIM HUY                 |" << endl
				<< "|                  VO VAN MUOI                    |" << endl
				<< "|                  VAN NGOC DAT                   |" << endl
				<< "|                  NGUYEN NGOC KHOI               |" << endl
				<< "+-------------------------------------------------+" << endl
				<< "|                                                 |" << endl
				<< "|            CNIEMA Management System             |" << endl
				<< "|                                                 |" << endl
				<< "+-------------------------------------------------+" << endl
				<< "|1. MOVIE                                         |" << endl
				<< "|2. ROOM                                          |" << endl
				<< "|3. TICKET                                        |" << endl
				<< "|4. SHIFT                                         |" << endl
				<< "|5. SHOWTIMES                                     |" << endl
				<< "|6. REVENUE                                       |" << endl
				<< "|7. EXIT                                          |" << endl
				<< "+-------------------------------------------------+" << endl
				<< "Your option: ";
			int n;
			cin >> n;
			return n;
		}
	} views;
	void render() {
		switch (views.menu())
		{	
		case 1:
			movies.menuMovie();
			break;
		case 2:
			rooms.menuRoom();
		case 3:
			tickets.menuTicket();
		case 4:
			shifts.menuShift();
		case 5:
			times.menuTimes();
		case 6:
			revenues.menuRevenue();
		case 7:
			break;
		default:
			this->render();
		}

	}
} home;
int main()
{
	system("cls");
	home.render();
	return 0;
}