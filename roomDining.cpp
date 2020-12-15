#include <iostream>
#include <stdio.h>
#include "allRooms.h"
void ClearScreen();


// RENAME FUNCTION
void roomDining()
{

	ClearScreen();

	//room name
	std::cout << " -------- " << '\n';
	std::cout << "| Dining |" << '\n';
	std::cout << " --------" << '\n';

	// text for the room/encounter goes here

	std::cout << "EXAMPLE TEXT" << '\n';
tryAgain:
	std::cout << '\n';
	std::cout << "To enter the entryway of the house, select option 1" << '\n';
	std::cout << "To go into the kitchen, select option 2" << '\n';
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
		roomKitchen();
		break;
	default:
		goto tryAgain;
		break;
	}

}

void roomDiningB1()
{

	ClearScreen();

	//room name
	std::cout << " -------- " << '\n';
	std::cout << "| Dining |" << '\n';
	std::cout << " --------" << '\n';

	// text for the room/encounter goes here

	std::cout << "This is a formal dining room, with long table set for a large group. The china and silver are" << '\n';
	std::cout << "pristine and appear as if they've never been used. A fine layer of dust has settled over everything." << '\n';
	std::cout << "There is a door to the kitchen, and a door to the entryway of the house. " << '\n';
tryAgain:
	std::cout << '\n';
	std::cout << "To enter the entryway of the house, select option 1" << '\n';
	std::cout << "To go into the kitchen, select option 2" << '\n';
	// add an option about looking at the dishware?
	std::cout << '\n';
	std::cout << "Please select option 1 or 2" << '\n';

	char x{};
	std::cin >> x;
	std::cin.ignore(32767, '\n');

	switch (x)
	{
	case '1':
		roomEntranceB1();
		break;
	case '2':
		roomKitchenB1c();
		break;
	default:
		goto tryAgain;
		break;
	}

}

void roomDiningB2a()
{

	ClearScreen();

	//room name
	std::cout << " -------- " << '\n';
	std::cout << "| Dining |" << '\n';
	std::cout << " --------" << '\n';

	// text for the room/encounter goes here

	std::cout << "This is a formal dining room, with long table set for a large group. The china and silver are" << '\n';
	std::cout << "pristine and appear as if they've never been used. A fine layer of dust has settled over everything." << '\n';
	std::cout << "There is a door to the kitchen, and a door to the entryway of the house. " << '\n';
tryAgain:
	std::cout << '\n';
	std::cout << "To enter the entryway of the house, select option 1" << '\n';
	std::cout << "To go into the kitchen, select option 2" << '\n';
	// add an option about looking at the dishware?
	std::cout << '\n';
	std::cout << "Please select option 1 or 2" << '\n';

	char x{};
	std::cin >> x;
	std::cin.ignore(32767, '\n');

	switch (x)
	{
	case '1':
		roomEntranceB2a();
		break;
	case '2':
		roomKitchenB2a();
		break;
	default:
		goto tryAgain;
		break;
	}

}

void roomDiningB2b()
{

	ClearScreen();

	//room name
	std::cout << " -------- " << '\n';
	std::cout << "| Dining |" << '\n';
	std::cout << " --------" << '\n';

	// text for the room/encounter goes here

	std::cout << "This is a formal dining room, with long table set for a large group. The china and silver are" << '\n';
	std::cout << "pristine and appear as if they've never been used. A fine layer of dust has settled over everything." << '\n';
	std::cout << "There is a door to the kitchen, and a door to the entryway of the house. " << '\n';
tryAgain:
	std::cout << '\n';
	std::cout << "To enter the entryway of the house, select option 1" << '\n';
	std::cout << "To go into the kitchen, select option 2" << '\n';
	// add an option about looking at the dishware?
	std::cout << '\n';
	std::cout << "Please select option 1 or 2" << '\n';

	char x{};
	std::cin >> x;
	std::cin.ignore(32767, '\n');

	switch (x)
	{
	case '1':
		roomEntranceB2c();
		break;
	case '2':
		roomKitchenB2b();
		break;
	default:
		goto tryAgain;
		break;
	}

}