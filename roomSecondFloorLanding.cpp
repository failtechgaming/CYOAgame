#include <iostream>
#include <stdio.h>
#include "allRooms.h"

void ClearScreen();
/*

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
*/
void roomSecondFloorLandingB1()
{

	ClearScreen();

	//room name
	std::cout << " ---------------------- " << '\n';
	std::cout << "| Second Floor Landing |" << '\n';
	std::cout << " ----------------------" << '\n';

	// text for the room/encounter goes here

	//HAS KEYS

	std::cout << "The cramped landing at the top of the stairs has two closed doors on opposite sides, one leading to the master" << '\n';
	std::cout << "bedroom and the other to the guest bedroom. The master bedroom doorway has an emblem of a moon above" << '\n';
	std::cout << "it while the guest bedroom doorway has an emblem of a sun." << '\n';
tryAgain:
	std::cout << '\n';
	std::cout << "To enter the master bedroom, select option 1" << '\n';
	std::cout << "To go into the guest room, select option 2" << '\n';
	//std::cout << "To take the stairs down to the first floor, select option 3" << '\n';
	std::cout << '\n';
	std::cout << "Please select option 1 or 2" << '\n';

	char x{};


	std::cin >> x;
	std::cin.ignore(32767, '\n');

	switch (x)
	{
	case '1':
		//roomMasterBedroom();
		std::cout << '\n';
		std::cout << "Opening the door to the master bedroom reveals a lavish room, furnished with what appears to be the" << '\n';
		std::cout << "best that money could buy in whatever year the house was built. A four-post bed, an overstuffed chair," << '\n';
		std::cout << "silk upholstery on everything, and a massive wardrobe limit the space that you can stand in. Everything" << '\n';
		std::cout << "has a thin layer of dust, as though no one has pulled back the bedding in order to use this room" << '\n';
		std::cout << "in years. A quick rummage through the wardrobe is a blast through the past, specifically almost 100" << '\n';
		std::cout << "years of previous fashion. Nothing in this room looks as though it could hold a single book, much less" << '\n';
		std::cout << "a whole library as the note in the kitchen indicated." << '\n';
		std::cout << "..." << '\n';
		SysPause();
		std::cout << '\n';
		std::cout << "While this room was certainly interesting to look at and perhaps a little exciting as you probably aren't" << '\n';
		std::cout << "supposed to be in here, nothing in this room seems like it will help you on your journey." << '\n';
		std::cout << "A little dejected, you return to the landing, closing the door behind you and remembering" << '\n';
		std::cout << "the key that you found had an icon of the sun." << '\n';
		std::cout << "..." << '\n';
		SysPause();
		std::cout << '\n';
		std::cout << "Recognizing the icon above the guest door is the same as the key that you found, you open the door" << '\n';
		std::cout << "to the guest bedroom. This room is very sparse, containing only a small utilitarian bed, while the" << '\n';
		std::cout << "the rest of the room is devoted to a massive selection of books that has outgrown the meager shelving" << '\n';
		std::cout << "that might have originally been the quote unquote library. Instead, books are piled up against the walls" << '\n';
		std::cout << "and overflowing the shelves themselves, even spilling out onto the bed-spead as though someone was hastily" << '\n';
		std::cout << "looking for a specific one." << '\n';
		std::cout << "..." << '\n';
		SysPause();
		std::cout << '\n';
		std::cout << "You notice, as you step over books in order to move further into the room, that hidden from view next to" << '\n';
		std::cout << "the bookshelf is a small utility door that looks like it was intended to blend into the room, perhaps as" << '\n';
		std::cout << "a door to the attic for house staff." << '\n';
		std::cout << "..." << '\n';
		SysPause();
		std::cout << '\n';
		std::cout << "Getting a better view of the door, you see it has a lock built into the doorknob. Testing it, you find it is" << '\n';
		std::cout << "locked and the door is tight in the frame. There is no give at all, as you lean into it. The key you picked up" << '\n';
		std::cout << "earlier, however, is a perfect fit for the lock. With a quiet click, you're able to turn the knob and swing the" << '\n';
		std::cout << "door out into the room, revealing a set up ascending stairs. A light switch inside the doorway turns on a small, bare" << '\n';
		std::cout << "bulb at the top of the steps. You decide you've already come this far, you might as well explore the attic too." << '\n';
		SysPause();
		roomAtticB1();
		break;
	case '2':
		//roomGuestB1b();
		std::cout << '\n';
		std::cout << "Recognizing the icon above the guest door is the same as the key that you found, you open the door" << '\n';
		std::cout << "to the guest bedroom. This room is very sparse, containing only a small utilitarian bed, while the" << '\n';
		std::cout << "the rest of the room is devoted to a massive selection of books that has outgrown the meager shelving" << '\n';
		std::cout << "that might have originally been the quote unquote library. Instead, books are piled up against the walls" << '\n';
		std::cout << "and overflowing the shelves themselves, even spilling out onto the bedspread as though someone was hastily" << '\n';
		std::cout << "looking for a specific one." << '\n';
		std::cout << "..." << '\n';
		SysPause();
		std::cout << '\n';
		std::cout << "You notice, as you step over books in order to move further into the room, that hidden from view next to" << '\n';
		std::cout << "the bookshelf is a small utility door that looks like it was intended to blend into the room, perhaps as" << '\n';
		std::cout << "a door to the attic for house staff." << '\n';
		std::cout << "..." << '\n';
		SysPause();
		std::cout << '\n';
		std::cout << "Getting a better view of the door, you see it has a lock built into the doorknob. Testing it, you find it is" << '\n';
		std::cout << "locked and the door is tight in the frame. There is no give at all, as you lean into it. The key you picked up" << '\n';
		std::cout << "earlier, however, is a perfect fit for the lock. With a quiet click, you're able to turn the knob and swing the" << '\n';
		std::cout << "door out into the room, revealing a set up ascending stairs. A light switch inside the doorway turns on a small, bare" << '\n';
		std::cout << "bulb at the top of the steps. You decide you've already come this far, you might as well explore the attic too." << '\n';
		SysPause();
		roomAtticB1();

		//ADD MORE ABOUT GOING INTO THE ATTIC
			
		break;
	case '3':
		//stairsEntranceDown();
	default:
		goto tryAgain;
		break;
	}

}
/*
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
		stairsEntranceDownB2b();
		break;
	default:
		goto tryAgain;
		break;
	}

}

void roomSecondFloorLandingB2b()
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
		roomGuestB2b();
		break;
	case '3':
		stairsEntranceDownB2c();
		break;
	default:
		goto tryAgain;
		break;
	}

}

*/