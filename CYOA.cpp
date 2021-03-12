// CYOA.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "roomTemplate.h"
#include "allRooms.h"

int main();

void ClearScreen()
{
    int n;
    for (n = 0; n < 3; n++)
        printf("\n\n\n\n\n\n\n\n\n\n");
}

void SysPause()
{
    system("pause");
}

void HowTo()
{
    ClearScreen();
    std::cout << "Do not read the game code from beginning to end. This game contains many different " << '\n';
    std::cout << "adventures you can go on as you journey through a haunted house. From time to time as you play," << '\n';
    std::cout << "you will be asked to make a choice. Your choice may lead to success or disaster! The adventures," << '\n';
    std::cout << "you take are a result of your choice. You are responsible because you choose! After you make," << '\n';
    std::cout << "your choice, the game will tell you what happens next. Remember -- you cannot go back!" << '\n';
    std::cout << "Think carefully before you make a move! One mistake can be your last - or it may be the key" << '\n';
    std::cout << "to your survival!" << '\n';

    system("pause");

    main();
  
}

void Credits()
{
    ClearScreen();
    //std::cout << "Random Dungeons and Dragons Character Generator, 5th edition\n";
    std::cout << "Copyright 2020-2021 Failtech Games\n";
    std::cout << '\n';
    std::cout << "THE BEER - WARE LICENSE (Revision 42):\n";
    std::cout << "<codinginquarantine@gmail.com> wrote this game. As long as you retain this notice you\n";
    std::cout << "can do whatever you want with this stuff. If we meet some day, and you think\n";
    std::cout << "this stuff is worth it, you can buy me a beer in return.\n";
    std::cout << '\n';
    std::cout << "Special thanks to R.A. Montgomery and ChooseCO. All rights reserved." << '\n';
    std::cout << "Special thanks to Blake." << '\n';
    std::cout << "Special-special thanks to all my stream viewers and helpers." << '\n';

    system("pause");
    main();
}

int main()
{
    std::cout << '\n';
    //title sequence (print one line at a time?)
    // Change name to Ash Tree Lane
    std::cout << "|-------------------------------------------------------------------------------------------| " << '\n';
    std::cout << "|  ______   __  __     ______        __  __     ______     __  __     ______     ______     |" << '\n';
    std::cout << "| /\\__  _\\ /\\ \\_\\ \\   /\\  ___\\      /\\ \\_\\ \\   /\\  __ \\   /\\ \\/\\ \\   /\\  ___\\   /\\  ___\\    |" << '\n';
    std::cout << "| \\/_/\\ \\/ \\ \\  __ \\  \\ \\  __\\      \\ \\  __ \\  \\ \\ \\/\\ \\  \\ \\ \\_\\ \\  \\ \\___  \\  \\ \\  __\\    |" << '\n';
    std::cout << "|    \\ \\_\\  \\ \\_\\ \\_\\  \\ \\_____\\     \\ \\_\\ \\_\\  \\ \\_____\\  \\ \\_____\\  \\/\\_____\\  \\ \\_____\\  |" << '\n';
    std::cout << "|     \\/_/   \\/_/\\/_/   \\/_____/      \\/_/\\/_/   \\/_____/   \\/_____/   \\/_____/   \\/_____/  |" << '\n';
    std::cout << "|                                                                                           |" << '\n';
    std::cout << "|-------------------------------------------------------------------------------------------|" << '\n';
    std::cout << '\n';
    std::cout << "Failtech Games, (C) 2020-2021" << '\n';
    std::cout << '\n';
    
    // Baconhawkanator is a gift to humanity
    // !BAN BERG

    system("pause");
tryAgain:
    std::cout << "To start the game, please select option 1" << '\n';
    std::cout << "For How-To-Play, please select option 2" << '\n';
    std::cout << "To read the credits, please select option 3" << '\n';
   
    //std::cout << "Please enter 1 or 2" << '\n';

    char x{};

    std::cin >> x;
    std::cin.ignore(32767, '\n');

    //check input validation

    switch (x)
    {
    case '1':
        roomStart();
        break;
    case '2':
        HowTo();
        break;
    case '3':
        Credits();
        break;
    case '4':
        goto tryAgain;
       // roomStudyA1();
        break;
    default:
        goto tryAgain;
    }
    //MAKE NEW START MENU
   //roomStart();

    return 0;
}

//TO DO
//
// Create stairs transitions
//
// Look into image references in code
