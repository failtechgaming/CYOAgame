#include <iostream>
#include <stdio.h>
#include "allRooms.h"
void ClearScreen();

/*
// RENAME FUNCTION
void roomBasementNorth()
{

	ClearScreen();

	//room name
	std::cout << " ------------------ " << '\n';
	std::cout << "| Basement (North) |" << '\n';
	std::cout << " ------------------" << '\n';

	// text for the room/encounter goes here

	std::cout << "EXAMPLE TEXT" << '\n';
tryAgain:
	std::cout << '\n';
	std::cout << "To take the stairs up to the first floor, select option 1" << '\n';
	std::cout << "To explore further into the basement, select option 2" << '\n';
	std::cout << '\n';
	std::cout << "Please select option 1 or 2" << '\n';

	char x{};
	

	std::cin >> x;
	std::cin.ignore(32767, '\n');

	switch (x)
	{
	case '1':
		stairsBasementUp();
		break;
	case '2':
		roomBasementSouth();
		break;
	default:
		goto tryAgain;
		break;
	}

}

void roomBasementNorthB2a()
{

	ClearScreen();

	//room name
	std::cout << " ------------------ " << '\n';
	std::cout << "| Basement (North) |" << '\n';
	std::cout << " ------------------" << '\n';

	// text for the room/encounter goes here

	std::cout << "As you enter the basement, the cold, damp air surrounds you. You find yourself" << '\n';
	std::cout << "in a small dirt room with nothing much of interest. The back wall is made of " << '\n';
	std::cout << "mortar and stone. Footprints in the dirt show recent activity." << '\n';


tryAgain:
	std::cout << '\n';
	std::cout << "To take the stairs up to the first floor, select option 1" << '\n';
	std::cout << "To explore further into the basement, select option 2" << '\n';
	std::cout << "To investigate the stone wall, select option 3" << '\n';
	std::cout << '\n';
	std::cout << "Please select option 1 or 2" << '\n';

	char x{};


	std::cin >> x;
	std::cin.ignore(32767, '\n');

	switch (x)
	{
	case '1':
		stairsBasementUp();
		break;
	case '2':
		roomBasementSouth();
		break;
	case '3':
		std::cout << "Looking at the wall, you notice some stones out of place. The trowel easily" << '\n';
		std::cout << "fits between the stones, and the mortar has not entirely set yet, allowing" << '\n';
		std::cout << "you to quickly remove a sizable section of the wall." << '\n';
		system("pause");
		ClearScreen();
		roomBasementNorthB2b();
		break;
	default:
		goto tryAgain;
		break;
	}

}

void roomBasementNorthB2b()
{
	//post stone wall removal
	ClearScreen();

	//room name
	std::cout << " ------------------ " << '\n';
	std::cout << "| Basement (North) |" << '\n';
	std::cout << " ------------------" << '\n';

	// text for the room/encounter goes here

	std::cout << "As you enter the basement, the cold, damp air surrounds you. You find yourself" << '\n';
	std::cout << "in a small dirt room with nothing much of interest. The back wall is made of " << '\n';
	std::cout << "mortar and stone. Footprints in the dirt show recent activity." << '\n';


tryAgain:
	std::cout << '\n';
	std::cout << "To take the stairs up to the first floor, select option 1" << '\n';
	std::cout << "To explore further into the basement, select option 2" << '\n';
	std::cout << "To step through the hole in the wall, select option 3" << '\n';
	std::cout << '\n';
	std::cout << "Please select option 1 or 2" << '\n';

	char x{};


	std::cin >> x;
	std::cin.ignore(32767, '\n');

	switch (x)
	{
	case '1':
		stairsBasementUp();
		break;
	case '2':
		roomBasementSouth();
		break;
	case '3':
		roomBasementSouthB2a();
		break;
	default:
		goto tryAgain;
		break;
	}

}

*/

