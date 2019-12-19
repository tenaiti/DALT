#pragma once
#ifndef DETAILTIMES_H
#define DETAILTIMES_H
#include <iostream>
#include <iomanip>
using namespace std;
class detailTimes
{
public:
	int timesID;
	int movieID;
	int roomID;
	int shiftID;
	char movieName[35];
	char shiftTime[20];
	detailTimes();
	~detailTimes();
	friend ostream& operator<<(ostream&, detailTimes&);
};
#endif
