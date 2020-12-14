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

void roomBasementNorthB2a()
{

	ClearScreen();

	//room name
	std::cout << " ------------------ " << '\n';
	std::cout << "| Basement (North) |" << '\n';
	std::cout << " ------------------" << '\n';

	// text for the room/encounter goes here

	std::cout << "As you enter the basement, the cold, damp air surrounds you. You find yourself" << '\n';
	std::cout << "in a small dirt room with nothing much of interest. The back wall is made of " << '\n';
	std::cout << "mortar and stone. Footprints in the dirt show recent activity." << '\n';


tryAgain:
	std::cout << '\n';
	std::cout << "To take the stairs up to the first floor, select option 1" << '\n';
	std::cout << "To explore further into the basement, select option 2" << '\n';
	std::cout << "To investigate the stone wall, select option 3" << '\n';
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
	case '3':
		std::cout << "Looking at the wall, you notice some stones out of place. The trowel easily" << '\n';
		std::cout << "fits between the stones, and the mortar has not entirely set yet, allowing" << '\n';
		std::cout << "you to quickly remove a sizable section of the wall." << '\n';
		system("pause");
		ClearScreen();
		roomBasementNorthB2b();
		break;
	default:
		goto tryAgain;
		break;
	}

}

void roomBasementNorthB2b()
{
	//post stone wall removal
	ClearScreen();

	//room name
	std::cout << " ------------------ " << '\n';
	std::cout << "| Basement (North) |" << '\n';
	std::cout << " ------------------" << '\n';

	// text for the room/encounter goes here

	std::cout << "As you enter the basement, the cold, damp air surrounds you. You find yourself" << '\n';
	std::cout << "in a small dirt room with nothing much of interest. The back wall is made of " << '\n';
	std::cout << "mortar and stone. Footprints in the dirt show recent activity." << '\n';


tryAgain:
	std::cout << '\n';
	std::cout << "To take the stairs up to the first floor, select option 1" << '\n';
	std::cout << "To explore further into the basement, select option 2" << '\n';
	std::cout << "To step through the hole in the wall, select option 3" << '\n';
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
	case '3':
		roomBasementSouthB2a();
		break;
	default:
		goto tryAgain;
		break;
	}

}

