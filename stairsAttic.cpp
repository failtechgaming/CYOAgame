#include <iostream>
#include <stdio.h>
#include "allRooms.h"
void ClearScreen();

void stairsAtticUp()
{

	ClearScreen();

	//room name
	std::cout << " ---------- " << '\n';
	std::cout << "| Attic Stairs |" << '\n';
	std::cout << " ----------" << '\n';

	// text for the room/encounter goes here

	std::cout << "You take the cramped stairs up to the attic." << '\n';
	std::cout << '\n';


	system("pause");
	// room to connect to
	roomAttic();

};

void stairsAtticUpB1a()
{

	ClearScreen();

	//room name
	std::cout << " ---------- " << '\n';
	std::cout << "| Door to Attic Stairs |" << '\n';
	std::cout << " ----------" << '\n';

	// text for the room/encounter goes here

	std::cout << "The door to the attic stairs is locked. The key from the old coat fits perfectly, and with a heavy " << '\n';
	std::cout << "click the door opens." << '\n';
	std::cout << '\n';


	system("pause");
	// room to connect to
	roomAtticB1();

};


void stairsAtticUpB1b()
{

	ClearScreen();

	//room name
	std::cout << " ---------- " << '\n';
	std::cout << "| Door to Attic Stairs |" << '\n';
	std::cout << " ----------" << '\n';

	// text for the room/encounter goes here

	std::cout << "The door to the attic stairs is locked. No matter how much you turn the knob, it doesn't open. " << '\n';
	std::cout << '\n';


	system("pause");
	// room to connect to
	roomGuestB1();

};

void stairsAtticUpB1c()
{

	ClearScreen();

	//room name
	std::cout << " ---------- " << '\n';
	std::cout << "| Door to Attic Stairs |" << '\n';
	std::cout << " ----------" << '\n';

	// text for the room/encounter goes here

	std::cout << "The door to the attic stairs opens easily since you unlocked it earlier. " << '\n';
	//std::cout << "click the door opens." << '\n';
	std::cout << '\n';


	system("pause");
	// room to connect to
	roomAtticB1e();

};

void stairsAtticDown()
{

	ClearScreen();

	//room name
	std::cout << " ---------- " << '\n';
	std::cout << "| Attic Stairs |" << '\n';
	std::cout << " ----------" << '\n';

	// text for the room/encounter goes here

	std::cout << "You take the cramped stairs down to the second floor, exiting into the guest room." << '\n';
	std::cout << '\n';


	system("pause");
	// room to connect to
	roomGuest();

};

void stairsAtticDownB1a()
{

	ClearScreen();

	//room name
	std::cout << " ---------- " << '\n';
	std::cout << "| Attic Stairs |" << '\n';
	std::cout << " ----------" << '\n';

	// text for the room/encounter goes here

	std::cout << "You take the cramped stairs down to the second floor, exiting into the guest room." << '\n';
	std::cout << '\n';


	system("pause");
	// room to connect to
	roomGuestB2a();

};