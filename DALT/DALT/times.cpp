#ifndef TIMES_CPP
#define TIMES_CPP

#include "times.h"
Times::Times() {};
Times::~Times() {};
ostream& operator<<(ostream& ostream, Times& times)
{
	ostream << "TIMES SHOW" << endl;
	return ostream;
};
#endif