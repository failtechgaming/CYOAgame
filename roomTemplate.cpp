#include <iostream>
#include <stdio.h>
#include "allRooms.h"

void ClearScreen();


// RENAME FUNCTION
void roomTemplate()
{

	ClearScreen();

	//room name
	std::cout << " ---------- " << '\n';
	std::cout << "| TEMPLATE |" << '\n';
	std::cout << " ----------" << '\n';

	// text for the room/encounter goes here

	std::cout << "EXAMPLE TEXT" << '\n';
	tryAgain:
	std::cout << "Please select option 1 or 2" << '\n';

	char x{};
	

	std::cin >> x;
	std::cin.ignore(32767, '\n');

	switch (x)
	{
	case '1': 
		std::cout << "You chose option 1" << '\n'; //enter room function here
		break;
	case '2':
		std::cout << "You chose option 2" << '\n'; //enter room function here
		break;
	default:
		goto tryAgain;
		break;
	}
		
}