#include <iostream>
#include <stdio.h>
#include "allRooms.h"
void ClearScreen();

/*


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
*/
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
		//roomDining();
		break;
	case '2':
		//roomParlor();
		break;
	case '3':
		//stairsEntranceUp();
		break;
	case '4':
		//outside dead end
	default:
		goto tryAgain;
		break;
	}
	
	system("pause");
	//roomEntrance();
}

void roomEntranceB1()
{
	ClearScreen();
	// text for the room/encounter goes here

		//room name
	std::cout << " ---------- " << '\n';
	std::cout << "| Entryway |" << '\n';
	std::cout << " ----------" << '\n';

	std::cout << "The small but inviting entryway of the house leads to multiple rooms along with massive double doors as the main entrance. " << '\n';
	std::cout << "There is a coatrack in the corner, and a set of stairs leading up. Aside from a few tasteful lamps, the room is empty." << '\n';
	
tryAgain:
	std::cout << '\n';
	std::cout << "To exit the house through the front door, select option 1" << '\n';
	std::cout << "To check the coats, select option 2" << '\n';
	//std::cout << "To take the stairs to the second floor, select option 3" << '\n';
	//std::cout << "To leave through the front door, select option 4" << '\n';
	//std::cout << "To investigate the coat rack, select option 5" << '\n';
	std::cout << '\n';
	std::cout << "Please select option 1 or 2" << '\n';

	char x{};


	std::cin >> x;
	std::cin.ignore(32767, '\n');

	switch (x)
	{
	case '1':
		gameoverentranceB1();
		break;
	case '2':
		std::cout << "Rifling through the coats on the rack, you find old recipts from decades past," << '\n';
		std::cout << "notes in multiple different styles of handwriting, and even an old breath mint" << '\n';
		std::cout << "or two. However, as you go to replace one of the coats onto the rack, you hear" << '\n';
		std::cout << "a small metalic clink on the floor at your feet. The coat you just held up," << '\n';
		std::cout << "you now see, has a hole on the bottom hem, and you trace a straight line into" << '\n';
		std::cout << "one of the pockets which has a similarly sized hole in it. The author of those notes," << '\n';
		std::cout << "you realize, was paranoid due only to faulty stitchwork. Setting aside the coat," << '\n';
		std::cout << "the key you pick up off the floor was a rounded handle with an image of a bird in a circle," << '\n';
		std::cout << "worn down from years of use. You pocket this key, making sure your own pocket is not" << '\n';
		std::cout << "inclinded to turn on you the same way the coat did on its owner." << '\n';
		//NOTE TO FUTURE SELF, FINISH THIS TEXT AND WRITE NEXT FUNCTION
		break;
	case '3':
		//stairsEntranceUpB1();
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
		//roomEntranceB1a();
		break;
	default:
		goto tryAgain;
		break;
	}
}
/*
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

void roomEntranceB2a()
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
		roomDiningB2a();
		break;
	case '2':
		roomParlor();
		break;
	case '3':
		stairsEntranceUpB2a();
		break;
	case '4':
		//outside dead end
	default:
		goto tryAgain;
		break;
	}

}

void roomEntranceB2b()
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
		roomDiningB1();
		break;
	case '2':
		roomParlor();
		break;
	case '3':
		stairsEntranceUpB2a();
		break;
	case '4':
		//outside dead end
	default:
		goto tryAgain;
		break;
	}

}

void roomEntranceB2c()
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
		roomDiningB2b();
		break;
	case '2':
		roomParlor();
		break;
	case '3':
		stairsEntranceUpB2b();
		break;
	case '4':
		//outside dead end
	default:
		goto tryAgain;
		break;
	}

}

*/