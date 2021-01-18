#include <iostream>
#include <stdio.h>
#include "allRooms.h"
void ClearScreen();

/*
// RENAME FUNCTION
void roomParlor()
{

	ClearScreen();

	//room name
	std::cout << " -------- " << '\n';
	std::cout << "| Parlor |" << '\n';
	std::cout << " --------" << '\n';

	// text for the room/encounter goes here

	std::cout << "EXAMPLE TEXT" << '\n';
tryAgain:
	std::cout << '\n';
	std::cout << "To return to the entrance, select option 1" << '\n';
	std::cout << "To go into the study, select option 2" << '\n';
	std::cout << '\n';
	std::cout << "Please select option 1 or 2" << '\n';

	char x{};
	

	std::cin >> x;
	std::cin.ignore(32767, '\n');

	switch (x)
	{
	case '1':
		roomEntrance();
		break;
	case '2':
		roomStudy();
		break;
	default:
		goto tryAgain;
		break;
	}

}
*/