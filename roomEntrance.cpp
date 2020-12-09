#include <iostream>
#include <stdio.h>
#include "allRooms.h"
void ClearScreen();




void roomEntrance()
{

	ClearScreen();
	// text for the room/encounter goes here

		//room name
	std::cout << " ---------- " << '\n';
	std::cout << "| Entryway |" << '\n';
	std::cout << " ----------" << '\n';

	std::cout << "EXAMPLE TEXT" << '\n';
tryAgain:
	std::cout << '\n';
	std::cout << "To go into the dining room, select option 1" << '\n';
	std::cout << "To enter the parlor, select option 2" << '\n';
	std::cout << "To take the stairs to the second floor, select option 3" << '\n';
	std::cout << "To leave through the front door, select option 4" << '\n';
	std::cout << '\n';
	std::cout << "Please select option 1, 2, 3, or 4" << '\n';

	char x{};
	

	std::cin >> x;
	std::cin.ignore(32767, '\n');

	switch (x)
	{
	case '1':
		roomDining();
		break;
	case '2':
		roomParlor();
		break;
	case '3':
		stairsEntranceUp();
		break;
	case '4':
		//outside dead end
	default:
		goto tryAgain;
		break;
	}

}

void roomEntranceA1()
{

	ClearScreen();
	// text for the room/encounter goes here

		//room name
	std::cout << " ---------- " << '\n';
	std::cout << "| Front of House |" << '\n';
	std::cout << " ----------" << '\n';
	std::cout << '\n';

	std::cout << "You walk through the storm back to the front of the house, standing on the barren porch. The shutters" << '\n';
	std::cout << "bang against the boarded up windows, though through a crack you can see lights on inside the house." << '\n';
	std::cout << "Knocking on the paint-chipped door, your knuckles sting against the hard, wet wood. After a moment" << '\n';
	std::cout << "you hear a voice faintly call out to come on in. At least, you think you hear a voice. You swear you do." << '\n';
	std::cout << "Plus, you don't want to stand out in the storm any longer than you need to." << '\n';
	std::cout << '\n';
	/*
tryAgain:
	std::cout << '\n';
	std::cout << "To go into the dining room, select option 1" << '\n';
	std::cout << "To enter the parlor, select option 2" << '\n';
	std::cout << "To take the stairs to the second floor, select option 3" << '\n';
	std::cout << "To leave through the front door, select option 4" << '\n';
	std::cout << '\n';
	std::cout << "Please select option 1, 2, 3, or 4" << '\n';

	char x{};


	std::cin >> x;
	std::cin.ignore(32767, '\n');

	switch (x)
	{
	case '1':
		roomDining();
		break;
	case '2':
		roomParlor();
		break;
	case '3':
		stairsEntranceUp();
		break;
	case '4':
		//outside dead end
	default:
		goto tryAgain;
		break;
	}
	*/
	system("pause");
	roomEntrance();
}

void roomEntranceB1()
{
	ClearScreen();
	// text for the room/encounter goes here

		//room name
	std::cout << " ---------- " << '\n';
	std::cout << "| Entryway |" << '\n';
	std::cout << " ----------" << '\n';

	std::cout << "The small but inviting entryway of the house leads to multiple rooms. There is a coatrack in the corner, and a" << '\n';
	std::cout << "set of stairs leading up. Aside from a few tasteful lamps, the room is empty and leads to the parlor and the " << '\n';
	std::cout << "dining room." << '\n';
tryAgain:
	std::cout << '\n';
	std::cout << "To go into the dining room, select option 1" << '\n';
	std::cout << "To enter the parlor, select option 2" << '\n';
	std::cout << "To take the stairs to the second floor, select option 3" << '\n';
	std::cout << "To leave through the front door, select option 4" << '\n';
	std::cout << "To investigate the coat rack, select option 5" << '\n';
	std::cout << '\n';
	std::cout << "Please select option 1, 2, 3, 4, or 5" << '\n';

	char x{};


	std::cin >> x;
	std::cin.ignore(32767, '\n');

	switch (x)
	{
	case '1':
		roomDining();
		break;
	case '2':
		roomParlor();
		break;
	case '3':
		stairsEntranceUpB1();
		break;
	case '4':
		std::cout << "The storm raging outside makes the idea of leaving the house undesirable." << '\n';
		std::cout << "You think twice about stepping out into the pouring rain and decide against it." << '\n';
		system("pause");
		ClearScreen();
		goto tryAgain;
		break;
	case '5':
		std::cout << "The coat rack has a large number of coats on it, but they all seem decades out of style. In the pocket of one coat," << '\n';
		std::cout << "you find a rusty set of keys." << '\n';
		system("pause");
		ClearScreen();
		roomEntranceB1a();
		break;
	default:
		goto tryAgain;
		break;
	}
}
void roomEntranceB1a()
{
	ClearScreen();
	// text for the room/encounter goes here

		//room name

	//HAS KEYS
	std::cout << " ---------- " << '\n';
	std::cout << "| Entryway |" << '\n';
	std::cout << " ----------" << '\n';

	std::cout << "The small but inviting entryway of the house leads to multiple rooms. There is a coatrack in the corner, and a" << '\n';
	std::cout << "set of stairs leading up. Aside from a few tasteful lamps, the room is empty and leads to the parlor and the " << '\n';
	std::cout << "dining room." << '\n';
tryAgain:
	std::cout << '\n';
	std::cout << "To go into the dining room, select option 1" << '\n';
	std::cout << "To enter the parlor, select option 2" << '\n';
	std::cout << "To take the stairs to the second floor, select option 3" << '\n';
	std::cout << "To leave through the front door, select option 4" << '\n';
	std::cout << '\n';
	std::cout << "Please select option 1, 2, 3, or 4" << '\n';

	char x{};


	std::cin >> x;
	std::cin.ignore(32767, '\n');

	switch (x)
	{
	case '1':
		roomDining();
		break;
	case '2':
		roomParlor();
		break;
	case '3':
		stairsEntranceUpB1a();
		break;
	case '4':
		std::cout << "The storm raging outside makes the idea of leaving the house undesirable." << '\n';
		std::cout << "You think twice about stepping out into the pouring rain and decide against it." << '\n';
		system("pause");
		ClearScreen();
		goto tryAgain;
		break;
	default:
		goto tryAgain;
		break;
	}
}