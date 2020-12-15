#include <iostream>
#include <stdio.h>
#include "allRooms.h"
void ClearScreen();


// RENAME FUNCTION
void roomKitchen()
{

	ClearScreen();

	//room name
	std::cout << " --------- " << '\n';
	std::cout << "| Kitchen |" << '\n';
	std::cout << " ---------" << '\n';

	// text for the room/encounter goes here

	std::cout << "EXAMPLE TEXT" << '\n';
tryAgain:
	std::cout << '\n';
	std::cout << "To enter the dining room, select option 1" << '\n';
	std::cout << "To take the stairs down to the basement, select option 2" << '\n';
	std::cout << "To exit through the back door, select option 3" << '\n';
	std::cout << '\n';
	std::cout << "Please select option 1, 2, or 3" << '\n';

	char x{};
	

	std::cin >> x;
	std::cin.ignore(32767, '\n');

	switch (x)
	{
	case '1':
		roomDining();
		break;
	case '2':
		stairsBasementDown();
		break;
	case '3':
		//outside dead end
	default:
		goto tryAgain;
		break;
	}

}

void roomKitchenB1()
{

	ClearScreen();

	//room name
	std::cout << " --------- " << '\n';
	std::cout << "| Kitchen |" << '\n';
	std::cout << " ---------" << '\n';

	// text for the room/encounter goes here

	std::cout << "The kitchen is a yellow-tinged room with counters on the west wall and a square table. Dishes are" << '\n';
	std::cout << "piled in the sink, though they do not appear to be used recently. The table is stacked with papers" << '\n';
	std::cout << "and notes. There is a door to the dining room to the south, and a door to the basement." << '\n';
tryAgain:
	std::cout << '\n';
	std::cout << "To enter the dining room, select option 1" << '\n';
	std::cout << "To take the stairs down to the basement, select option 2" << '\n';
	std::cout << "To exit through the back door, select option 3" << '\n';
	std::cout << "To look in the sink, select option 4" << '\n';
	std::cout << "To look on the table, select option 5" << '\n';
	std::cout << '\n';
	std::cout << "Please select option 1, 2, 3, 4, or 5" << '\n';

	char x{};


	std::cin >> x;
	std::cin.ignore(32767, '\n');

	switch (x)
	{
	case '1':
		roomDiningB1();
		break;
	case '2':
		stairsBasementDown();
		break;
	case '3':
		std::cout << "The storm raging outside makes the idea of leaving the house undesirable." << '\n';
		std::cout << "You think twice about stepping out into the pouring rain and decide against it." << '\n';
		system("pause");
		ClearScreen();
		goto tryAgain;
		break;
	case '4':
		std::cout << "The sink is full of dirty dishes, though the food on the plates looks long since rotten." << '\n';
		system("pause");
		ClearScreen();
		roomKitchenB1d();
	
		break;
	case '5':
		std::cout << "The table is covered in scraps of newspapers, most of which are obituaries from local towns." << '\n';
		system("pause");
		ClearScreen();
		roomKitchenB1b();
		break;
	default:
		goto tryAgain;
		break;
	}

}

void roomKitchenB1a()
{

	ClearScreen();

	//room name
	std::cout << " --------- " << '\n';
	std::cout << "| Kitchen |" << '\n';
	std::cout << " ---------" << '\n';

	//  SANS DISHES

	std::cout << "The kitchen is a yellow-tinged room with counters on the west wall and a square table. Dishes are" << '\n';
	std::cout << "piled in the sink, though they do not appear to be used recently. The table is stacked with papers" << '\n';
	std::cout << "and notes. There is a door to the dining room to the south, and a door to the basement." << '\n';
tryAgain:
	std::cout << '\n';
	std::cout << "To enter the dining room, select option 1" << '\n';
	std::cout << "To take the stairs down to the basement, select option 2" << '\n';
	std::cout << "To exit through the back door, select option 3" << '\n';
	std::cout << "To look on the table, select option 4" << '\n';
	std::cout << '\n';
	std::cout << "Please select option 1, 2, 3, or 4" << '\n';

	char x{};


	std::cin >> x;
	std::cin.ignore(32767, '\n');

	switch (x)
	{
	case '1':
		roomDiningB1();
		break;
	case '2':
		stairsBasementDown();
		break;
	case '3':
		std::cout << "The storm raging outside makes the idea of leaving the house undesirable." << '\n';
		std::cout << "You think twice about stepping out into the pouring rain and decide against it." << '\n';
		system("pause");
		ClearScreen();
		goto tryAgain;
		break;
	case '4':
		std::cout << "The table is covered in scraps of newspapers, most of which are obituaries from local towns." << '\n';
		system("pause");
		ClearScreen();
		roomKitchenB1b();
		break;
	default:
		goto tryAgain;
		break;
	}

}

