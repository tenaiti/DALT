#ifndef SHIFT_CPP
#define SHIFT_CPP
#include <iostream>
#include <iomanip>
#include "detailTimes.h"
using namespace std;
detailTimes::detailTimes() {
	movieName[0] = '\0';
	shiftTime[0] = '\0';
};
detailTimes::~detailTimes() {};
ostream& operator<<(ostream& ostream, detailTimes& detail)
{
	ostream << setw(10) << detail.timesID << setw(10) << detail.movieID << setw(25) << detail.movieName << setw(20) << detail.shiftTime << setw(10) << detail.roomID << endl;
	return ostream;
};
#endif