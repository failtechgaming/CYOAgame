#include <iostream>
#include <string>
#include <stdio.h>
#include "allRooms.h"
void ClearScreen();

void roomStart()
{

	ClearScreen();

	std::cout << " ------- " << '\n';
	std::cout << "| Field |" << '\n';
	std::cout << " -------" << '\n';

	std::cout << "Your hiking trip wasn't quite going as planned. First, you managed to get lost just finding the trailhead, then" << '\n';
	std::cout << "it seemed like the path was never properly maintained, causing you to have to maneuver through tall underbrush." << '\n';
	std::cout << "Even after all the issues just hiking the trail, you weren't expecting the storm to come in so quickly. As the " << '\n';
	std::cout << "dark clouds rolled in, visibility dropped quickly and in short time you had wandered off the trail proper. It wasn't" << '\n';
	std::cout << "long before you found yourself lost, uncertain in the heavy rain which way you had come from or where the trail or " << '\n';
	std::cout << "your car was. After a bit of blind wandering in the downpour, you come across a farm house with single light on inside." << '\n';
	std::cout << "As you approach the back of the house, you see the rear door is swinging wide open giving you a view of the dark " << '\n';
	std::cout << "room inside." << '\n';

	std::cout << '\n';

	//std::cout << "EXAMPLE TEXT" << '\n';
tryAgain:
	std::cout << '\n';
	std::cout << "To enter the house through the back door, select option 1" << '\n';
	std::cout << "To go around front and knock first, select option 2" << '\n';
	std::cout << '\n';
	std::cout << "Please enter 1 or 2" << '\n';

	char x{};

	std::cin >> x;
	std::cin.ignore(32767, '\n');

	//check input validation

	switch (x)
	{
	case '1':
		roomKitchenB1();
		break;
	case '2':
		roomEntranceA1();
		break;
	default:
		goto tryAgain;
		break;
	}


}