void roomKitchenB1b()
{

	ClearScreen();

	//room name
	std::cout << " --------- " << '\n';
	std::cout << "| Kitchen |" << '\n';
	std::cout << " ---------" << '\n';

	// SANS TABLE

	std::cout << "The kitchen is a yellow-tinged room with counters on the west wall and a square table. Dishes are" << '\n';
	std::cout << "piled in the sink, though they do not appear to be used recently. The table is stacked with papers" << '\n';
	std::cout << "and notes. There is a door to the dining room to the south, and a door to the basement." << '\n';
tryAgain:
	std::cout << '\n';
	std::cout << "To enter the dining room, select option 1" << '\n';
	std::cout << "To take the stairs down to the basement, select option 2" << '\n';
	std::cout << "To exit through the back door, select option 3" << '\n';
	std::cout << "To look in the sink, select option 4" << '\n';
	std::cout << '\n';
	std::cout << "Please select option 1, 2, 3, or 4" << '\n';

	char x{};


	std::cin >> x;
	std::cin.ignore(32767, '\n');

	switch (x)
	{
	case '1':
		roomDiningB1();
		break;
	case '2':
		stairsBasementDown();
		break;
	case '3':
		std::cout << "The storm raging outside makes the idea of leaving the house undesirable." << '\n';
		std::cout << "You think twice about stepping out into the pouring rain and decide against it." << '\n';
		system("pause");
		ClearScreen();
		goto tryAgain;
		break;
	case '4':
		std::cout << "The sink is full of dirty dishes, though the food on the plates looks long since rotten." << '\n';
		system("pause");
		ClearScreen();
		roomKitchenB1c();
		break;
	default:
		goto tryAgain;
		break;
	}

}

