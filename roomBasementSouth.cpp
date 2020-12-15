#include <iostream>
#include <stdio.h>
#include "allRooms.h"
void ClearScreen();


// RENAME FUNCTION
void roomBasementSouth()
{

	ClearScreen();

	//room name
	std::cout << " ------------------ " << '\n';
	std::cout << "| Basement (South) |" << '\n';
	std::cout << " ------------------" << '\n';

	// text for the room/encounter goes here

	std::cout << "EXAMPLE TEXT" << '\n';
tryAgain:
	std::cout << '\n';
	std::cout << "To return to the basement by the stairs, select option 1" << '\n';
	std::cout << "To go around front and knock first, select option 2" << '\n';
	std::cout << '\n';
	std::cout << "Please select option 1 or 2" << '\n';

	char x{};
	

	std::cin >> x;
	std::cin.ignore(32767, '\n');

	switch (x)
	{
	case '1':
		roomBasementNorth();
		break;
	case '2':
		std::cout << "You chose option 2" << '\n'; //enter room function here
		break;
	default:
		goto tryAgain;
		break;
	}

}

void roomBasementSouthB2a()
{

	ClearScreen();

	//room name
	std::cout << " ------------------ " << '\n';
	std::cout << "| Basement (South) |" << '\n';
	std::cout << " ------------------" << '\n';

	// text for the room/encounter goes here

	std::cout << "As you enter the small antechamber behind the wall, you notice what appears" << '\n';
	std::cout << "to be freshly dug graves, and two coffins. One is sealed shut, while the other" << '\n';
	std::cout << "is open and empty. The graves have loose dirt piled up at the ends." << '\n';

tryAgain:
	std::cout << '\n';
	std::cout << "To return to the main basement room through the hole in the wall, select option 3" << '\n';
	std::cout << "To climb into the open coffin, select option 2" << '\n';
	std::cout << "To investigate the sealed coffin, select option 3" << '\n';
	std::cout << '\n';
	std::cout << "Please select option 1, 2, or 3" << '\n';

	char x{};


	std::cin >> x;
	std::cin.ignore(32767, '\n');

	switch (x)
	{
	case '1':
		roomBasementNorthB2b();
		break;
	case '2':
		std::cout << "As you crawl into the empty coffin, you lay inside a moment before you" << '\n'; //enter room function here
		std::cout << "hear a creaking sound and the coffin lid closes in on you. Suddenly you're" << '\n';
		std::cout << "enveloped in darkness and the lid does not give as you push and kick at it. Slowly," << '\n';
		std::cout << "you come to the realization that you will never make it out of here alive." << '\n';
		system("pause");
		gameovercoffin();
		break;
	case '3':
		std::cout << "As you look at the lid of the sealed coffin, you notice an odd inscription, almost" << '\n';
		std::cout << "as if you've seen that written somewhere recently." << '\n';
		system("pause");
		roomBasementSouthB2b();
		break;
	default:
		goto tryAgain;
		break;
	}

}

void roomBasementSouthB2b()
{

	ClearScreen();

	//THIS IS WHERE YOU BURRY THE COFFIN
	std::cout << " ------------------ " << '\n';
	std::cout << "| Basement (South) |" << '\n';
	std::cout << " ------------------" << '\n';

	// text for the room/encounter goes here

	std::cout << "As you enter the small antechamber behind the wall, you notice what appears" << '\n';
	std::cout << "to be freshly dug graves, and two coffins. One is sealed shut, while the other" << '\n';
	std::cout << "is open and empty. The graves have loose dirt piled up at the ends." << '\n';

tryAgain:
	std::cout << '\n';
	std::cout << "To return to the main basement room through the hole in the wall, select option 3" << '\n';
	std::cout << "To climb into the open coffin, select option 2" << '\n';
	
	std::cout << '\n';
	std::cout << "Please select option 1, 2, or 3" << '\n';

	char x{};


	std::cin >> x;
	std::cin.ignore(32767, '\n');

	switch (x)
	{
	case '1':
		roomBasementNorthB2b();
		break;
	case '2':
		std::cout << "As you crawl into the empty coffin, you lay inside a moment before you" << '\n'; //enter room function here
		std::cout << "hear a creaking sound and the coffin lid closes in on you. Suddenly you're" << '\n';
		std::cout << "enveloped in darkness and the lid does not give as you push and kick at it. Slowly," << '\n';
		std::cout << "you come to the realization that you will never make it out of here alive." << '\n';
		gameovercoffin();
		break;
	default:
		goto tryAgain;
		break;
	}

}

void roomBasementSouthB2c()
{

	ClearScreen();

	//THIS IS WHERE YOU BURRY THE COFFIN
	std::cout << " ------------------ " << '\n';
	std::cout << "| Basement (South) |" << '\n';
	std::cout << " ------------------" << '\n';

	// text for the room/encounter goes here

	std::cout << "As you enter the small antechamber behind the wall, you notice what appears" << '\n';
	std::cout << "to be freshly dug graves, and two coffins. One is sealed shut, while the other" << '\n';
	std::cout << "is open and empty. The graves have loose dirt piled up at the ends." << '\n';

tryAgain:
	std::cout << '\n';
	std::cout << "To return to the main basement room through the hole in the wall, select option 3" << '\n';
	std::cout << "To climb into the open coffin, select option 2" << '\n';
	std::cout << "To compare the note with the coffin, select option 3" << '\n';
	std::cout << '\n';
	std::cout << "Please select option 1, 2, or 3" << '\n';

	char x{};


	std::cin >> x;
	std::cin.ignore(32767, '\n');

	switch (x)
	{
	case '1':
		roomBasementNorthB2b();
		break;
	case '2':
		std::cout << "As you crawl into the empty coffin, you lay inside a moment before you" << '\n'; //enter room function here
		std::cout << "hear a creaking sound and the coffin lid closes in on you. Suddenly you're" << '\n';
		std::cout << "enveloped in darkness and the lid does not give as you push and kick at it. Slowly," << '\n';
		std::cout << "you come to the realization that you will never make it out of here alive." << '\n';
		gameovercoffin();
		break;
	case '3':
		//FIX THIS 
		std::cout << "As you look at the lid of the sealed coffin, you notice [[PLOT POINTS]]" << '\n';
		system("pause");

	default:
		goto tryAgain;
		break;
	}

}