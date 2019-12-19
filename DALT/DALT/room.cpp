#ifndef ROOM_CPP
#define ROOM_CPP
#include "room.h"
Room::Room() {};
Room::~Room() {};
ostream& operator<<(ostream& ostream, Room& room)
{
	ostream << setw(20) << room.roomID << setw(20) << room.roomCapacity << endl;
	return ostream;
};
#endif
