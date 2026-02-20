#pragma once
#ifndef USER_H
#define USER_H

#include <string>

class User {
	std::string name;
	int age;
	std::string dateOfBirth;
	std::string email;
	std::string password;

public:
	User(); //Contructor

	void inputUserData();
	void displayUserData() const;
};

#endif // USER_H