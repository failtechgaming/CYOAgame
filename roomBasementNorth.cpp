#include <iostream>
#include <stdio.h>
#include "allRooms.h"
void ClearScreen();


// RENAME FUNCTION
void roomBasementNorth()
{

	ClearScreen();

	//room name
	std::cout << " ------------------ " << '\n';
	std::cout << "| Basement (North) |" << '\n';
	std::cout << " ------------------" << '\n';

	// text for the room/encounter goes here

	std::cout << "EXAMPLE TEXT" << '\n';
tryAgain:
	std::cout << '\n';
	std::cout << "To take the stairs up to the first floor, select option 1" << '\n';
	std::cout << "To explore further into the basement, select option 2" << '\n';
	std::cout << '\n';
	std::cout << "Please select option 1 or 2" << '\n';

	char x{};
	

	std::cin >> x;
	std::cin.ignore(32767, '\n');

	switch (x)
	{
	case '1':
		stairsBasementUp();
		break;
	case '2':
		roomBasementSouth();
		break;
	default:
		goto tryAgain;
		break;
	}

}