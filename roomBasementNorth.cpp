#include <iostream>
#include <stdio.h>
#include "allRooms.h"
void ClearScreen();

/*
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

*/

void roomBasementNorthB1()
{

	ClearScreen();

	//room name
	std::cout << " ------------------ " << '\n';
	std::cout << "| Basement |" << '\n';
	std::cout << " ------------------" << '\n';

	// text for the room/encounter goes here

	std::cout << "The basement is comprised of dirt walls and floor, and is a largely open space with" << '\n';
	std::cout << "only a few items strewn around, including the coffins and a folding chair pulled up" << '\n';
	std::cout << "to the closed coffin in a makeshift table or desk. That coffin is littered with" << '\n';
	std::cout << "additional notes and scribblings. The open coffin rests precariously near the edge" << '\n';
	std::cout << "of the pit in the center of the room." << '\n';
tryAgain:
	std::cout << '\n';
	std::cout << "To investigate the open coffin, select option 1" << '\n';
	std::cout << "To read the notes, select option 2" << '\n';
	std::cout << '\n';
	std::cout << "Please select option 1 or 2" << '\n';

	char x{};


	std::cin >> x;
	std::cin.ignore(32767, '\n');

	switch (x)
	{
	case '1':
		gameovercoffinB1();
		break;
	case '2':
		std::cout << '\n';
		std::cout << "The notes you find scattered across the sealed coffin are similar in style and" << '\n';
		std::cout << "substance to the notes you originally found in the kitchen. However, the top-" << '\n';
		std::cout << "most loose paper you find has additional notes about the importance of a book." << '\n';
		std::cout << "And as you read, it dawns on you that it means THE book, the one that you found" << '\n';
		std::cout << "in the attic. It goes on to mention that if anything were to happen to this book," << '\n';
		std::cout << "then the whole ritual will be lost, and that no harm should come to the book." << '\n';
		std::cout << "..." << '\n';
		SysPause();
		std::cout << '\n';
		std::cout << "From what you can tell, the most recent notes on that same page indicate that the" << '\n';
		std::cout << "so-called ritual has already been started. The author indicates a quick schedule" << '\n';
		std::cout << "of events, including FIRST INCANTATION, timestamped right around when you got" << '\n';
		std::cout << "caught in the storm on your hike. The remaining notes on the schedule show two" << '\n';
		std::cout << "or three steps are yet to be invoked. Perhaps you should take this as your invite" << '\n';
		std::cout << "to stop the storm and finally escape this place." << '\n';
		SysPause();
		roomBasementNorthB2();

		break;
	default:
		goto tryAgain;
		break;
	}

}

void roomBasementNorthB2()
{

	ClearScreen();

	//room name
	std::cout << " ------------------ " << '\n';
	std::cout << "| Basement |" << '\n';
	std::cout << " ------------------" << '\n';

	// text for the room/encounter goes here

	std::cout << "Having read through the notes on the coffin, you find yourself at a decision" << '\n';
	std::cout << "to make - first, if you want to escape this place immediately, and second how you" << '\n';
	std::cout << "think you are going to accomplish that. As you think on this, your fingers absent-" << '\n';
	std::cout << "mindedly toy with the knife you took from the kitchen, and perhaps that gives you" << '\n';
	std::cout << "an idea on how to end this nightmare." << '\n';
tryAgain:
	std::cout << '\n';
	std::cout << "To use the knife on the book, select option 1" << '\n';
	std::cout << "To bury the book, select option 2" << '\n';
	std::cout << '\n';
	std::cout << "Please select option 1 or 2" << '\n';

	char x{};


	std::cin >> x;
	std::cin.ignore(32767, '\n');

	switch (x)
	{
	case '1':
		std::cout << '\n';
		std::cout << "Realizing it might be your chance to escape, you take the book and place it" << '\n';
		std::cout << "on the sealed coffin that you're sitting at. Gripping the knife you took, you" << '\n';
		std::cout << "plunge it into the cover, the knife tip barely piercing the soft leather cover" << '\n';
		std::cout << "far enough to actually damage the pages. As you lean into the knife and push it" << '\n';
		std::cout << "further into the book, black ink starts to spill from between the pages, running" << '\n';
		std::cout << "down the edges of the book and across the coffin." << '\n';
		std::cout << "..." << '\n';
		SysPause();
		std::cout << '\n';
		std::cout << "The sight of the ink causes you to react in a panic, and you use the knife to" << '\n';
		std::cout << "to toss the book into the open coffin. You hear it tumble against the walls" << '\n';
		//std::cout << "and come to a stop. Grapping "

		//gameovercoffinB1();
		break;
	case '2':
		std::cout << '\n';
		std::cout << "The notes you find scattered across the sealed coffin are similar in style and" << '\n';
		std::cout << "substance to the notes you originally found in the kitchen. However, the top-" << '\n';
		std::cout << "most loose paper you find has additional notes about the importance of a book." << '\n';
		std::cout << "And as you read, it dawns on you that it means THE book, the one that you found" << '\n';
		std::cout << "in the attic. It goes on to mention that if anything were to happen to this book," << '\n';
		std::cout << "then the whole ritual will be lost, and that no harm should come to the book." << '\n';
		std::cout << "..." << '\n';
		SysPause();
		std::cout << "From what you can tell, the most recent notes on that same page indicate that the" << '\n';
		std::cout << "so-called ritual has already been started. The author indicates a quick schedule" << '\n';
		std::cout << "of events, including FIRST INCANTATION, timestamped right around when you got" << '\n';
		std::cout << "caught in the storm on your hike. The remaining notes on the schedule show two" << '\n';
		std::cout << "or three steps are yet to be invoked. Perhaps you should take this as your invite" << '\n';
		std::cout << "to stop the storm and finally escape this place." << '\n';
		SysPause();
		roomBasementNorthB2();

		break;
	default:
		goto tryAgain;
		break;
	}

}