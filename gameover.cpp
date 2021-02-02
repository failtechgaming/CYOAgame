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

void NotYet()
{
	std::cout << "This choice is not yet coded. Please stay tuned, and try a different" << '\n';
	std::cout << "option in the meantime! Thanks for playtesting!" << '\n';

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

void gameoverbasementB2()
{
	ClearScreen();

	std::cout << "As you open open the door to the basement and descend, you finally come across" << '\n';
	std::cout << "the source of the noise you thought you heard while you were in the attic. You" << '\n';
	std::cout << "see a middle aged man hunched over a pit in the dirt floor of the basement. As" << '\n';
	std::cout << "you place your weight on a loose step, it squeaks under you and catches his" << '\n';
	std::cout << "attention. Turning to you, his face is a mixture of suprise and anger." << '\n';
	std::cout << "..." << '\n';
		SysPause();
	std::cout << '\n';
	std::cout << "'Who the hell are you??' he bellows at you before he raises the spade and" << '\n';
	std::cout << "lunges at you. He covers the distance quickly, and before you know it, the" << '\n';
	std::cout << "spade connects with your torso and you double over, gasping for breath." << '\n';
	std::cout << "The pain from the hit dazes your senses, so the last thing you remember is" << '\n';
	std::cout << "the shadow of a body standing over you." << '\n';
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



void gameoveratticB1()
{
	ClearScreen();

	std::cout << "You take the book and slip it in your pocket, losing the spot that it was open to." << '\n';
	std::cout << "Heading back down the stairs, you take them two at a time, certain you've found" << '\n';
	std::cout << "the help you need. After all, who could turn down a helpless, lost traveler. Making" << '\n';
	std::cout << "your way back into the kitchen, you find a middle age man with his back to you, washing" << '\n';
	std::cout << "his hands in the sink. You call out with a cheerful 'Hello!' and he turns to face you," << '\n';
	std::cout << "a sense of panic on his expression." << '\n';
	std::cout << "..." << '\n';
	SysPause();
	std::cout << '\n';
	std::cout << "'Who the hell are you?' His features are weathered, as if he's worked a life of hard labor." << '\n';
	std::cout << "His voice is a mixture of anger and terror, perhaps because he wasn't expecting anyone to" << '\n';
	std::cout << "be in his house. Having turned to face you, you see his hands and arms are caked in dirt" << '\n';
	std::cout << "up to his elbows. But the sink has splashes of red mixed in with the brown." << '\n';
	std::cout << "..." << '\n';
	SysPause();
	std::cout << '\n';
	std::cout << "He doesn't even turn off the sink before he lunges at you. A flash of metal and suddenly" << '\n';
	std::cout << "there is a blade at your throat. But that quick image is one of the last you see, before" << '\n';
	std::cout << "your neck and chest feel hot with blood and you fall backwards onto the kitchen floor." << '\n';
	std::cout << "The man quickly moves out of view. Shout or beg as you might, you pass out and shortly" << '\n';
	std::cout << "expire on a dingy linoleum floor in a house you tresspassed in." << '\n';
	SysPause();
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
