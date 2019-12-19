#pragma once
#ifndef ROOM_H
#define ROOM_H
#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include "LinkedList.h"
using namespace std;
class Room
{
public:
	int roomID;
	int roomCapacity;
	Room();
	~Room();
	friend ostream& operator<<(ostream&, Room&);
};
class RoomController {
	public:
		List<Room> rooms;
	class {
	public:
		int room() {
			system("cls");
			int n;
			cout
				<< "+---------------------------+" << endl
				<< "|                           |" << endl
				<< "| CNIEMA Management System  |" << endl
				<< "|                           |" << endl
				<< "+------------ROOM-----------+" << endl
				<< "|1. Show Room               |" << endl
				<< "|2. Back                    |" << endl
				<< "+---------------------------+" << endl
				<< "Your option: ";
			cin>> n;
			return n;
		}
		void showRooms(List<Room>& rooms) {
			cout << endl << "ROOM SHOW:" << endl
				<< setw(20) << "ROOM ID" << setw(20) << "ROOM CAPACITY" << endl;
			for (int i = 0; i < rooms.length; i++)
			{
				cout << rooms[i];
			}
		}

	}views;
	void menuRoom() {
		switch (views.room())
		{
		case 1:
			showRooms();
			menuRoom();
			break;
		default:
			break;
		}
	}
	void showRooms() {
		List<Room> rooms;
		//models.getAllRoom(rooms);
		views.showRooms(rooms);
	}
	
};
#endif