void roomBasementNorthB1()
{

	ClearScreen();

	//room name
	std::cout << " ------------------ " << '\n';
	std::cout << "| Basement |" << '\n';
	std::cout << " ------------------" << '\n';

	// text for the room/encounter goes here

	std::cout << "The basement is comprised of dirt walls and floor, and is a largely open space with" << '\n';
	std::cout << "only a few items strewn around, including the coffins and a folding chair pulled up" << '\n';
	std::cout << "to the closed coffin in a makeshift table or desk. That coffin is littered with" << '\n';
	std::cout << "additional notes and scribblings. The open coffin rests precariously near the edge" << '\n';
	std::cout << "of the pit in the center of the room." << '\n';
tryAgain:
	std::cout << '\n';
	std::cout << "To investigate the open coffin, select option 1" << '\n';
	std::cout << "To read the notes, select option 2" << '\n';
	std::cout << '\n';
	std::cout << "Please select option 1 or 2" << '\n';

	char x{};


	std::cin >> x;
	std::cin.ignore(32767, '\n');

	switch (x)
	{
	case '1':
		gameovercoffinB1();
		break;
	case '2':
		std::cout << '\n';
		std::cout << "The notes you find scattered across the sealed coffin are similar in style and" << '\n';
		std::cout << "substance to the notes you originally found in the kitchen. However, the top-" << '\n';
		std::cout << "most loose paper you find has additional notes about the importance of a book." << '\n';
		std::cout << "And as you read, it dawns on you that it means THE book, the one that you found" << '\n';
		std::cout << "in the attic. It goes on to mention that if anything were to happen to this book," << '\n';
		std::cout << "then the whole ritual will be lost, and that no harm should come to the book." << '\n';
		std::cout << "..." << '\n';
		SysPause();
		std::cout << '\n';
		std::cout << "From what you can tell, the most recent notes on that same page indicate that the" << '\n';
		std::cout << "so-called ritual has already been started. The author indicates a quick schedule" << '\n';
		std::cout << "of events, including FIRST INCANTATION, timestamped right around when you got" << '\n';
		std::cout << "caught in the storm on your hike. The remaining notes on the schedule show two" << '\n';
		std::cout << "or three steps are yet to be invoked. Perhaps you should take this as your invite" << '\n';
		std::cout << "to stop the storm and finally escape this place." << '\n';
		SysPause();
		roomBasementNorthB2();

		break;
	default:
		goto tryAgain;
		break;
	}

}

