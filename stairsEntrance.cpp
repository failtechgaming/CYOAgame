#pragma once
#include <iostream>
#include <stdio.h>
#include "allRooms.h"

void ClearScreen();


// RENAME FUNCTION
void stairsEntranceUp()
{

	ClearScreen();

	//room name
	std::cout << " ---------- " << '\n';
	std::cout << "| Front Stairs |" << '\n';
	std::cout << " ----------" << '\n';

	// text for the room/encounter goes here

	std::cout << "You take the main staircase up to the second floor. The stairs are wide with an elaborately carved bannister," << '\n';
	std::cout << "and squeak slightly with every step. The hardwood looks well worn in places. " << '\n';
	std::cout << '\n';

	
	system("pause");
	roomSecondFloorLanding();

};

void stairsEntranceDown()
{

	ClearScreen();

	//room name
	std::cout << " ---------- " << '\n';
	std::cout << "| Front Stairs |" << '\n';
	std::cout << " ----------" << '\n';

	// text for the room/encounter goes here

	std::cout << "You take the main staircase down to the first floor. The stairs are wide with an elaborately carved bannister," << '\n';
	std::cout << "and squeak slightly with every step. The hardwood looks well worn in places." << '\n';
	std::cout << '\n';

	
	system("pause");
	roomEntrance();

};

void stairsEntranceDownB2a()
{

	ClearScreen();

	//room name
	std::cout << " ---------- " << '\n';
	std::cout << "| Front Stairs |" << '\n';
	std::cout << " ----------" << '\n';

	// text for the room/encounter goes here

	std::cout << "You take the main staircase down to the first floor. The stairs are wide with an elaborately carved bannister," << '\n';
	std::cout << "and squeak slightly with every step. The hardwood looks well worn in places." << '\n';
	std::cout << '\n';


	system("pause");
	roomEntrance();

};


void stairsEntranceUpB1()
{

	ClearScreen();

	//room name
	std::cout << " ---------- " << '\n';
	std::cout << "| Front Stairs |" << '\n';
	std::cout << " ----------" << '\n';

	// DOES NOT HAVE KEYS

	std::cout << "You take the main staircase up to the second floor. The stairs are wide with an elaborately carved bannister," << '\n';
	std::cout << "and squeak slightly with every step. The hardwood looks well worn in places. " << '\n';
	std::cout << '\n';


	system("pause");
	roomSecondFloorLandingB1a();

};

void stairsEntranceUpB1a()
{

	ClearScreen();

	//room name
	std::cout << " ---------- " << '\n';
	std::cout << "| Front Stairs |" << '\n';
	std::cout << " ----------" << '\n';

	// HAS KEYS

	std::cout << "You take the main staircase up to the second floor. The stairs are wide with an elaborately carved bannister," << '\n';
	std::cout << "and squeak slightly with every step. The hardwood looks well worn in places. " << '\n';
	std::cout << '\n';


	system("pause");
	roomSecondFloorLandingB1();

};

void stairsEntranceUpB2a()
{

	ClearScreen();

	//room name
	std::cout << " ---------- " << '\n';
	std::cout << "| Front Stairs |" << '\n';
	std::cout << " ----------" << '\n';

	// text for the room/encounter goes here

	std::cout << "You take the main staircase up to the second floor. The stairs are wide with an elaborately carved bannister," << '\n';
	std::cout << "and squeak slightly with every step. The hardwood looks well worn in places. " << '\n';
	std::cout << '\n';


	system("pause");
	roomSecondFloorLandingB2a();

};
