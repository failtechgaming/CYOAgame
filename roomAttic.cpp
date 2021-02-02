#include <iostream>
#include <stdio.h>
#include "allRooms.h"

void ClearScreen();
/*

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
*/
void roomAtticB1()
{

	ClearScreen();

	//room name
	std::cout << " ------- " << '\n';
	std::cout << "| Attic |" << '\n';
	std::cout << " -------" << '\n';

	// text for the room/encounter goes here

	std::cout << "At the top of the stairs leading up to the attic, you find what appears to be a hastily created" << '\n';
	std::cout << "reading nook, as evidence from the stack of books next to a wooden crate of a table, with an old," << '\n';
	std::cout << "worn chair in front of it. Of note is one of the books, open on the wooden crate, which at a glance" << '\n';
	std::cout << "appears to reference some kind of sorcery. However, you think you hear noises from down the stairs." << '\n';
	std::cout << "Perhaps that's the help you need to weather this storm you were lost in." << '\n';
tryAgain:
	std::cout << '\n';
	std::cout << "To sit and read the book, select option 1" << '\n';
	std::cout << "To take the book and head downstairs, select option 2" << '\n';
	std::cout << '\n';
	std::cout << "Please select option 1 or 2" << '\n';

	char x{};


	std::cin >> x;
	std::cin.ignore(32767, '\n');

	switch (x)
	{
	case '1':
		std::cout << '\n';
		std::cout << "You sit down on the well worn armchair next to the wooden crate. The book, while scrawled in" << '\n';
		std::cout << "in a heavy hand, is mostly legible, though it's apparent that the author was losing hold of" << '\n';
		std::cout << "whatever faculties they still had. The page makes reference to a ritual centering around" << '\n';
		std::cout << "a series of incantations taken while in the presense of a freshly dead body. From what you" << '\n';
		std::cout << "can make out, the intent is to raise the body back to life, though the author makes note that" << '\n';
		std::cout << "some quote unquote 'changes' may have occurred in the personality of the individual who had" << '\n';
		std::cout << "been clinically dead previously." << '\n';
		std::cout << "..." << '\n';
		SysPause();
		std::cout << '\n';
		std::cout << "Flipping a few pages forwards and backwards in the book from where you started, you see the" << '\n';
		std::cout << "the other pages in the book are filled with similar scrawlings, speaking of things like magic," << '\n';
		std::cout << "but spelled with a 'k' so you know the author was certainly crazy. On some pages there appear" << '\n';
		std::cout << "to be two sets of handwriting, almost as though one set is laying out the rules and the second" << '\n';
		std::cout << "is making notes in reference to the first, or giving progress reports on their own attempts at" << '\n';
		std::cout << "such things. On one, a few pages before the one the book was open to, you find mention of a freshly" << '\n';
		std::cout << "dead body stolen from a potter's field nearby, and a note from the second author about preparing" << '\n';
		std::cout << "a grave in the basement for the ritual to take place in." << '\n';
		std::cout << "..." << '\n';
		SysPause();
		std::cout << '\n';
		std::cout << "Closing the book in front of you, you realize you no longer hear any of the commotion you thought" << '\n';
		std::cout << "you heard downstairs. You pocket the book and, fearing someone might come looking for it, you place" << '\n';
		std::cout << "another book from the stack, open to a random page, in its place. You quietly head down the stairs from" << '\n';
		std::cout << "the attic, closing doors as you go, until eventually you find yourself back in the kitchen facing the" << '\n';
		std::cout << "basement stairs." << '\n';
		//ADD FUNCTION TO RETURN TO KITCHEN/BASEMENT
		roomKitchenB2();
		break;
	case '2':
		gameoveratticB1();
		//roomAtticB1a();
		break;
	default:
		goto tryAgain;
		break;
	}

}
/*
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

*/