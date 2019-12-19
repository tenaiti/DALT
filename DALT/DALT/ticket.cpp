#pragma once
#ifndef TICKET_CPP
#define TICKET_CPP
#include "ticket.h"
Ticket::Ticket() {};
Ticket::~Ticket() {};
ostream& operator<<(ostream& ostream, Ticket& ticket)
{
	ostream << setw(10) << ticket.ticketID << setw(15) << ticket.timesID << setw(15) << ticket.seatID << endl;
	return ostream;
};
istream& operator>>(istream& istream, Ticket& ticket)
{
	cout << "Times ID: ";
	istream >> ticket.timesID;
	cout << "Seat ID: ";
	istream.ignore();
	istream.get(ticket.seatID, 5);
	return istream;
};
#endif