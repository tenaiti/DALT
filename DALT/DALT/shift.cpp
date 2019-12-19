#ifndef SHIFT_CPP
#define SHIFT_CPP
#include "shift.h"

Shift::Shift() {};
Shift::~Shift() {};
ostream& operator<<(ostream& ostream, Shift& shift)
{
	ostream << setw(20) << shift.shiftID << setw(20) << shift.shiftTime << endl;
	return ostream;
};
#endif