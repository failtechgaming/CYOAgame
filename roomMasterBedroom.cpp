#include <iostream>
#include <stdio.h>
#include "allRooms.h"
void ClearScreen();

/*
// RENAME FUNCTION
void roomMasterBedroom()
{

	ClearScreen();

	//room name
	std::cout << " ---------------- " << '\n';
	std::cout << "| Master Bedroom |" << '\n';
	std::cout << " ----------------" << '\n';

	// text for the room/encounter goes here

	std::cout << "EXAMPLE TEXT" << '\n';
tryAgain:
	std::cout << '\n';
	std::cout << "To enter the writing room, select option 1" << '\n';
	std::cout << "To go into the bathroom, select option 2" << '\n';
	std::cout << "To return to the second floor landing, select option 3" << '\n';
	std::cout << '\n';
	std::cout << "Please select option 1, 2, or 3" << '\n';

	char x{};
	

	std::cin >> x;
	std::cin.ignore(32767, '\n');

	switch (x)
	{
	case '1':
		roomWriting();
		break;
	case '2':
		roomBathroom();
		break;
	case '3':
		roomSecondFloorLanding();
	default:
		goto tryAgain;
		break;
	}

}
*/