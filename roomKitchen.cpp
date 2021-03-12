#include <iostream>
#include <stdio.h>
#include "allRooms.h"
void ClearScreen();

/*
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
*/
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
	std::cout << "To take a look at the notes, select option 1" << '\n';
	std::cout << "To take the stairs down to the basement, select option 2" << '\n';
	//std::cout << "To exit through the back door, select option 3" << '\n';
	//std::cout << "To look in the sink, select option 4" << '\n';
	//std::cout << "To look on the table, select option 5" << '\n';
	std::cout << '\n';
	std::cout << "Please select option 1 or 2" << '\n';

	char x{};


	std::cin >> x;
	std::cin.ignore(32767, '\n');
	
	switch (x)
	{
	case '1':
		std::cout << '\n';
		std::cout << "Stepping over to the table, you see the piles of papers are mostly hand-written," << '\n';
		std::cout << "a scrawl with poor penmanship that looks less and less deranged as you shuffle through" << '\n';
		std::cout << "the pile, indicating what you believe to be an individual loosening their grip on" << '\n';
		std::cout << "reality as they wrote. The papers at the bottom of the pile talk about a book," << '\n';
		std::cout << "and also mention a library on the second floor of the house. The notes at the top" << '\n';
		std::cout << "of the stack, where it appears to be written almost as if scratched into the paper," << '\n';
		std::cout << "instead reference what sounds like a coffin in the basement, but makes no mention" << '\n';
		std::cout << "of a body or even of a death occuring in the household." << '\n';
		std::cout << "..." << '\n';
		SysPause();
		std::cout << '\n';
		std::cout << "One thing you find mention of repeatedly in the notes is a key. This appears to be" << '\n';
		std::cout << "a literal key, something that the writer had on their person at some point in time" << '\n';
		std::cout << "as their writing seems to indicate they became paranoid after they thought they lost" << '\n';
		std::cout << "it. This key sounds like a master key of sorts, as the writer portrays it as allowing" << '\n';
		std::cout << "unfettered access to all parts of the home. The key, it goes on to say, is labeled" << '\n';
		std::cout << "with the icon of the house, an image of a bird encompassed in a sun." << '\n';
		std::cout << "..." << '\n';
		SysPause();
		std::cout << '\n';
		std::cout << "With this information in mind, nothing in the kitchen itself appears to be a good" << '\n';
		std::cout << "hiding place for a key. You tuck one of the notes about the key and the library in" << '\n';
		std::cout << "your pocket and head through the only door, leading into the dining room. The dining" << '\n';
		std::cout << "room contains only an empty table, with room and seats enough to sit a dozen easily." << '\n';
		std::cout << "There is no other furniture in this room, instead only a door that leads out the other" << '\n';
		std::cout << "side from where you came in. With nowhere else to look, you head through that door." << '\n';
		SysPause();
		roomEntranceB1();
		break;
	case '2':
		gameoverbasementB1();
		break;
	/*case '3':
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
		//roomKitchenB1d();
	
		break;
	case '5':
		std::cout << "The table is covered in scraps of newspapers, most of which are obituaries from local towns." << '\n';
		system("pause");
		ClearScreen();
		//roomKitchenB1b();
		break;*/
	default:
		goto tryAgain;
		break;
	}

}

void roomKitchenB2()
{

	ClearScreen();

	//room name
	std::cout << " --------- " << '\n';
	std::cout << "| Kitchen |" << '\n';
	std::cout << " ---------" << '\n';

	// text for the room/encounter goes here

	std::cout << "The kitchen is a yellow-tinged room with counters on the west wall and a square table. Dishes are" << '\n';
	std::cout << "piled in the sink. The table is stacked with papers and notes. There is a door to the dining room" << '\n';
	std::cout << "to the south, and a door to the basement." << '\n';
	std::cout << '\n';
	std::cout << "On return to the kitchen, you notice the notes on the table have been disturbed, as if someone" << '\n';
	std::cout << "was looking for something in particular. Additionally, a knife has been added to the stack of" << '\n';
	std::cout << "dishes in the sink, and the sink has been recently used - blood-tinged water is still visible on some" << '\n';
	std::cout << "of the dishes under the knife." << '\n';
tryAgain:
	std::cout << '\n';
	std::cout << "To take the stairs down to the basement, select option 1" << '\n';
	std::cout << "To take a look at the knife, select option 2" << '\n';
	//std::cout << "To exit through the back door, select option 3" << '\n';
	//std::cout << "To look in the sink, select option 4" << '\n';
	//std::cout << "To look on the table, select option 5" << '\n';
	std::cout << '\n';
	std::cout << "Please select option 1 or 2" << '\n';

	char x{};


	std::cin >> x;
	std::cin.ignore(32767, '\n');

	switch (x)
	{
	case '1':
		
		gameoverbasementB2();
		break;
	case '2':
		std::cout << '\n';
		std::cout << "As you step over to the sink, you see the mess surrounding the sink has grown immensely. Not" << '\n';
		std::cout << "only is water splashed all over the counters and floor around the sink, but the stack of dishes" << '\n';
		std::cout << "that the knife is precariously resting on appear to have been roughed up in the course of using" << '\n';
		std::cout << "the sink - some dishes have cracks and a few are outright broken, the jagged edges of porcelain" << '\n';
		std::cout << "and earthenware jutting out at random angles gives the sink the appearance of a sharp-toothed" << '\n';
		std::cout << "mouth, almost too dangerous to reach your hand into. The blood-tinged water splattered about the" << '\n';
		std::cout << "area makes the whole thing feel a bit gruesome." << '\n';
		std::cout << "..." << '\n';
		SysPause();
		std::cout << '\n';
		std::cout << "The knife itself, resting on the pile of shards, glistens as the blade is still damp. The handle is" << '\n';
		std::cout << "an ornate wood carving, but some of the details are worn down with age or use. From what you can tell" << '\n';
		std::cout << "the design incorporates images of skulls and bones in an intricate pattern. The wood appears to be a" << '\n';
		std::cout << "naturally dark grey color as there's no indication of any staining or painting. The blade itself," << '\n';
		std::cout << "the tang visibly running down the center of the handle, looks almost as if it was hand-made, rough" << '\n';
		std::cout << "strikes against the metal as it was being forged. The blade is nicked and chipped in places. It" << '\n';
		std::cout << "doesn't look like it was being taken good care of. With this in mind, you dry it off and pocket it," << '\n';
		std::cout << "as you will obviously be a better owner than the previous one." << '\n';
		std::cout << "..." << '\n';
		SysPause();
		std::cout << '\n';
		std::cout << "With the knife in your pocket, you cross the room and open the door to the basement. The immediate darkness" << '\n';
		std::cout << "is diffused by ambient light at the bottom of the stairs. It appears someone has been in the basement not" << '\n';
		std::cout << "too unrecently. As you make it to the bottom of the stairs and into the basement proper, you find a number" << '\n';
		std::cout << "of lit sconces along the walls but no one is present in the room. In the center of the basement, there" << '\n';
		std::cout << "is a freshly dug pit and a set of shovels and spades leaning up against a sealed coffin. An additional open" << '\n';
		std::cout << "coffin rests next to the pit, as though it was moments away from being tipped into the makeshift grave." << '\n';
		std::cout << "On the closed coffin there are a handful of notes that look similar to the ones in the kitchen." << '\n';
		SysPause();

		roomBasementNorthB1();

		//CODE STUFF ABOUT KNIFE 
		std::cout << '\n';
		//NotYet();

		//gameoverbasementB1();
		break;
		/*case '3':
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
			//roomKitchenB1d();

			break;
		case '5':
			std::cout << "The table is covered in scraps of newspapers, most of which are obituaries from local towns." << '\n';
			system("pause");
			ClearScreen();
			//roomKitchenB1b();
			break;*/
	default:
		goto tryAgain;
		break;
	}

}

