#include <iostream>
#include <stdio.h>
#include "allRooms.h"
void ClearScreen();


// RENAME FUNCTION
void roomWriting()
{

	ClearScreen();

	//room name
	std::cout << " -------------- " << '\n';
	std::cout << "| Writing Room |" << '\n';
	std::cout << " --------------" << '\n';

	// text for the room/encounter goes here

	std::cout << "EXAMPLE TEXT" << '\n';
tryAgain:
	std::cout << '\n';
	std::cout << "To return to the master bedroom, select option 1" << '\n';
	std::cout << "To go around front and knock first, select option 2" << '\n';
	std::cout << '\n';
	std::cout << "Please select option 1 or 2" << '\n';

	char x{};
	

	std::cin >> x;
	std::cin.ignore(32767, '\n');

	switch (x)
	{
	case '1':
		roomMasterBedroom();
		break;
	case '2':
		std::cout << "You chose option 2" << '\n'; //enter room function here
		break;
	default:
		goto tryAgain;
		break;
	}

}