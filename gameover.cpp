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
	std::cout << '\n';
	std::cout << "***" << '\n';
	std::cout << "This choice is not yet coded. Please stay tuned, and try a different" << '\n';
	std::cout << "option in the meantime! Thanks for play-testing!" << '\n';
	std::cout << "***" << '\n';
	//std::cout << '\n';

}

void gameover()
{
	ClearScreen();

	std::cout << "GAME OVER" << '\n';
	std::cout << '\n';
	system("pause");
	std::cout << '\n';
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

	std::cout << "As you open the door to the basement and descend down the stairs, the door" << '\n';
	std::cout << "shuts behind you and the stairs are swallowed by the darkness. This causes you" << '\n';
	std::cout << "to lose your footing and tumble painfully down the rest of the stairs, eventually" << '\n';
	std::cout << "coming to a halt on a cold, damp, dirt floor. Something in your leg feels broken," << '\n';
	std::cout << "but as much as you try to call for help, no one comes. You don't know how much time" << '\n';
	std::cout << "passes before you lose consciousness." << '\n';
	std::cout << '\n';
	std::cout << "This is the end of the adventure for you." << '\n';
	std::cout << '\n';

	//bad wolf

	std::cout << "GAME OVER" << '\n';
	std::cout << '\n';
	system("pause");
	std::cout << '\n';
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

	std::cout << "As you open the door to the basement and descend, you finally come across" << '\n';
	std::cout << "the source of the noise you thought you heard while you were in the attic. You" << '\n';
	std::cout << "see a middle aged man hunched over a pit in the dirt floor of the basement. As" << '\n';
	std::cout << "you place your weight on a loose step, it squeaks under you and catches his" << '\n';
	std::cout << "attention. Turning to you, his face is a mixture of surprise and anger." << '\n';
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
	std::cout << '\n';
	system("pause");
	std::cout << '\n';
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

void gameovercoffinB1()
{
	ClearScreen();

	std::cout << "As you move to investigate the coffin, it is almost as though something draws you in" << '\n';
	std::cout << "and once you reach the side, you find yourself climbing in. You easily fit inside," << '\n';
	std::cout << "and as you start to pull the lid over yourself, it moves easily, almost like it is" << '\n';
	std::cout << "being helped somehow. You remark to yourself, in your thoughts, that the inside of the" << '\n';
	std::cout << "lid has an intricate design for something that no one is ever going to see, but the irony" << '\n';
	std::cout << "is lost on you as the light is extinguished from the lead sealing shut." << '\n';
	std::cout << "..." << '\n';
	SysPause();
	std::cout << '\n';
	std::cout << "After what feels like hours in the silent darkness, but what is more likely only minutes," << '\n';
	std::cout << "you feel a heavy weight against one side of the coffin, and you sense the whole thing going" << '\n';
	std::cout << "off balance quickly. The pit, which you're sure you just fell into, is not too terribly deep" << '\n';
	std::cout << "but it doesn't help that you are stuck in a box on its side and were bounced around as it" << '\n';
	std::cout << "landed. While you may only have a couple of scrapes or bruises, the problem still remains" << '\n';
	std::cout << "that you cannot open the lid or otherwise exit this ride. As panic sets in, you realize you" << '\n';
	std::cout << "will not escape. Your screams and pleas are muffled first by the coffin itself, then the pit," << '\n';
	std::cout << "the basement, the house, and finally the storm outside. No one hears you." << '\n';
	std::cout << '\n';
	std::cout << "This is the end of the adventure for you." << '\n';
	std::cout << '\n';

	std::cout << "GAME OVER" << '\n';
	std::cout << '\n';
	system("pause");
	std::cout << '\n';
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
	std::cout << "expire on a dingy linoleum floor in a house you trespassed in." << '\n';
	SysPause();
	std::cout << '\n';
	std::cout << "This is the end of the adventure for you." << '\n';
	std::cout << '\n';


	std::cout << "GAME OVER" << '\n';
	std::cout << '\n';
	system("pause");
	std::cout << '\n';
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
	std::cout << "as you quickly lose your sense of direction in the harsh rain and minimal" << '\n';
	std::cout << "visibility. You should take solace, though, as the muddy embankment you slipped" << '\n';
	std::cout << "down and injured yourself on was only about half a mile from the house and thus" << '\n';
	std::cout << "your body was easily found by the search party." << '\n';
	std::cout << '\n';
	std::cout << "This is the end of the adventure for you." << '\n';
	std::cout << '\n';


	std::cout << "GAME OVER" << '\n';
	std::cout << '\n';

	system("pause");
	std::cout << '\n';
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

void gameoverentranceA1()
{
	ClearScreen();

	std::cout << "As you head up the imposing staircase to the second floor, the worn boards creak" << '\n';
	std::cout << "slightly under your feet, and the railing is a smooth polish under your palm. As" << '\n';
	std::cout << "you step off the stairs into the second floor hallway, you see someone slip through" << '\n';
	std::cout << "a door on the other end of one of the bedrooms. Following the figure, you make it to" << '\n';
	std::cout << "the far door as it opens again, the middle age man appearing before you, holding a" << '\n';
	std::cout << "knife. He greets you, though greeting might be a generous term for the words he sneered" << '\n';
	std::cout << "at you. 'Welcome to my humble home,' words that have never sounded so sinister." << '\n';
	std::cout << "..." << '\n';
	SysPause();
	std::cout << '\n';
	std::cout << "He steps to you, forcing you to move back into the room you crossed to get here. The room" << '\n';
	std::cout << "is littered with books, and you almost trip over one, throwing your arms out for balance" << '\n';
	std::cout << "and catching yourself on the bed. 'Any old slip can be mighty dangerous, in a storm like" << '\n';
	std::cout << "this,' the man says, closing distance with you, knife still in hand. He reaches out with" << '\n';
	std::cout << "his open hand to help you on your feet, but as you make the mistake to accept his generosity," << '\n';
	std::cout << "you see the other hand move swiftly, the knife burying between your ribs. The last thing you" << '\n';
	std::cout << "see is the man's toothy smile." << '\n';
	SysPause();
	std::cout << '\n';
	std::cout << "This is the end of the adventure for you." << '\n';
	std::cout << '\n';


	std::cout << "GAME OVER" << '\n';
	std::cout << '\n';

	system("pause");
	std::cout << '\n';
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

void gameoverkitchenA1()
{
	ClearScreen();

	std::cout << "As you sit down to read the notes at the kitchen table, you find yourself mesmerized by what" << '\n';
	std::cout << "you are reading. The notes talk disjointedly about an attempted summoning of some kind of power," << '\n';
	std::cout << "a recently dead body excavated from a potter's field, and even about a knife that is supposed" << '\n';
	std::cout << "to be central to the whole process. As you read further down the stack of papers, it becomes" << '\n';
	std::cout << "evident that the author was more of a skeptic as he began to write, and more of a convert as" << '\n';
	std::cout << "time went on, indicated by the notes at the top of the pile." << '\n';
	std::cout << "..." << '\n';
	SysPause();
	std::cout << '\n';
	std::cout << "Lost in the reading, you fail to notice when the door slowly opens and a figure steps through" << '\n';
	std::cout << "into the kitchen. It is only when you realize that the lighting has changed as you try and read" << '\n';
	std::cout << "yet another scrawled page. The prevalent shadow on the page indicates to you that you are not" << '\n';
	std::cout << "alone. Twisting in your seat, you come face to torso with a middle age man, standing uncomfortably" << '\n';
	std::cout << "close, and gripping a knife in one hand. The knife looks worn and shoddy, but dangerous all the same." << '\n';
	std::cout << "..." << '\n';
	SysPause();
	std::cout << '\n';
	std::cout << "Attempting to stand up, the man forcefully puts his hand on your shoulder, keeping you in a sitting" << '\n';
	std::cout << "position. 'Didn't think we'd get any more guests,' he says, almost as though he's talking to himself." << '\n';
	std::cout << "He holds you down, and with his other hand, brings the knife over to you. 'Just what do you think" << '\n';
	std::cout << "you're doing here?' His face doesn't look like it's waiting for an answer. Regardless of the" << '\n';
	std::cout << "reason you're about to give, his hand, holding the knife tight, plunges into your upper chest and" << '\n';
	std::cout << "digs deep, mortally wounding you in a single blow. You no longer can stand, the blood pouring from" << '\n';
	std::cout << "your chest, and as everything goes dark, you simply hear a menacing chuckle." << '\n';
	SysPause();
	std::cout << '\n';
	std::cout << "This is the end of the adventure for you." << '\n';
	std::cout << '\n';
	std::cout << "GAME OVER" << '\n';
	std::cout << '\n';
	system("pause");
	std::cout << '\n';
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

void gameoverbasementA1()
{
	ClearScreen();
	//add narration, then clear screen and drop amontillado
	std::cout << "As you approach the far wall, you see some of the stones have only been set in place, and are not" << '\n';
	std::cout << "yet cemented down. They're fairly loose- they wouldn't come crashing down on their own but you are" << '\n';
	std::cout << "able to easily slip them out of the wall. Doing so reveals a small alcove, the contents of which" << '\n';
	std::cout << "are dark and hard to discern. The space within the wall appears just large enough to step into." << '\n';
	std::cout << "..." << '\n';

	SysPause();
	std::cout << '\n';
	std::cout << "After moving enough stones so that you can at least hunch your way into the space behind the wall," << '\n';
	std::cout << "you find yourself in almost complete darkness. Little light pours in from where the stones are missing," << '\n';
	std::cout << "illuminating mostly things below your shins. You can tell the rest of the walls in this space are smooth" << '\n';
	std::cout << "and appear to be the actual wall, similar to the rest of the basement. But you also feel some cold metal" << '\n';
	std::cout << "lodged into the back wall, and trying to determine what it is, you hear it clink as you move it." << '\n';
	std::cout << "..." << '\n';
	SysPause();
	std::cout << '\n';
	std::cout << "As you're trying to piece together what this item might be, you hear a shuffling from the basement proper." << '\n';
	std::cout << "Calling out, you don't get any response. You instead hear movement around the pile of tools, and even start" << '\n';
	std::cout << "to hear the tools themselves as though they're being picked up and readied. Calling out again gets only" << '\n';
	std::cout << "a hurried shuffling of a response. Starting to panic, you try to contort your body to fit back through the" << '\n';
	std::cout << "opening in the wall again, but as you start to double over, a darkness covers the opening. You see stones" << '\n';
	std::cout << "pushed back into their original locations, and you hear the sound of metal scraping on rock, leaving a " << '\n';
	std::cout << "sickening feeling in your stomach. You start to realize what's happening. And no matter how much you shout," << '\n';
	std::cout << "you only hear the sound of mason-work from the other side of the wall. After a bit of time, even that stops," << '\n';
	std::cout << "and you're left with only silence. You're startled when a voice calls out, long after you thought it had left," << '\n';
	std::cout << "with only one line spoken." << '\n';
	std::cout << "..." << '\n';
	SysPause();
	std::cout << '\n';
	std::cout << "..." << '\n';
	std::cout << "Yes. For the love of God." << '\n';
	std::cout << "..." << '\n';
	SysPause();
	std::cout << '\n';
	std::cout << "This is the end of the adventure for you." << '\n';
	std::cout << '\n';


	std::cout << "GAME OVER" << '\n';
	std::cout << '\n';

	system("pause");
	std::cout << '\n';
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

void gameoverwinB1()
{
	ClearScreen();
	std::cout << " --------- " << '\n';
	std::cout << "| The End |" << '\n';
	std::cout << " ---------" << '\n';
	std::cout << '\n';
	std::cout << '\n';
	std::cout << "You successfully escaped the house. You are free, but you will always" << '\n';
	std::cout << "wonder if there is something in that place that you missed. Something" << '\n';
	std::cout << "that would have made everything make sense. Something tugging in the" << '\n';
	std::cout << "back of your mind." << '\n';
	std::cout << '\n';
	std::cout << '\n';

	std::cout << "GAME OVER" << '\n';

	std::cout << '\n';
	std::cout << '\n';

	system("pause");

	std::cout << "Would you like to play again? Y/N" << '\n';

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

void gameoverstudyA1()
{
	ClearScreen();

	std::cout << "You sit down at the desk, collecting papers off the chair to make room. You start to rifle through them" << '\n';
	std::cout << "looking for anything of note or interest. While most of the scribbles appear to be just ramblings, " << '\n';
	std::cout << "you do find mentions of a dead body, though nothing concrete, like an obituary or death certificate." << '\n';
	std::cout << "Instead, it only makes passing references to a potter's field nearby, and you see what you think are" << '\n';
	std::cout << "indications that this is not the first attempt at scavenging a freshly dead body." << '\n';
	std::cout << "..." << '\n';
	SysPause();
	std::cout << '\n'; 
	std::cout << "As you continue to flip through the papers, it feels like they are crowding your peripheral vision," << '\n';
	std::cout << "the stack of notes that you set aside to read next growing higher and higher. But it's not just the" << '\n';
	std::cout << "ones that you want to read, it seems like the layer of papers strewn about the room gets deeper" << '\n';
	std::cout << "and deeper. You swear, not even mere minutes ago, you could have seen the stairs out the door from" << '\n';
	std::cout << "where you were sitting. But now, you only see parchment. " << '\n';
	std::cout << "..." << '\n';
	SysPause();
	std::cout << '\n';
	std::cout << "It's not long before you get the sinking feeling in your stomach. You don't normally suffer from" << '\n';
	std::cout << "claustrophobia, but all of a sudden you feel trapped in this room. The room itself isn't exactly" << '\n';
	std::cout << "large, but if this was your room, you wouldn't complain about living in a sardine can. The feeling" << '\n';
	std::cout << "you're getting now, though, is that you barely have any space to breath. You start shoving papers" << '\n';
	std::cout << "away, trying to give yourself more room, but the feeling is only getting worse. Before you know it," << '\n';
	std::cout << "you find yourself trying to keep your head above the piles of paper. But you can hold out only so long" << '\n';
	std::cout << "before they overtake you and you're lost in a sea of white sheets." << '\n';
	std::cout << '\n';
	SysPause();
	std::cout << '\n';
	std::cout << '\n';
	std::cout << "This is the end of the adventure for you." << '\n';
	std::cout << '\n';
	std::cout << "GAME OVER" << '\n';
	std::cout << '\n';
	system("pause");
	std::cout << '\n';
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

void gameoveratticA1()
{
	ClearScreen();

	std::cout << "Sitting down at the desk, you lean in to get a better look at the shrine. The craftsmanship on the figurines" << '\n';
	std::cout << "is certainly crude, but the work done on the carved box looks much more professional. The box is somewhat" << '\n';
	std::cout << "oblong in shape, about six inches long, with an ornate design on the top side of it. The design-work looks" << '\n';
	std::cout << "indicative of an entombment motif with an elaborate central flame icon." << '\n';
	std::cout << "..." << '\n';
	SysPause();
	std::cout << '\n';
	std::cout << "Running your fingers over the carving on the wooden box, you get a chill in your spine as you pass over the" << '\n';
	std::cout << "flame in the center of the design. As you reach the outer edge of the box, you find that there is a seam in" << '\n';
	std::cout << "the wood where two pieces were joined. Picking it up, it certainly feels heavier than you were expecting." << '\n';
	std::cout << "But this allows you to flip it over and take a better look at the seam." << '\n';
	std::cout << "..." << '\n';
	SysPause();
	std::cout << '\n';
	std::cout << "You remember something you picked up earlier that might help - you grab the knife out of your pocket. It's" << '\n';
	std::cout << "still warm to the touch, and gets hotter as you bring it closer to the box. You're able to withstand the" << '\n';
	std::cout << "heat as you work the tip of the knife into the thin joint and with a forceful twist, pop open the lid." << '\n';
	std::cout << "Setting the box back down, you're able to fully remove the lid from the device. Inside, you find a small" << '\n';
	std::cout << "glass vial, which inside is a thick red liquid. You bring it close to your face to further examine, but" << '\n';
	std::cout << "as you peer into the inky depths, you hear a sharp noise behind you, causing you to drop the vial." << '\n';
	std::cout << "..." << '\n';
	std::cout << '\n';
	SysPause();
	std::cout << '\n';
	std::cout << "You realize the sound you heard was that of the door to the attic slamming shut. Looking behind you to" << '\n';
	std::cout << "the source of the sound, you hear footsteps ascending. But that's a lesser worry, as, turning back around" << '\n';
	std::cout << "to the desk you find it is now on fire, the figurines engulfed in the flames. Jumping up from the chair," << '\n';
	std::cout << "the source of the footsteps has now arrived at the top of the stairs - an older gentleman, pointing at" << '\n';
	std::cout << "the on-fire desk, and shouting that this is all your fault. And in a way, he's right. However, he does" << '\n';
	std::cout << "nothing immediately to remedy the fire growing more and more out of control. Instead, he lunges at you" << '\n';
	std::cout << "and grabs you by the shoulders, standing between you and the door. As much as you fight it, he forces you" << '\n';
	std::cout << "backwards, causing you to lose your footing. The two of you tumble into the desk, pieces of which explode" << '\n';
	std::cout << "around the room, sending lit fragments throughout the attic. The old wood of the house catches light" << '\n';
	std::cout << "quickly, and the entire area is set ablaze. The man is either unaware or unconcerned with this new" << '\n';
	std::cout << "development, as he holds you firmly to the floor as the room fills with smoke, shortly before you" << '\n';
	std::cout << "lose consciousness." << '\n';
	std::cout << '\n';
	std::cout << '\n';
	std::cout << "This is the end of the adventure for you." << '\n';
	std::cout << '\n';
	std::cout << "GAME OVER" << '\n';
	std::cout << '\n';
	system("pause");
	std::cout << '\n';
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