void roomBasementNorthB2()
{

	ClearScreen();

	//room name
	std::cout << " ------------------ " << '\n';
	std::cout << "| Basement |" << '\n';
	std::cout << " ------------------" << '\n';

	// text for the room/encounter goes here

	std::cout << "Having read through the notes on the coffin, you find yourself at a decision" << '\n';
	std::cout << "to make - first, if you want to escape this place immediately, and second how you" << '\n';
	std::cout << "think you are going to accomplish that. As you think on this, your fingers absent-" << '\n';
	std::cout << "mindedly toy with the knife you took from the kitchen, and perhaps that gives you" << '\n';
	std::cout << "an idea on how to end this nightmare." << '\n';
tryAgain:
	std::cout << '\n';
	std::cout << "To use the knife on the book, select option 1" << '\n';
	std::cout << "To bury the book, select option 2" << '\n';
	std::cout << '\n';
	std::cout << "Please select option 1 or 2" << '\n';

	char x{};


	std::cin >> x;
	std::cin.ignore(32767, '\n');

	switch (x)
	{
	case '1':
		std::cout << '\n';
		std::cout << "Realizing it might be your chance to escape, you take the book and place it" << '\n';
		std::cout << "on the sealed coffin that you're sitting at. Gripping the knife you took, you" << '\n';
		std::cout << "plunge it into the cover, the knife tip barely piercing the soft leather cover" << '\n';
		std::cout << "far enough to actually damage the pages. As you lean into the knife and push it" << '\n';
		std::cout << "further into the book, black ink starts to spill from between the pages, running" << '\n';
		std::cout << "down the edges of the book and across the coffin." << '\n';
		std::cout << "..." << '\n';
		SysPause();
		std::cout << '\n';
		std::cout << "The sight of the ink causes you to react in a panic, and you use the knife to" << '\n';
		std::cout << "to toss the book into the open coffin. You hear it tumble against the walls" << '\n';
		std::cout << "and come to a stop. Grabbing the lid, you manage to push it the remaining distance" << '\n';
		std::cout << "to seal the vessel properly. And with a good shove with your foot, the whole thing" << '\n';
		std::cout << "tips over into the pit with a crash." << '\n';
		std::cout << "..." << '\n';
		SysPause();
		std::cout << '\n';
		std::cout << "Eyeing the shoves and spades, you make quick work of the pit with the displaced dirt" << '\n';
		std::cout << "and cover the coffin and fill the hole. As you tamp down the last batch of dirt, you" << '\n';
		std::cout << "realize that the sound of the storm against the house above you seems to have dissipated" << '\n';
		std::cout << "and you stand there, shovel in hand, in silence." << '\n';
		std::cout << "..." << '\n';
		SysPause(); 
		std::cout << '\n';
		std::cout << "Slowly, you make your way back up the stairs to the kitchen. Peeking out from the curtains" << '\n';
		std::cout << "around the windows above the sink, you see daylight. Pulling them aside, the yard behind the" << '\n';
		std::cout << "farm house glistens with the recent rain, but the clouds are breaking up and blue sky is now" << '\n';
		std::cout << "visible. Stepping through the back door, you take in a breath of fresh air, free from the" << '\n';
		std::cout << "storm and whatever secrets the house held. You easily find your trail again, hiking back to your" << '\n';
		std::cout << "campsite easily. You take little time in packing everything back into your car, and getting the" << '\n';
		std::cout << "hell out of here. You want to leave this place behind you, forever." << '\n';
		SysPause();
		gameoverwinB1();

		//gameovercoffinB1();
		break;
	case '2':
		std::cout << '\n';
		std::cout << "Standing up and tossing the book into the pit in the center of the room, you hear it hit" << '\n';
		std::cout << "the loose dirt at the bottom with a soft thud. Without wasting any time, you grab a shovel" << '\n';
		std::cout << "and start to heap the piled up dirt into the hole, slowly covering the tome resting at the" << '\n';
		std::cout << "bottom." << '\n';
		std::cout << "..." << '\n';
		SysPause();
		std::cout << '\n';
		std::cout << "Your muscles burn from the repeated movements of shoveling dirt back into the pit. After" << '\n';
		std::cout << "what feels like an hour or better, though probably only fifteen minutes, you're able to" << '\n';
		std::cout << "tamp down the last few shovel-blades full of dirt. Doing so doesn't quite bring the feeling" << '\n';
		std::cout << "of relief that you were looking for." << '\n';
		std::cout << "..." << '\n';
		SysPause();
		std::cout << '\n';
		std::cout << "Looking at the hastily filled dirt, you remember the knife you took from the kitchen," << '\n';
		std::cout << "still in your pocket after all this time. Taking it out and holding it, you swear you" << '\n';
		std::cout << "can see a faint glow coming from the blade in the darkness of the basement, but you don't" << '\n';
		std::cout << "know if that's the poor lighting in the room or your exhaustion. Regardless, you toss the" << '\n';
		std::cout << "knife onto the dirt pile, and sift some loose material around to cover it, giving it" << '\n';
		std::cout << "a good smack with the shovel to press the dirt into place." << '\n';
		std::cout << "..." << '\n';
		SysPause();
		std::cout << '\n';
		std::cout << "It is in this moment that you realize the storm you have been hearing in the background" << '\n';
		std::cout << "this whole time is now suddenly silent. No more rain against the windows, no thunder" << '\n';
		std::cout << "cracking in the distance, no wind in the trees. Perhaps it is simply a coincidence, or" << '\n';
		std::cout << "perhaps you did actually free yourself. You don't care how it happened, but instead" << '\n';
		std::cout << "take the oppertunity to leave while you can." << '\n';
		std::cout << "..." << '\n';
		SysPause();
		std::cout << '\n';
		std::cout << "Slowly, you make your way back up the stairs to the kitchen. Peeking out from the curtains" << '\n';
		std::cout << "around the windows above the sink, you see daylight. Pulling them aside, the yard behind the" << '\n';
		std::cout << "farm house glistens with the recent rain, but the clouds are breaking up and blue sky is now" << '\n';
		std::cout << "visible. Stepping through the back door, you take in a breath of fresh air, free from the" << '\n';
		std::cout << "storm and whatever secrets the house held. You easily find your trail again, hiking back to your" << '\n';
		std::cout << "campsite easily. You take little time in packing everything back into your car, and getting the" << '\n';
		std::cout << "hell out of here. You want to leave this place behind you, forever." << '\n';
		SysPause();
		gameoverwinB1();
		//I drink beer during work. This comment line is proof
		//I HAVE SO MANY POINTS
		break;
	default:
		goto tryAgain;
		break;
	}

}