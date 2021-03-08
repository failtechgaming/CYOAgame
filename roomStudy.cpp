#include <iostream>
#include <stdio.h>
#include "allRooms.h"
void ClearScreen();

/*
// RENAME FUNCTION
void roomStudy()
{

	ClearScreen();

	//room name
	std::cout << " ------- " << '\n';
	std::cout << "| Study |" << '\n';
	std::cout << " -------" << '\n';

	// text for the room/encounter goes here

	std::cout << "EXAMPLE TEXT" << '\n';
tryAgain:
	std::cout << '\n';
	std::cout << "To return to the parlor, select option 1" << '\n';
	std::cout << "To go around front and knock first, select option 2" << '\n';
	std::cout << '\n';
	std::cout << "Please select option 1 or 2" << '\n';

	char x{};
	

	std::cin >> x;
	std::cin.ignore(32767, '\n');

	switch (x)
	{
	case '1':
		roomParlor();
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

void roomStudyA1()
{

	ClearScreen();

	//room name
	std::cout << " ------- " << '\n';
	std::cout << "| Study |" << '\n';
	std::cout << " -------" << '\n';

	// text for the room/encounter goes here

	std::cout << "After speeding through the house out of the basement, you find yourself in what you can only assume" << '\n';
	std::cout << "is the study. The study lies opposite the door you took from the entrance to walk through to the" << '\n';
	std::cout << "kitchen, and inside you find piled up in every available space mountains of notes and scraps of paper" << '\n';
	std::cout << "that have various scribbles and writings on them. In the center of this mound of sheets is a small wooden" << '\n';
	std::cout << "desk with empty inkwells and pens depleted, their nibs worn down. But in this mess, between all the" << '\n';
	std::cout << "writing bits, there is a single, small, brass key in a cleared space." << '\n';
	//std::cout << "..." << '\n';
	//SysPause();
	//std::cout << '\n';
	

tryAgain:
	std::cout << '\n';
	std::cout << "To inspect the key, select option 1" << '\n';
	std::cout << "To inspect the papers, select option 2" << '\n';
	std::cout << '\n';
	std::cout << "Please select option 1 or 2" << '\n';

	char x{};


	std::cin >> x;
	std::cin.ignore(32767, '\n');

	switch (x)
	{
	case '1':
		//roomParlor();
		std::cout << '\n';
		std::cout << "Taking the key, you see it is unmarked, though it looks well worn, as if it has been used frequently," << '\n';
		std::cout << "perhaps daily. You pocket it, though placing it away from the knife, as you can still feel its warmth" << '\n';
		std::cout << "through your coat fabric. Taking a quick glance over the rest of the the desk, you can't quite make" << '\n';
		std::cout << "make out most of the handwriting, but you feel like you see the word BOOK scrawled out repeatedly." << '\n';
		std::cout << "The only other word comparable in its usage and script size is FIRE, though the contexts in which" << '\n';
		std::cout << "you are seeing that word written are unclear. The thrill of the pyromania in the author must have" << '\n';
		std::cout << "caused them to keep from writing the surrounding words clearly." << '\n';
		std::cout << "..." << '\n';
		SysPause();
		std::cout << '\n';
		std::cout << "Taking the key with you as you leave, you head back out of the study, and up the stairs this time." << '\n';
		std::cout << "You may not know the layout of the house specifcally, but you know an attic is always up the stairs" << '\n';
		std::cout << "whenever possible. Making it to the second floor, you quickly canvas the available rooms and find" << '\n';
		std::cout << "a locked door in what appears to be an unused bedroom, books stacked everywhere. The door has a" << '\n';
		std::cout << "small lock in it, which your pilfered key fits in perfectly. It opens to another set of upwards" << '\n';
		std::cout << "stairs." << '\n';
		std::cout << '\n';
		SysPause();
		roomAtticA1(); //follow up on this room
		
		break;
	case '2':
		gameoverstudyA1();
		break;
	default:
		
		goto tryAgain;
		break;
	}

}