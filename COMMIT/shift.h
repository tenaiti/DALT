#pragma once
#ifndef SHIFT_H
#define SHIFT_H
#include<iostream>
#include<iomanip>
#include <stdlib.h>
#include "LinkedList.h"
using namespace std;
class Shift
{
public:
	int shiftID;
	char shiftTime[20];
	Shift();
	~Shift();
	friend ostream& operator<<(ostream&, Shift&);
};
class ShiftController {
	public:
		List<Shift> shifts;
	class {
	public:
		int shift() {
			system("cls");
			int n;
			cout
				<< "+---------------------------+" << endl
				<< "|                           |" << endl
				<< "| CNIEMA Management System  |" << endl
				<< "|                           |" << endl
				<< "+-----------TIMES-----------+" << endl
				<< "|1. Show Shift              |" << endl
				<< "|2. Back                    |" << endl
				<< "|3. Exit                    |" << endl
				<< "+---------------------------+" << endl
				<< "Your option: ";
			cin >> n;
			return n;
		}
		void showShift(List<Shift>& shifts) {
			cout << endl << "SHIFT SHOW" << endl
				<< setw(20) << "SHIFT ID" << setw(20) << "SHIFT TIME" << endl;
			for (int i = 0; i < shifts.length; i++)
			{
				cout << shifts[i];
			}
		}
		
	}views;
	void menuShift() {
		switch (views.shift()) {
		case 1:
			showShift();
			menuShift();
		case 2:
			//showShift();
			this->views.shift();
		case 3:
			exit(1);
		}
	}
	void showShift() {
		List<Shift> shifts;
		//models.getAllShift(shifts);
		views.showShift(shifts);
		views.shift();

	}
};
#endif