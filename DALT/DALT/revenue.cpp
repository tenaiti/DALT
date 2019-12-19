#ifndef REVENUE_CPP
#define REVENUE_CPP
#include "revenue.h"
Revenue::Revenue() {};
Revenue::~Revenue() {};
ostream& operator<<(ostream& ostream, Revenue& revenues)
{
	ostream << setw(10) << revenues.movieID << setw(25) << revenues.movieName << setw(10) << revenues.quantity << setw(20) << revenues.quantity * 40000 << " VND" << endl;
	return ostream;
};
#endif