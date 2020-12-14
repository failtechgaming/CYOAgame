#include <iostream>
#include <stdio.h>
#include "allRooms.h"
void ClearScreen();

void gameover()
{
	ClearScreen();

	std::cout << "GAME OVER" << '\n';
		
		system("pause"); 
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
}