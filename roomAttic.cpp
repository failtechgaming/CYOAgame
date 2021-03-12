#include <iostream>
#include <stdio.h>
#include "allRooms.h"

void ClearScreen();
/*

// RENAME FUNCTION
void roomAttic()
{

	ClearScreen();

	//room name
	std::cout << " ------- " << '\n';
	std::cout << "| Attic |" << '\n';
	std::cout << " -------" << '\n';

	// text for the room/encounter goes here

	std::cout << "EXAMPLE TEXT" << '\n';
tryAgain:
	std::cout << '\n';
	std::cout << "To take the stairs down, select option 1" << '\n';
	std::cout << "To go around front and knock first, select option 2" << '\n';
	std::cout << '\n';
	std::cout << "Please select option 1 or 2" << '\n';

	char x{};
	

	std::cin >> x;
	std::cin.ignore(32767, '\n');

	switch (x)
	{
	case '1':
		stairsAtticDown();
		break;
	case '2':
		std::cout << "You chose option 2" << '\n'; //enter room function here
		break;
	default:
		goto tryAgain;
		break;
	}

}
*/
void roomAtticB1()
{

	ClearScreen();

	//room name
	std::cout << " ------- " << '\n';
	std::cout << "| Attic |" << '\n';
	std::cout << " -------" << '\n';

	// text for the room/encounter goes here

	std::cout << "At the top of the stairs leading up to the attic, you find what appears to be a hastily created" << '\n';
	std::cout << "reading nook, as evidence from the stack of books next to a wooden crate of a table, with an old," << '\n';
	std::cout << "worn chair in front of it. Of note is one of the books, open on the wooden crate, which at a glance" << '\n';
	std::cout << "appears to reference some kind of sorcery. However, you think you hear noises from down the stairs." << '\n';
	std::cout << "Perhaps that's the help you need to weather this storm you were lost in." << '\n';
tryAgain:
	std::cout << '\n';
	std::cout << "To sit and read the book, select option 1" << '\n';
	std::cout << "To take the book and head downstairs, select option 2" << '\n';
	std::cout << '\n';
	std::cout << "Please select option 1 or 2" << '\n';

	char x{};


	std::cin >> x;
	std::cin.ignore(32767, '\n');

	switch (x)
	{
	case '1':
		std::cout << '\n';
		std::cout << "You sit down on the well worn armchair next to the wooden crate. The book, while scrawled in" << '\n';
		std::cout << "in a heavy hand, is mostly legible, though it's apparent that the author was losing hold of" << '\n';
		std::cout << "whatever faculties they still had. The page makes reference to a ritual centering around" << '\n';
		std::cout << "a series of incantations taken while in the presense of a freshly dead body. From what you" << '\n';
		std::cout << "can make out, the intent is to raise the body back to life, though the author makes note that" << '\n';
		std::cout << "some quote unquote 'changes' may have occurred in the personality of the individual who had" << '\n';
		std::cout << "been clinically dead previously." << '\n';
		std::cout << "..." << '\n';
		SysPause();
		std::cout << '\n';
		std::cout << "Flipping a few pages forwards and backwards in the book from where you started, you see the" << '\n';
		std::cout << "the other pages in the book are filled with similar scrawlings, speaking of things like magic," << '\n';
		std::cout << "but spelled with a 'k' so you know the author was certainly crazy. On some pages there appear" << '\n';
		std::cout << "to be two sets of handwriting, almost as though one set is laying out the rules and the second" << '\n';
		std::cout << "is making notes in reference to the first, or giving progress reports on their own attempts at" << '\n';
		std::cout << "such things. On one, a few pages before the one the book was open to, you find mention of a freshly" << '\n';
		std::cout << "dead body stolen from a potter's field nearby, and a note from the second author about preparing" << '\n';
		std::cout << "a grave in the basement for the ritual to take place in." << '\n';
		std::cout << "..." << '\n';
		SysPause();
		std::cout << '\n';
		std::cout << "Closing the book in front of you, you realize you no longer hear any of the commotion you thought" << '\n';
		std::cout << "you heard downstairs. You pocket the book and, fearing someone might come looking for it, you place" << '\n';
		std::cout << "another book from the stack, open to a random page, in its place. You quietly head down the stairs from" << '\n';
		std::cout << "the attic, closing doors as you go, until eventually you find yourself back in the kitchen facing the" << '\n';
		std::cout << "basement stairs." << '\n';
		SysPause();
		//ADD FUNCTION TO RETURN TO KITCHEN/BASEMENT
		roomKitchenB2();
		break;
	case '2':
		gameoveratticB1();
		//roomAtticB1a();
		break;
	default:
		goto tryAgain;
		break;
	}

}

