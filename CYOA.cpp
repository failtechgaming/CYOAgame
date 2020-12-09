// CYOA.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "roomTemplate.h"
#include "allRooms.h"


void ClearScreen()
{
    int n;
    for (n = 0; n < 10; n++)
        printf("\n\n\n\n\n\n\n\n\n\n");
}

int main()
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

    return 0;
}

//TO DO
//
// Create stairs transitions
//
// Look into image references in code
