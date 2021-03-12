#include <iostream>
#include <stdio.h>
#include "allRooms.h"
void ClearScreen();

/*


void roomEntrance()
{

	ClearScreen();
	// text for the room/encounter goes here

		//room name
	std::cout << " ---------- " << '\n';
	std::cout << "| Entryway |" << '\n';
	std::cout << " ----------" << '\n';

	std::cout << "EXAMPLE TEXT" << '\n';
tryAgain:
	std::cout << '\n';
	std::cout << "To go into the dining room, select option 1" << '\n';
	std::cout << "To enter the parlor, select option 2" << '\n';
	std::cout << "To take the stairs to the second floor, select option 3" << '\n';
	std::cout << "To leave through the front door, select option 4" << '\n';
	std::cout << '\n';
	std::cout << "Please select option 1, 2, 3, or 4" << '\n';

	char x{};
	

	std::cin >> x;
	std::cin.ignore(32767, '\n');

	switch (x)
	{
	case '1':
		roomDining();
		break;
	case '2':
		roomParlor();
		break;
	case '3':
		stairsEntranceUp();
		break;
	case '4':
		//outside dead end
	default:
		goto tryAgain;
		break;
	}

}
*/
void roomEntranceA1()
{

	ClearScreen();
	// text for the room/encounter goes here

		//room name
	std::cout << " --------------- " << '\n';
	std::cout << "| Front of House |" << '\n';
	std::cout << " ---------------" << '\n';
	std::cout << '\n';

	std::cout << "You walk through the storm to the front of the house, standing on the barren porch. The shutters" << '\n';
	std::cout << "bang against the boarded up windows, though through a crack you can see lights on inside the house." << '\n';
	std::cout << "Knocking on the paint-chipped door, your knuckles sting against the hard, wet wood. After a moment" << '\n';
	std::cout << "you hear a voice faintly call out to come on in. At least, you think you hear a voice. You swear you do." << '\n';
	std::cout << "Plus, you don't want to stand out in the storm any longer than you need to." << '\n';
	std::cout << "..." << '\n';
	SysPause();
	std::cout << '\n';
	std::cout << "Opening the door and letting yourself in, you walk into the grand entryway of the house, where you" << '\n';
	std::cout << "would be able to move to most rooms easily, in addition to the large set of stairs ascending to the" << '\n';
	std::cout << "second floor. In the entryway, there is only a coat rack heavy with old coats. The light that you saw" << '\n';
	std::cout << "through the window shutters appears to have come from the room through the door to your right." << '\n';
	

	
tryAgain:
	std::cout << '\n';
	std::cout << "To go through the door to your right, select option 1" << '\n';
	//std::cout << "To enter the parlor, select option 2" << '\n';
	std::cout << "To take the stairs to the second floor, select option 2" << '\n';
	//std::cout << "To leave through the front door, select option 4" << '\n';
	std::cout << '\n';
	std::cout << "Please select option 1 or 2" << '\n';

	char x{};


	std::cin >> x;
	std::cin.ignore(32767, '\n');

	switch (x)
	{
	case '1':
		std::cout << '\n';
		std::cout << "Opening the door to your right, you reveal an elaborate dining room with a large table set for" << '\n';
		std::cout << "what looks like a dinner party. Fine dishes and stemware and cutlery all lay adorning the length" << '\n';
		std::cout << "of the solid wood table, though no food is present. There are flickering candles every so often" << '\n';
		std::cout << "to enhance the mood, though the light you saw from outside probably came from the overhead" << '\n';
		std::cout << "chandelier, made of intricate crystal." << '\n';
		std::cout << "..." << '\n';
		SysPause();
		std::cout << '\n';
		std::cout << "Other than the furniture in this room, there is nothing truely of note other than a door on" << '\n';
		std::cout << "the other end of the room. Crossing the dining room, however, you're struck that the table is" << '\n';
		std::cout << "set for a dozen or more guests, though you only hear silence. There is no sound of voices in" << '\n';
		std::cout << "other rooms, there is no music being played, no laughter, no sounds of food being prepared." << '\n';
		std::cout << "In fact, though the candles are full sticks and look new, everything else on the table appears" << '\n';
		std::cout << "to have a fine layer of dust on it, untouched for days at minimum." << '\n';
		std::cout << "..." << '\n';
		SysPause();
		std::cout << '\n';
		std::cout << "Opening the far door, you step into the kitchen, though the immediate scene is much different" << '\n';
		std::cout << "than that of the dining room. While you just came from a room prepared for extravagence, you now" << '\n';
		std::cout << "find yourself in room of chaos. The small kitchen table is littered with notes and scraps of paper," << '\n';
		std::cout << "as if someone is trying to sort through a box of loose sheets. In the sink there are stacks of dishes," << '\n';
		std::cout << "many of which look unwashed for weeks on end. While the back door is shut tight, the storm is having" << '\n';
		std::cout << "a hell of a time slamming the screen door open and closed in the winds. There is one other door in" << '\n';
		std::cout << "the kitchen, across from where you entered." << '\n';
		SysPause(); 
		roomKitchenA1();
		break;
	case '2':
		gameoverentranceA1();
		break;
	case '3':
		//stairsEntranceUp();
		break;
	case '4':
		//outside dead end
	default:
		goto tryAgain;
		break;
	}
	
	system("pause");
	//roomEntrance();
}

