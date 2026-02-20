// UserProfileSystem.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "User.h"


int main()
{
    std::cout << "=== User Profile System ===\n";

    User user;
    user.inputUserData();
	user.displayUserData();

    return 0;
}




// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