void roomAtticA1()
{

	ClearScreen();

	//room name
	std::cout << " ------- " << '\n';
	std::cout << "| Attic |" << '\n';
	std::cout << " -------" << '\n';

	// text for the room/encounter goes here

	std::cout << "As you climb the final stairs up to the attic, a light switch at the top illuminates a handful of bare bulbs," << '\n';
	std::cout << "revealing a sparse area that could barely be defined as a room. Within it, you find a small shrine assembled" << '\n';
	std::cout << "on a desk, with a battered chair nearby. The shrine itself looks hastily made, with human-esque figurines" << '\n';
	std::cout << "created out of sticks and twine, set around a small wooden, carved box. The figurines are facing the box," << '\n';
	std::cout << "though you can not otherwise discern any meaning from the setup. Above the figurines and box hang another" << '\n';
	std::cout << "item created from the same sticks and twine, but it just looks like a jumble of twigs. You cannot determine" << '\n';
	std::cout << "what it is." << '\n';
	std::cout << "..." << '\n';
	SysPause();
	std::cout << '\n';
	std::cout << "Next to the desk, there are more notes and papers, similar to the ones that were littering the study, though" << '\n';
	std::cout << "this time they're assembled in a little more of a tidy fashion. The small stack sits next to a couple boxes" << '\n';
	std::cout << "of matches, along with what appears to be further fuel for a bonfire - larger sticks and even a little lighter" << '\n';
	std::cout << "fluid." << '\n';
tryAgain:
	std::cout << '\n';
	std::cout << "To sit at the desk, select option 1" << '\n';
	std::cout << "To investigate the matches, select option 2" << '\n';
	std::cout << '\n';
	std::cout << "Please select option 1 or 2" << '\n';

	char x{};


	std::cin >> x;
	std::cin.ignore(32767, '\n');

	switch (x)
	{
	case '1':
		gameoveratticA1();
		break;
	case '2':
		std::cout << "Leaning down to look at the boxes of matches, you find they are largely still full capacity, with only one" << '\n'; //enter room function here
		std::cout << "box having been opened, the other remaining sealed. The papers nearby look just as frantically written as" << '\n';
		std::cout << "the ones you saw below, but do not give any indication as to the meaning of this small shrine you've stumbled" << '\n';
		std::cout << "upon. Tapping on the side of the lighter fluid can, you hear the liquid inside is still half or more full," << '\n';
		std::cout << "though the odor of the fluid makes you think it was recently used." << '\n';
		std::cout << "..." << '\n';
		SysPause();
		std::cout << '\n';
		std::cout << "As you contemplate the items in front of you, you remember the scribbled notes from the study, where the" << '\n';
		std::cout << "author repeatedly wrote about fire, though the context was vague. But a pile of fuel and a can of lighter" << '\n';
		std::cout << "fluid couldn't be much more context if it tried. Picking up the can, you pop the cap off and start to spray" << '\n';
		std::cout << "it on the shrine. The odor of the fluid intensifies and before you know it, the whole desk and surrounding" << '\n';
		std::cout << "area are doused in lighter fluid. You swear you don't know how that happened. But now it's only a matter" << '\n';
		std::cout << "of lighting a match to finish it off." << '\n';
		std::cout << "..." << '\n';
		SysPause();
		std::cout << '\n';
		std::cout << "You pick up a box of matches, slowly removing one and holding it in your fingertips. The bright red match-" << '\n';
		std::cout << "head glides quickly across the unused strike-strip on the side of the box, and before you know it, you've" << '\n';
		std::cout << "conjured flame. You stare into the tiny blaze for a moment, watching it dance and consume the stick of the" << '\n';
		std::cout << "match before you start to feel its heat on your fingers, causing you to flick it, almost nonchalantly onto" << '\n';
		std::cout << "the desk. Seemingly before the match makes contact with the wood, the whole thing erupts, the lighter fluid" << '\n';
		std::cout << "going up without delay. You gaze at the scene only for a moment before the realization sets in, and you" << '\n';
		std::cout << "turn around and bolt down the stairs." << '\n';
		std::cout << "..." << '\n';
		SysPause();
		std::cout << '\n';
		std::cout << "Running back down through the house, you retrace your steps until you've burst your way through the back door," << '\n';
		std::cout << "exiting the house the same way you entered. You notice, though, upon breathing fresh air, that the storm seems" << '\n';
		std::cout << "to have abated during your time inside. The rain has stop, the thunder quieted, and the clouds are now parting" << '\n';
		std::cout << "giving you a front and center view of the house, its flames moving down from the attic to other rooms, the fire" << '\n';
		std::cout << "poking out from various second-story windows. Standing in the cool breeze, you are now free from the storm and" << '\n';
		std::cout << "whatever secrets the house held. You easily find your trail again, hiking back to your campsite easily. You" << '\n';
		std::cout << "take little time in packing everything back into your car, and getting the hell out of here. You want to leave" << '\n';
		std::cout << "this place behind you, forever." << '\n';
		SysPause();
		gameoverwinB1();
		//FINISH THIS SCENE
		break;
	default:
		goto tryAgain;
		break;
	}

}
/*
void roomAtticB1a()
{

	ClearScreen();

	//room name
	std::cout << " ------- " << '\n';
	std::cout << "| Attic |" << '\n';
	std::cout << " -------" << '\n';

	// POST TOOL-LOOKING, AWARE OF DOOR

	std::cout << "You enter the attic, a bare bulb illuminating the cramped quarters. You can't completely stand up" << '\n';
	std::cout << "as you hit your head on the pitched roof. Strewn about the floor of the attic is a number of" << '\n';
	std::cout << "shovels and pick axes, all caked with dirt and mud. A small door is set into the far wall." << '\n';
tryAgain:
	std::cout << '\n';
	std::cout << "To take the stairs down, select option 1" << '\n';
	std::cout << "To open the small door, select option 2" << '\n';
	std::cout << "To take the trowel, select option 3" << '\n';
	std::cout << "Please select option 1 or 2" << '\n';

	char x{};


	std::cin >> x;
	std::cin.ignore(32767, '\n');

	switch (x)
	{
	case '1':
		stairsAtticDown();
		break;
	case '2':
		std::cout << "The small door appears to be locked with a padlock. As old as it looks, the padlock does not give." << '\n'; //enter room function here
		system("pause");
		ClearScreen();
		roomAtticB1b();
		break;
	case '3':
		std::cout << "You take the small trowel and pocket it." << '\n';
		system("pause");
		ClearScreen();
		roomAtticB1c();
		break;

	default:
		goto tryAgain;
		break;
	}

}

void roomAtticB1b()
{

	ClearScreen();

	//room name
	std::cout << " ------- " << '\n';
	std::cout << "| Attic |" << '\n';
	std::cout << " -------" << '\n';

	// POST TOOL-LOOKING, AWARE OF DOOR (locked)
	// ADD LINE ABOUT TROWEL

	std::cout << "You enter the attic, a bare bulb illuminating the cramped quarters. You can't completely stand up" << '\n';
	std::cout << "as you hit your head on the pitched roof. Strewn about the floor of the attic is a number of" << '\n';
	std::cout << "shovels and pick axes, all caked with dirt and mud. A small locked door is set into the far wall." << '\n';
tryAgain:
	std::cout << '\n';
	std::cout << "To take the stairs down, select option 1" << '\n';
	std::cout << "To open the small door, select option 2" << '\n';
	std::cout << "To take the trowel, select option 3" << '\n';
	std::cout << "Please select option 1 or 2" << '\n';

	char x{};


	std::cin >> x;
	std::cin.ignore(32767, '\n');

	switch (x)
	{
	case '1':
		stairsAtticDown();
		break;
	case '2':
		std::cout << "The small door appears to be locked with a padlock. As old as it looks, the padlock does not give." << '\n'; //enter room function here
		system("pause");
		ClearScreen();
		roomAtticB1a();
		break;
	case '3':
		std::cout << "You take the small trowel and pocket it." << '\n';
		system("pause");
		ClearScreen();
		roomAtticB1c();
		break;
	default:
		goto tryAgain;
		break;
	}

}

void roomAtticB1c()
{

	ClearScreen();

	//room name
	std::cout << " ------- " << '\n';
	std::cout << "| Attic |" << '\n';
	std::cout << " -------" << '\n';

	// POST TOOL-LOOKING, AWARE OF DOOR (locked)
	// HAVE TROWEL
	// ADDED PADLOCK BREAK

	std::cout << "You enter the attic, a bare bulb illuminating the cramped quarters. You can't completely stand up" << '\n';
	std::cout << "as you hit your head on the pitched roof. Strewn about the floor of the attic is a number of" << '\n';
	std::cout << "shovels and pick axes, all caked with dirt and mud. A small locked door is set into the far wall." << '\n';
tryAgain:
	std::cout << '\n';
	std::cout << "To take the stairs down, select option 1" << '\n';
	std::cout << "To open the small door, select option 2" << '\n';
	std::cout << "To force the padlock with the trowel, select option 3" << '\n';
	std::cout << "Please select option 1 or 2" << '\n';

	char x{};


	std::cin >> x;
	std::cin.ignore(32767, '\n');

	switch (x)
	{
	case '1':
		stairsAtticDown();
		break;
	case '2':
		std::cout << "The small door appears to be locked with a padlock. As old as it looks, the padlock does not give." << '\n'; //enter room function here
		system("pause");
		ClearScreen();
		roomAtticB1a();
		break;
	case '3':
		std::cout << "The padlock shank snaps from the pressure applied with the trowel and the lock slides off the latch." << '\n';
		system("pause");
		ClearScreen();
		roomAtticB1d();
		break;
	default:
		goto tryAgain;
		break;
	}

}

void roomAtticB1d()
{

	ClearScreen();

	//room name
	std::cout << " ------------- " << '\n';
	std::cout << "| Attic (Small Room) |" << '\n';
	std::cout << " -------------" << '\n';

	// POST TOOL-LOOKING, AWARE OF DOOR (locked)
	// HAVE TROWEL
	// ADDED PADLOCK BREAK

	std::cout << "The small room in the back of the attic is full of stacks of paper, covered in layers of dust." << '\n';
	std::cout << "The stacks of paper include newspaper clippings of unsolved murders and ADD TEXT HERE " << '\n';
	//std::cout << "shovels and pick axes, all caked with dirt and mud. A small locked door is set into the far wall." << '\n';
tryAgain:
	std::cout << '\n';
	std::cout << "To read the top article, select option 1" << '\n';
	std::cout << "To leave the small room, select option 2" << '\n';
		std::cout << "Please select option 1 or 2" << '\n';

	char x{};


	std::cin >> x;
	std::cin.ignore(32767, '\n');

	switch (x)
	{
	case '1':
		ClearScreen();
		std::cout << "HERE IS THE TEXT OF THE NEWSPAPER CLIPPING" << '\n';
		system("pause");
		ClearScreen();
		roomAtticB1d();
		break;
	case '2':
		std::cout << "You return to the main attic room." << '\n'; //enter room function here
		system("pause");
		ClearScreen();
		roomAtticB1e();
		break;
	default:
		goto tryAgain;
		break;
	}

}

void roomAtticB1e()
{

	ClearScreen();

	//room name
	std::cout << " ------- " << '\n';
	std::cout << "| Attic |" << '\n';
	std::cout << " -------" << '\n';

	// POST LOOKING IN SMALL ROOM

	std::cout << "You enter the attic, a bare bulb illuminating the cramped quarters. You can't completely stand up" << '\n';
	std::cout << "as you hit your head on the pitched roof. Strewn about the floor of the attic is a number of" << '\n';
	std::cout << "shovels and pick axes, all caked with dirt and mud. A small door is set into the far wall that you just came out of." << '\n';
tryAgain:
	std::cout << '\n';
	std::cout << "To take the stairs down, select option 1" << '\n';
	std::cout << "To enter the small door, select option 2" << '\n';
	std::cout << "Please select option 1 or 2" << '\n';

	char x{};


	std::cin >> x;
	std::cin.ignore(32767, '\n');

	switch (x)
	{
	case '1':
		stairsAtticDownB1a();
		break;
	case '2':
		std::cout << "You hunch over to fit through the small door." << '\n'; //enter room function here
		system("pause");
		ClearScreen();
		roomAtticB1d();
		break;
	default:
		goto tryAgain;
		break;
	}

}

void roomAtticB1f()
{

	ClearScreen();

	//room name
	std::cout << " ------- " << '\n';
	std::cout << "| Attic |" << '\n';
	std::cout << " -------" << '\n';

	// POST LOOKING IN SMALL ROOM

	std::cout << "You enter the attic, a bare bulb illuminating the cramped quarters. You can't completely stand up" << '\n';
	std::cout << "as you hit your head on the pitched roof. Strewn about the floor of the attic is a number of" << '\n';
	std::cout << "shovels and pick axes, all caked with dirt and mud. A small door is set into the far wall that you just came out of." << '\n';
tryAgain:
	std::cout << '\n';
	std::cout << "To take the stairs down, select option 1" << '\n';
	std::cout << "To enter the small door, select option 2" << '\n';
	std::cout << "Please select option 1 or 2" << '\n';

	char x{};


	std::cin >> x;
	std::cin.ignore(32767, '\n');

	switch (x)
	{
	case '1':
		stairsAtticDownB2b();
		break;
	case '2':
		std::cout << "You hunch over to fit through the small door." << '\n'; //enter room function here
		system("pause");
		ClearScreen();
		roomAtticB1d();
		break;
	default:
		goto tryAgain;
		break;
	}

}

*/