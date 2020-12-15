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
		std::cout << "against the far wall reveals a small door. A trowel is among the tools you moved. " << '\n';
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
	std::cout << "To take the trowel, select option 3" << '\n';
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
	case '3':
		std::cout << "You take the small trowel and pocket it." << '\n';
		system("pause");
		ClearScreen();
		roomAtticB1c();
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
	// ADD LINE ABOUT TROWEL

	std::cout << "You enter the attic, a bare bulb illuminating the cramped quarters. You can't completely stand up" << '\n';
	std::cout << "as you hit your head on the pitched roof. Strewn about the floor of the attic is a number of" << '\n';
	std::cout << "shovels and pick axes, all caked with dirt and mud. A small locked door is set into the far wall." << '\n';
tryAgain:
	std::cout << '\n';
	std::cout << "To take the stairs down, select option 1" << '\n';
	std::cout << "To open the small door, select option 2" << '\n';
	std::cout << "To take the trowel, select option 3" << '\n';
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
		roomAtticB1a();
		break;
	case '3':
		std::cout << "You take the small trowel and pocket it." << '\n';
		system("pause");
		ClearScreen();
		roomAtticB1c();
		break;
	default:
		goto tryAgain;
		break;
	}

}

void roomAtticB1c()
{

	ClearScreen();

	//room name
	std::cout << " ------- " << '\n';
	std::cout << "| Attic |" << '\n';
	std::cout << " -------" << '\n';

	// POST TOOL-LOOKING, AWARE OF DOOR (locked)
	// HAVE TROWEL
	// ADDED PADLOCK BREAK

	std::cout << "You enter the attic, a bare bulb illuminating the cramped quarters. You can't completely stand up" << '\n';
	std::cout << "as you hit your head on the pitched roof. Strewn about the floor of the attic is a number of" << '\n';
	std::cout << "shovels and pick axes, all caked with dirt and mud. A small locked door is set into the far wall." << '\n';
tryAgain:
	std::cout << '\n';
	std::cout << "To take the stairs down, select option 1" << '\n';
	std::cout << "To open the small door, select option 2" << '\n';
	std::cout << "To force the padlock with the trowel, select option 3" << '\n';
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
		roomAtticB1a();
		break;
	case '3':
		std::cout << "The padlock shank snaps from the pressure applied with the trowel and the lock slides off the latch." << '\n';
		system("pause");
		ClearScreen();
		roomAtticB1d();
		break;
	default:
		goto tryAgain;
		break;
	}

}

void roomAtticB1d()
{

	ClearScreen();

	//room name
	std::cout << " ------------- " << '\n';
	std::cout << "| Attic (Small Room) |" << '\n';
	std::cout << " -------------" << '\n';

	// POST TOOL-LOOKING, AWARE OF DOOR (locked)
	// HAVE TROWEL
	// ADDED PADLOCK BREAK

	std::cout << "The small room in the back of the attic is full of stacks of paper, covered in layers of dust." << '\n';
	std::cout << "The stacks of paper include newspaper clippings of unsolved murders and ADD TEXT HERE " << '\n';
	//std::cout << "shovels and pick axes, all caked with dirt and mud. A small locked door is set into the far wall." << '\n';
tryAgain:
	std::cout << '\n';
	std::cout << "To read the top article, select option 1" << '\n';
	std::cout << "To leave the small room, select option 2" << '\n';
		std::cout << "Please select option 1 or 2" << '\n';

	char x{};


	std::cin >> x;
	std::cin.ignore(32767, '\n');

	switch (x)
	{
	case '1':
		ClearScreen();
		std::cout << "HERE IS THE TEXT OF THE NEWSPAPER CLIPPING" << '\n';
		system("pause");
		ClearScreen();
		roomAtticB1d();
		break;
	case '2':
		std::cout << "You return to the main attic room." << '\n'; //enter room function here
		system("pause");
		ClearScreen();
		roomAtticB1e();
		break;
	default:
		goto tryAgain;
		break;
	}

}

void roomAtticB1e()
{

	ClearScreen();

	//room name
	std::cout << " ------- " << '\n';
	std::cout << "| Attic |" << '\n';
	std::cout << " -------" << '\n';

	// POST LOOKING IN SMALL ROOM

	std::cout << "You enter the attic, a bare bulb illuminating the cramped quarters. You can't completely stand up" << '\n';
	std::cout << "as you hit your head on the pitched roof. Strewn about the floor of the attic is a number of" << '\n';
	std::cout << "shovels and pick axes, all caked with dirt and mud. A small door is set into the far wall that you just came out of." << '\n';
tryAgain:
	std::cout << '\n';
	std::cout << "To take the stairs down, select option 1" << '\n';
	std::cout << "To enter the small door, select option 2" << '\n';
	std::cout << "Please select option 1 or 2" << '\n';

	char x{};


	std::cin >> x;
	std::cin.ignore(32767, '\n');

	switch (x)
	{
	case '1':
		stairsAtticDownB1a();
		break;
	case '2':
		std::cout << "You hunch over to fit through the small door." << '\n'; //enter room function here
		system("pause");
		ClearScreen();
		roomAtticB1d();
		break;
	default:
		goto tryAgain;
		break;
	}

}

void roomAtticB1f()
{

	ClearScreen();

	//room name
	std::cout << " ------- " << '\n';
	std::cout << "| Attic |" << '\n';
	std::cout << " -------" << '\n';

	// POST LOOKING IN SMALL ROOM

	std::cout << "You enter the attic, a bare bulb illuminating the cramped quarters. You can't completely stand up" << '\n';
	std::cout << "as you hit your head on the pitched roof. Strewn about the floor of the attic is a number of" << '\n';
	std::cout << "shovels and pick axes, all caked with dirt and mud. A small door is set into the far wall that you just came out of." << '\n';
tryAgain:
	std::cout << '\n';
	std::cout << "To take the stairs down, select option 1" << '\n';
	std::cout << "To enter the small door, select option 2" << '\n';
	std::cout << "Please select option 1 or 2" << '\n';

	char x{};


	std::cin >> x;
	std::cin.ignore(32767, '\n');

	switch (x)
	{
	case '1':
		stairsAtticDownB2b();
		break;
	case '2':
		std::cout << "You hunch over to fit through the small door." << '\n'; //enter room function here
		system("pause");
		ClearScreen();
		roomAtticB1d();
		break;
	default:
		goto tryAgain;
		break;
	}

}

