#include <iostream>
#include <stdio.h>
#include "allRooms.h"

void ClearScreen();


// RENAME FUNCTION
void roomSecondFloorLanding()
{

	ClearScreen();

	//room name
	std::cout << " ---------------------- " << '\n';
	std::cout << "| Second Floor Landing |" << '\n';
	std::cout << " ----------------------" << '\n';

	// text for the room/encounter goes here

	std::cout << "EXAMPLE TEXT" << '\n';
tryAgain:
	std::cout << '\n';
	std::cout << "To enter the master bedroom, select option 1" << '\n';
	std::cout << "To go into the guest room, select option 2" << '\n';
	std::cout << "To take the stairs down to the first floor, select option 3" << '\n';
	std::cout << '\n';
	std::cout << "Please select option 1, 2, or 3" << '\n';

	char x{};


	std::cin >> x;
	std::cin.ignore(32767, '\n');

	switch (x)
	{
	case '1':
		roomMasterBedroom();
		break;
	case '2':
		roomGuest();
		break;
	case '3':
		stairsEntranceDown();
	default:
		goto tryAgain;
		break;
	}

}

void roomSecondFloorLandingB1()
{

	ClearScreen();

	//room name
	std::cout << " ---------------------- " << '\n';
	std::cout << "| Second Floor Landing |" << '\n';
	std::cout << " ----------------------" << '\n';

	// text for the room/encounter goes here

	//HAS KEYS

	std::cout << "The cramped landing at the top of the stairs has two doors on opposite sides, one leading to the master" << '\n';
	std::cout << "bedroom and the other to the guest bedroom." << '\n';
tryAgain:
	std::cout << '\n';
	std::cout << "To enter the master bedroom, select option 1" << '\n';
	std::cout << "To go into the guest room, select option 2" << '\n';
	std::cout << "To take the stairs down to the first floor, select option 3" << '\n';
	std::cout << '\n';
	std::cout << "Please select option 1, 2, or 3" << '\n';

	char x{};


	std::cin >> x;
	std::cin.ignore(32767, '\n');

	switch (x)
	{
	case '1':
		roomMasterBedroom();
		break;
	case '2':
		roomGuestB1b();
		break;
	case '3':
		stairsEntranceDown();
	default:
		goto tryAgain;
		break;
	}

}

void roomSecondFloorLandingB1a()
{

	ClearScreen();

	//room name
	std::cout << " ---------------------- " << '\n';
	std::cout << "| Second Floor Landing |" << '\n';
	std::cout << " ----------------------" << '\n';

	// text for the room/encounter goes here

	//DOES NOT HAVE KEYS

	std::cout << "The cramped landing at the top of the stairs has two doors on opposite sides, one leading to the master" << '\n';
	std::cout << "bedroom and the other to the guest bedroom." << '\n';
tryAgain:
	std::cout << '\n';
	std::cout << "To enter the master bedroom, select option 1" << '\n';
	std::cout << "To go into the guest room, select option 2" << '\n';
	std::cout << "To take the stairs down to the first floor, select option 3" << '\n';
	std::cout << '\n';
	std::cout << "Please select option 1, 2, or 3" << '\n';

	char x{};


	std::cin >> x;
	std::cin.ignore(32767, '\n');

	switch (x)
	{
	case '1':
		roomMasterBedroom();
		break;
	case '2':
		roomGuestB1a();
		break;
	case '3':
		stairsEntranceDown();
	default:
		goto tryAgain;
		break;
	}

}

void roomSecondFloorLandingB2a()
{

	ClearScreen();

	//room name
	std::cout << " ---------------------- " << '\n';
	std::cout << "| Second Floor Landing |" << '\n';
	std::cout << " ----------------------" << '\n';

	// text for the room/encounter goes here

	std::cout << "EXAMPLE TEXT" << '\n';
tryAgain:
	std::cout << '\n';
	std::cout << "To enter the master bedroom, select option 1" << '\n';
	std::cout << "To go into the guest room, select option 2" << '\n';
	std::cout << "To take the stairs down to the first floor, select option 3" << '\n';
	std::cout << '\n';
	std::cout << "Please select option 1, 2, or 3" << '\n';

	char x{};


	std::cin >> x;
	std::cin.ignore(32767, '\n');

	switch (x)
	{
	case '1':
		roomMasterBedroom();
		break;
	case '2':
		roomGuestB2a();
		break;
	case '3':
		stairsEntranceDown();
	default:
		goto tryAgain;
		break;
	}

}
