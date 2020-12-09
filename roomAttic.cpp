#include <iostream>
#include <stdio.h>
#include "allRooms.h"

void ClearScreen();


// RENAME FUNCTION
void roomAttic()
{

	ClearScreen();

	//room name
	std::cout << " ------- " << '\n';
	std::cout << "| Attic |" << '\n';
	std::cout << " -------" << '\n';

	// text for the room/encounter goes here

	std::cout << "EXAMPLE TEXT" << '\n';
tryAgain:
	std::cout << '\n';
	std::cout << "To take the stairs down, select option 1" << '\n';
	std::cout << "To go around front and knock first, select option 2" << '\n';
	std::cout << '\n';
	std::cout << "Please select option 1 or 2" << '\n';

	char x{};
	

	std::cin >> x;
	std::cin.ignore(32767, '\n');

	switch (x)
	{
	case '1':
		stairsAtticDown();
		break;
	case '2':
		std::cout << "You chose option 2" << '\n'; //enter room function here
		break;
	default:
		goto tryAgain;
		break;
	}

}

void roomAtticB1()
{

	ClearScreen();

	//room name
	std::cout << " ------- " << '\n';
	std::cout << "| Attic |" << '\n';
	std::cout << " -------" << '\n';

	// text for the room/encounter goes here

	std::cout << "You enter the attic, a bare bulb illuminating the cramped quarters. You can't completely stand up" << '\n';
	std::cout << "as you hit your head on the pitched roof. Strewn about the floor of the attic is a number of" << '\n';
	std::cout << "shovels and pick axes, all caked with dirt and mud." << '\n';
tryAgain:
	std::cout << '\n';
	std::cout << "To take the stairs down, select option 1" << '\n';
	std::cout << "To investigate the dirty tools, select option 2" << '\n';
	std::cout << '\n';
	std::cout << "Please select option 1 or 2" << '\n';

	char x{};


	std::cin >> x;
	std::cin.ignore(32767, '\n');

	switch (x)
	{
	case '1':
		stairsAtticDown();
		break;
	case '2':
		std::cout << "You find the tools to be well worn and appear as though they have been recently used. Moving the tools propped" << '\n';
		std::cout << "against the far wall reveals a small door. " << '\n';
		system("pause");
		ClearScreen();
		roomAtticB1a();
		break;
	default:
		goto tryAgain;
		break;
	}

}

void roomAtticB1a()
{

	ClearScreen();

	//room name
	std::cout << " ------- " << '\n';
	std::cout << "| Attic |" << '\n';
	std::cout << " -------" << '\n';

	// POST TOOL-LOOKING, AWARE OF DOOR

	std::cout << "You enter the attic, a bare bulb illuminating the cramped quarters. You can't completely stand up" << '\n';
	std::cout << "as you hit your head on the pitched roof. Strewn about the floor of the attic is a number of" << '\n';
	std::cout << "shovels and pick axes, all caked with dirt and mud. A small door is set into the far wall." << '\n';
tryAgain:
	std::cout << '\n';
	std::cout << "To take the stairs down, select option 1" << '\n';
	std::cout << "To open the small door, select option 2" << '\n';
	std::cout << "Please select option 1 or 2" << '\n';

	char x{};


	std::cin >> x;
	std::cin.ignore(32767, '\n');

	switch (x)
	{
	case '1':
		stairsAtticDown();
		break;
	case '2':
		std::cout << "The small door appears to be locked with a padlock. As old as it looks, the padlock does not give." << '\n'; //enter room function here
		system("pause");
		ClearScreen();
		roomAtticB1b();
		break;
	default:
		goto tryAgain;
		break;
	}

}

void roomAtticB1b()
{

	ClearScreen();

	//room name
	std::cout << " ------- " << '\n';
	std::cout << "| Attic |" << '\n';
	std::cout << " -------" << '\n';

	// POST TOOL-LOOKING, AWARE OF DOOR (locked)

	std::cout << "You enter the attic, a bare bulb illuminating the cramped quarters. You can't completely stand up" << '\n';
	std::cout << "as you hit your head on the pitched roof. Strewn about the floor of the attic is a number of" << '\n';
	std::cout << "shovels and pick axes, all caked with dirt and mud. A small locked door is set into the far wall." << '\n';
tryAgain:
	std::cout << '\n';
	std::cout << "To take the stairs down, select option 1" << '\n';
	std::cout << "To open the small door, select option 2" << '\n';
	std::cout << "Please select option 1 or 2" << '\n';

	char x{};


	std::cin >> x;
	std::cin.ignore(32767, '\n');

	switch (x)
	{
	case '1':
		stairsAtticDown();
		break;
	case '2':
		std::cout << "PLEASE INSERT TEXT HERE." << '\n'; //enter room function here
		system("pause");
		ClearScreen();
		roomAtticB1a();
		break;
	default:
		goto tryAgain;
		break;
	}

}