void roomKitchenA1()
{

	ClearScreen();

	//room name
	std::cout << " --------- " << '\n';
	std::cout << "| Kitchen |" << '\n';
	std::cout << " ---------" << '\n';

	// text for the room/encounter goes here

	std::cout << "The kitchen is a yellow-tinged room with counters on the west wall and a square table. Dishes are" << '\n';
	std::cout << "piled in the sink, though they do not appear to be used recently. The table is stacked with papers" << '\n';
	std::cout << "and notes. There is a door to the dining room behind you, and a door on the other side of the room." << '\n';
tryAgain:
	std::cout << '\n';
	std::cout << "To take a look at the notes, select option 1" << '\n';
	std::cout << "To open the door across the room, select option 2" << '\n';
	//std::cout << "To exit through the back door, select option 3" << '\n';
	//std::cout << "To look in the sink, select option 4" << '\n';
	//std::cout << "To look on the table, select option 5" << '\n';
	std::cout << '\n';
	std::cout << "Please select option 1 or 2" << '\n';

	char x{};


	std::cin >> x;
	std::cin.ignore(32767, '\n');

	switch (x)
	{
	case '1':
		//gameover function
		gameoverkitchenA1();
		break;
	case '2':
		std::cout << '\n';
		std::cout << "Stepping over to the door across the room, as you open it you realize it's a set of stairs leading" << '\n';
		std::cout << "down to the basement. The stairs turn as they disappear into the darkness of the basement. But with" << '\n';
		std::cout << "a flick of the light switch just inside the door, you see the bottom of the stairs come into view." << '\n';
		std::cout << "The stairs themselves are rough-hewn wood slats with no railing, curving to the left as you" << '\n';
		std::cout << "descend, with smooth stone walls on either side." << '\n';
		std::cout << "..." << '\n';
		SysPause();
		std::cout << '\n';
		std::cout << "As you walk down the stairs, turning to the left upon reaching the bottom, you're presented with" << '\n';
		std::cout << "an unfinished, stone and dirt basement. There's minimal upgrades done to the space to make it livable," << '\n';
		std::cout << "and at most you only see a few lights attached to the stone walls, and a small table and chair off to" << '\n';
		std::cout << "one side, with what looks like a small knife stuck in the top of the wooden table. The back wall seems" << '\n';
		std::cout << "to be made of fitted stones in a makeshift wall, with a handful of tools piled next to it." << '\n';
		std::cout << "..." << '\n';
		SysPause();
		std::cout << '\n';
		std::cout << "The basement has a chill in the air different than the rest of the house. You feel a new sense of unease;" << '\n';
		std::cout << "while you felt as though you were trespassing through the majority of the house so far, this feels like" << '\n';
		std::cout << "you've stumbled upon a place you most certainly are not supposed to be in, for possibly more nefarious reasons." << '\n';
		std::cout << "Even though the basement is largely empty, it still feels as though the room is suffocating you though by" << '\n';
		std::cout << "some unknown means." << '\n';
		SysPause();
		roomBasementNorthA1();
		//NotYet();
		//goto tryAgain;
		//gameoverbasementB1();
		break;
		/*case '3':
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
			//roomKitchenB1d();

			break;
		case '5':
			std::cout << "The table is covered in scraps of newspapers, most of which are obituaries from local towns." << '\n';
			system("pause");
			ClearScreen();
			//roomKitchenB1b();
			break;*/
	default:
		goto tryAgain;
		break;
	}

}


/*
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

*/