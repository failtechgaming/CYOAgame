#include <iostream>
#include <stdio.h>
#include "allRooms.h"
void ClearScreen(); 

void TakeTwo()
{

	std::cout << '\n';
	//title sequence (print one line at a time?)
	// Change name to Ash Tree Lane
	std::cout << "|------------------------------------------------------------------------------| " << '\n';
	std::cout << "| ______     ______     __  __        ______   ______     ______     ______    |" << '\n';
	std::cout << "|/\\  __ \\   /\\  ___\\   /\\ \\_\\ \\      /\\__  _\\ /\\  == \\   /\\  ___\\   /\\  ___\\   |" << '\n';
	std::cout << "|\\ \\  __ \\  \\ \\___  \\  \\ \\  __ \\     \\/_/\\ \\/ \\ \\  __<   \\ \\  __\\   \\ \\  __\\   |" << '\n';
	std::cout << "| \\ \\_\\ \\_\\  \\/\\_____\\  \\ \\_\\ \\_\\       \\ \\_\\  \\ \\_\\ \\_\\  \\ \\_____\\  \\ \\_____\\ |" << '\n';
	std::cout << "|  \\/_/\\/_/   \\/_____/   \\/_/\\/_/        \\/_/   \\/_/ /_/   \\/_____/   \\/_____/ |" << '\n';
	std::cout << "|                                                                              |" << '\n';
	std::cout << "|                   __         ______     __   __     ______                   |" << '\n';
	std::cout << "|                  /\\ \\       /\\  __ \\   /\\ '-.  \\   /\\  ___\\                  |" << '\n';
	std::cout << "|                  \\ \\ \\____  \\ \\  __ \\  \\ \\ \\-.  \\  \\ \\  __\\                  |" << '\n';
	std::cout << "|                   \\ \\_____\\  \\ \\_\\ \\_\\  \\ \\_\\\\'\\_\\  \\ \\_____\\                |" << '\n';
	std::cout << "|                    \\/_____/   \\/_/\\/_/   \\/_/ \\/_/   \\/_____/                |" << '\n';
	std::cout << "|------------------------------------------------------------------------------|" << '\n';
	std::cout << '\n';
	std::cout << "Failtech Games, (C) 2020" << '\n';
	std::cout << '\n';

	// Baconhawkanator is a gift to humanity
	// !BAN BERG

	system("pause");
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

void gameovercoffin()
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