void roomKitchenB1c()
{

	ClearScreen();

	//room name
	std::cout << " --------- " << '\n';
	std::cout << "| Kitchen |" << '\n';
	std::cout << " ---------" << '\n';

	// SANS TABLE AND DISHES

	std::cout << "The kitchen is a yellow-tinged room with counters on the west wall and a square table. Dishes are" << '\n';
	std::cout << "piled in the sink, though they do not appear to be used recently. The table is stacked with papers" << '\n';
	std::cout << "and notes. There is a door to the dining room to the south, and a door to the basement." << '\n';
tryAgain:
	std::cout << '\n';
	std::cout << "To enter the dining room, select option 1" << '\n';
	std::cout << "To take the stairs down to the basement, select option 2" << '\n';
	std::cout << "To exit through the back door, select option 3" << '\n';
	std::cout << '\n';
	std::cout << "Please select option 1, 2, or 3" << '\n';

	char x{};


	std::cin >> x;
	std::cin.ignore(32767, '\n');

	switch (x)
	{
	case '1':
		roomDiningB1();
		break;
	case '2':
		stairsBasementDown();
		break;
	case '3':
		std::cout << "The storm raging outside makes the idea of leaving the house undesirable." << '\n';
		std::cout << "You think twice about stepping out into the pouring rain and decide against it." << '\n';
		system("pause");
		ClearScreen();
		goto tryAgain;
		break;
	
	default:
		goto tryAgain;
		break;
	}

}
void roomKitchenB1d()
{

	ClearScreen();

	//room name
	std::cout << " --------- " << '\n';
	std::cout << "| Kitchen |" << '\n';
	std::cout << " ---------" << '\n';

	//  SANS DISHES

	std::cout << "The kitchen is a yellow-tinged room with counters on the west wall and a square table. Dishes are" << '\n';
	std::cout << "piled in the sink, though they do not appear to be used recently. The table is stacked with papers" << '\n';
	std::cout << "and notes. There is a door to the dining room to the south, and a door to the basement." << '\n';
tryAgain:
	std::cout << '\n';
	std::cout << "To enter the dining room, select option 1" << '\n';
	std::cout << "To take the stairs down to the basement, select option 2" << '\n';
	std::cout << "To exit through the back door, select option 3" << '\n';
	std::cout << "To look on the table, select option 4" << '\n';
	std::cout << '\n';
	std::cout << "Please select option 1, 2, 3, or 4" << '\n';

	char x{};


	std::cin >> x;
	std::cin.ignore(32767, '\n');

	switch (x)
	{
	case '1':
		roomDiningB1();
		break;
	case '2':
		stairsBasementDown();
		break;
	case '3':
		std::cout << "The storm raging outside makes the idea of leaving the house undesirable." << '\n';
		std::cout << "You think twice about stepping out into the pouring rain and decide against it." << '\n';
		system("pause");
		ClearScreen();
		goto tryAgain;
		break;
	case '4':
		std::cout << "The table is covered in scraps of newspapers, most of which are obituaries from local towns." << '\n';
		system("pause");
		ClearScreen();
		roomKitchenB1c();
		break;
	default:
		goto tryAgain;
		break;
	}

}
void roomKitchenB2a()
{
	//a copy of roomKitchenB1c- maybe go back eventually and split B1a/b/c into individual paths
	ClearScreen();

	//room name
	std::cout << " --------- " << '\n';
	std::cout << "| Kitchen |" << '\n';
	std::cout << " ---------" << '\n';

	// SANS TABLE AND DISHES

	std::cout << "The kitchen is a yellow-tinged room with counters on the west wall and a square table. Dishes are" << '\n';
	std::cout << "piled in the sink, though they do not appear to be used recently. The table is stacked with papers" << '\n';
	std::cout << "and notes. There is a door to the dining room to the south, and a door to the basement." << '\n';
tryAgain:
	std::cout << '\n';
	std::cout << "To enter the dining room, select option 1" << '\n';
	std::cout << "To take the stairs down to the basement, select option 2" << '\n';
	std::cout << "To exit through the back door, select option 3" << '\n';
	std::cout << '\n';
	std::cout << "Please select option 1, 2, or 3" << '\n';

	char x{};


	std::cin >> x;
	std::cin.ignore(32767, '\n');

	switch (x)
	{
	case '1':
		roomDiningB2a();
		break;
	case '2':
		stairsBasementDownB2();
		break;
	case '3':
		std::cout << "The storm raging outside makes the idea of leaving the house undesirable." << '\n';
		std::cout << "You think twice about stepping out into the pouring rain and decide against it." << '\n';
		system("pause");
		ClearScreen();
		goto tryAgain;
		break;

	default:
		goto tryAgain;
		break;
	}

}

void roomKitchenB2b()
{
	//a copy of roomKitchenB1c- maybe go back eventually and split B1a/b/c into individual paths
	ClearScreen();

	//room name
	std::cout << " --------- " << '\n';
	std::cout << "| Kitchen |" << '\n';
	std::cout << " ---------" << '\n';

	// SANS TABLE AND DISHES

	std::cout << "The kitchen is a yellow-tinged room with counters on the west wall and a square table. Dishes are" << '\n';
	std::cout << "piled in the sink, though they do not appear to be used recently. The table is stacked with papers" << '\n';
	std::cout << "and notes. There is a door to the dining room to the south, and a door to the basement." << '\n';
tryAgain:
	std::cout << '\n';
	std::cout << "To enter the dining room, select option 1" << '\n';
	std::cout << "To take the stairs down to the basement, select option 2" << '\n';
	std::cout << "To exit through the back door, select option 3" << '\n';
	std::cout << '\n';
	std::cout << "Please select option 1, 2, or 3" << '\n';

	char x{};


	std::cin >> x;
	std::cin.ignore(32767, '\n');

	switch (x)
	{
	case '1':
		roomDiningB2b();
		break;
	case '2':
		stairsBasementDownB2b();
		break;
	case '3':
		std::cout << "The storm raging outside makes the idea of leaving the house undesirable." << '\n';
		std::cout << "You think twice about stepping out into the pouring rain and decide against it." << '\n';
		system("pause");
		ClearScreen();
		goto tryAgain;
		break;

	default:
		goto tryAgain;
		break;
	}

}