void roomEntranceB1()
{
	ClearScreen();
	// text for the room/encounter goes here

		//room name
	std::cout << " ---------- " << '\n';
	std::cout << "| Entryway |" << '\n';
	std::cout << " ----------" << '\n';

	std::cout << "The small but inviting entryway of the house leads to multiple rooms along with massive double doors as the main entrance. " << '\n';
	std::cout << "There is a coat rack in the corner, and a set of stairs leading up. Aside from a few tasteful lamps, the room is empty." << '\n';
	
tryAgain:
	std::cout << '\n';
	std::cout << "To exit the house through the front door, select option 1" << '\n';
	std::cout << "To check the coats, select option 2" << '\n';
	//std::cout << "To take the stairs to the second floor, select option 3" << '\n';
	//std::cout << "To leave through the front door, select option 4" << '\n';
	//std::cout << "To investigate the coat rack, select option 5" << '\n';
	std::cout << '\n';
	std::cout << "Please select option 1 or 2" << '\n';

	char x{};


	std::cin >> x;
	std::cin.ignore(32767, '\n');

	switch (x)
	{
	case '1':
		gameoverentranceB1();
		break;
	case '2':
		std::cout << '\n';
		std::cout << "Rifling through the coats on the rack, you find old receipts from decades past," << '\n';
		std::cout << "notes in multiple different styles of handwriting, and even an old breath mint" << '\n';
		std::cout << "or two. However, as you go to replace one of the coats onto the rack, you hear" << '\n';
		std::cout << "a small metallic clink on the floor at your feet. The coat you just held up," << '\n';
		std::cout << "you now see, has a hole on the bottom hem, and you trace a straight line into" << '\n';
		std::cout << "one of the pockets which has a similarly sized hole in it. The author of those notes," << '\n';
		std::cout << "you realize, was paranoid due only to faulty stitch-work. Setting aside the coat," << '\n';
		std::cout << "the key you pick up off the floor was a rounded handle with an image of a bird in a circle," << '\n';
		std::cout << "worn down from years of use. You pocket this key, making sure your own pocket is not" << '\n';
		std::cout << "inclined to turn on you the same way the coat did on its owner." << '\n';
		std::cout << "..." << '\n';
		SysPause();
		std::cout << '\n';
		std::cout << "Remembering the note about the library on the second floor, you quickly replace all" << '\n';
		std::cout << "the coats you rummaged through, and ascend the grand stairs that take up the majority" << '\n';
		std::cout << "of the house entrance. The stairs are elaborate, hand-crafted wood with ornamental" << '\n';
		std::cout << "banisters and well-worn steps. The first floor newel post finial is carved in the" << '\n';
		std::cout << "likeness of a bird, while the second floor finial appears to be a celestial body." << '\n';
		std::cout << "..." << '\n';
		SysPause();
		std::cout << '\n';
		std::cout << "You arrive at the second floor landing, standing at a T-intersection with the master" << '\n';
		std::cout << "bedroom to one side and the guest bedroom to the other, with the stem of the T being" << '\n';
		std::cout << "the stairs behind you." << '\n';
		std::cout << "..." << '\n';
		SysPause();
		roomSecondFloorLandingB1();
		break;
	//case '3':
		//stairsEntranceUpB1();
		//break;
	//case '4':
		//std::cout << "The storm raging outside makes the idea of leaving the house undesirable." << '\n';
		//std::cout << "You think twice about stepping out into the pouring rain and decide against it." << '\n';
		//system("pause");
		//ClearScreen();
		//goto tryAgain;
		//break;
	//case '5':
		//std::cout << "The coat rack has a large number of coats on it, but they all seem decades out of style. In the pocket of one coat," << '\n';
		//std::cout << "you find a rusty set of keys." << '\n';
		//system("pause");
		//ClearScreen();
		//roomEntranceB1a();
		//break;
	default:
		goto tryAgain;
		break;
	}
}
/*
void roomEntranceB1a()
{
	ClearScreen();
	// text for the room/encounter goes here

		//room name

	//HAS KEYS
	std::cout << " ---------- " << '\n';
	std::cout << "| Entryway |" << '\n';
	std::cout << " ----------" << '\n';

	std::cout << "The small but inviting entryway of the house leads to multiple rooms. There is a coatrack in the corner, and a" << '\n';
	std::cout << "set of stairs leading up. Aside from a few tasteful lamps, the room is empty and leads to the parlor and the " << '\n';
	std::cout << "dining room." << '\n';
tryAgain:
	std::cout << '\n';
	std::cout << "To go into the dining room, select option 1" << '\n';
	std::cout << "To enter the parlor, select option 2" << '\n';
	std::cout << "To take the stairs to the second floor, select option 3" << '\n';
	std::cout << "To leave through the front door, select option 4" << '\n';
	std::cout << '\n';
	std::cout << "Please select option 1, 2, 3, or 4" << '\n';

	char x{};


	std::cin >> x;
	std::cin.ignore(32767, '\n');

	switch (x)
	{
	case '1':
		roomDining();
		break;
	case '2':
		roomParlor();
		break;
	case '3':
		stairsEntranceUpB1a();
		break;
	case '4':
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

void roomEntranceB2a()
{

	ClearScreen();
	// text for the room/encounter goes here

		//room name
	std::cout << " ---------- " << '\n';
	std::cout << "| Entryway |" << '\n';
	std::cout << " ----------" << '\n';

	std::cout << "EXAMPLE TEXT" << '\n';
tryAgain:
	std::cout << '\n';
	std::cout << "To go into the dining room, select option 1" << '\n';
	std::cout << "To enter the parlor, select option 2" << '\n';
	std::cout << "To take the stairs to the second floor, select option 3" << '\n';
	std::cout << "To leave through the front door, select option 4" << '\n';
	std::cout << '\n';
	std::cout << "Please select option 1, 2, 3, or 4" << '\n';

	char x{};


	std::cin >> x;
	std::cin.ignore(32767, '\n');

	switch (x)
	{
	case '1':
		roomDiningB2a();
		break;
	case '2':
		roomParlor();
		break;
	case '3':
		stairsEntranceUpB2a();
		break;
	case '4':
		//outside dead end
	default:
		goto tryAgain;
		break;
	}

}

void roomEntranceB2b()
{

	ClearScreen();
	// text for the room/encounter goes here

		//room name
	std::cout << " ---------- " << '\n';
	std::cout << "| Entryway |" << '\n';
	std::cout << " ----------" << '\n';

	std::cout << "EXAMPLE TEXT" << '\n';
tryAgain:
	std::cout << '\n';
	std::cout << "To go into the dining room, select option 1" << '\n';
	std::cout << "To enter the parlor, select option 2" << '\n';
	std::cout << "To take the stairs to the second floor, select option 3" << '\n';
	std::cout << "To leave through the front door, select option 4" << '\n';
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
		roomParlor();
		break;
	case '3':
		stairsEntranceUpB2a();
		break;
	case '4':
		//outside dead end
	default:
		goto tryAgain;
		break;
	}

}

void roomEntranceB2c()
{

	ClearScreen();
	// text for the room/encounter goes here

		//room name
	std::cout << " ---------- " << '\n';
	std::cout << "| Entryway |" << '\n';
	std::cout << " ----------" << '\n';

	std::cout << "EXAMPLE TEXT" << '\n';
tryAgain:
	std::cout << '\n';
	std::cout << "To go into the dining room, select option 1" << '\n';
	std::cout << "To enter the parlor, select option 2" << '\n';
	std::cout << "To take the stairs to the second floor, select option 3" << '\n';
	std::cout << "To leave through the front door, select option 4" << '\n';
	std::cout << '\n';
	std::cout << "Please select option 1, 2, 3, or 4" << '\n';

	char x{};


	std::cin >> x;
	std::cin.ignore(32767, '\n');

	switch (x)
	{
	case '1':
		roomDiningB2b();
		break;
	case '2':
		roomParlor();
		break;
	case '3':
		stairsEntranceUpB2b();
		break;
	case '4':
		//outside dead end
	default:
		goto tryAgain;
		break;
	}

}

*/