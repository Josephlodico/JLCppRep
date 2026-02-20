#include "User.h"
#include <iostream>
#include <limits>

User::User() : age(0) {}

void User::inputUserData() {
	std::cout << "Enter your name:";
	std::getline(std::cin, name);

	std::cout << "Enter your age:";
	while (!(std::cin >> age) || age < 1 || age > 120) {
		std::cout << "Invalid input. Please enter a valid age (1-120):";
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}

	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Clear input buffer

	std::cout << "Enter your date of birth (YYYY-MM-DD):";
	std::getline(std::cin, dateOfBirth);

	std::cout << "Enter your email:";
	std::getline(std::cin, email);

	std::cout << "Enter your password:";
	std::getline(std::cin, password);
}

void User::displayUserData() const {
	std::cout << "\n=== User Profile Summary ===\n";
	std::cout << "Name:" << name << "\n";
	std::cout << "Age:" << age << "\n";
	std::cout << "Date of Birth:" << dateOfBirth << "\n";
	std::cout << "Email:" << email << "\n";
	std::cout << "Password: " << std::string(password.length(), '*') << "\n"; // Mask password
}