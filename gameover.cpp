#include <iostream>
#include <stdio.h>
#include "allRooms.h"
void ClearScreen(); 

void TakeTwo()
{
	roomStart();

}

int gameoverend()
{

	return 0;
}

void gameover()
{
	ClearScreen();

	std::cout << "GAME OVER" << '\n';

	system("pause");

	std::cout << "Would you like to try again? Y/N" << '\n';

	char x{};


	std::cin >> x;
	std::cin.ignore(32767, '\n');

	switch (x)
	{
	case 'Y':
		TakeTwo();
		break;
	case 'y':
		TakeTwo();
		break;
	case 'N':
		gameoverend();
		break;
	case 'n':
		gameoverend();
		break;
	}
}

/*void gameovercoffin()
{
	ClearScreen();

	std::cout << "As much as you scream and kick and wail, no one comes to your rescue." << '\n';
	std::cout << "You don't even notice passing out from exhuastion. But this is the" << '\n';
	std::cout << "end of the line for you." << '\n';
	std::cout << '\n';
	std::cout << "GAME OVER" << '\n';
	system("pause");

	std::cout << "Would you like to try again? Y/N" << '\n';

	char x{};


	std::cin >> x;
	std::cin.ignore(32767, '\n');

	switch (x)
	{
	case 'Y':
		TakeTwo();
		break;
	case 'y':
		TakeTwo();
		break;
	case 'N':
		gameoverend();
		break;
	case 'n':
		gameoverend();
		break;
	}
}
*/

void gameoverbasementB1()
{
	ClearScreen();

	std::cout << "As you open the door to the basement and decend down the stairs, the door" << '\n';
	std::cout << "shuts behind you and the stairs are swallowed by the darkness. This causes you" << '\n';
	std::cout << "to lose your footing and tumble painfully down the rest of the stairs, eventually" << '\n';
	std::cout << "coming to a halt on a cold, damp, dirt floor. Something in your leg feels broken," << '\n';
	std::cout << "but as much as you try to call for help, no one comes. You don't know how much time" << '\n';
	std::cout << "passes before you lose consiousness." << '\n';
	std::cout << '\n';
	std::cout << "This is the end of the adventure for you." << '\n';
	std::cout << '\n';


	std::cout << "GAME OVER" << '\n';

	system("pause");

	std::cout << "Would you like to try again? Y/N" << '\n';

	char x{};


	std::cin >> x;
	std::cin.ignore(32767, '\n');

	switch (x)
	{
	case 'Y':
		TakeTwo();
		break;
	case 'y':
		TakeTwo();
		break;
	case 'N':
		gameoverend();
		break;
	case 'n':
		gameoverend();
		break;
	}
}


void gameoverentranceB1()
{
	ClearScreen();

	std::cout << "As you exit the house through the front door, the storm has not let up" << '\n';
	std::cout << "in the time you spent in the house. In fact, it might have gotten worse" << '\n';
	std::cout << "as you quickly lose your sense of direction in the harsh rain and miminal" << '\n';
	std::cout << "visibility. You should take solace, though, as the muddy embankment you slipped" << '\n';
	std::cout << "down and injured yourself on was only about half a mile from the house and thus" << '\n';
	std::cout << "your body was easily found by the search party." << '\n';
	std::cout << '\n';
	std::cout << "This is the end of the adventure for you." << '\n';
	std::cout << '\n';


	std::cout << "GAME OVER" << '\n';

	system("pause");

	std::cout << "Would you like to try again? Y/N" << '\n';

	char x{};


	std::cin >> x;
	std::cin.ignore(32767, '\n');

	switch (x)
	{
	case 'Y':
		TakeTwo();
		break;
	case 'y':
		TakeTwo();
		break;
	case 'N':
		gameoverend();
		break;
	case 'n':
		gameoverend();
		break;
	}
}
