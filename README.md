# UserProfileSystem

A C++ console application for collecting and displaying user profile information, built as a hands-on project to practice core C++ concepts.

## Features

- Prompts the user to enter their name, age, date of birth, email, and password
- Validates age input (must be between 1 and 120)
- Displays a formatted profile summary with the password masked

## Project Structure

```
UserProfileSystem/
├── User.h                  # User class declaration
├── User.cpp                # Input and display logic
└── UserProfileSystem.cpp   # Entry point (main)
```

## Setup & Build

Built with **Visual Studio 2022** targeting Windows (MSVC v143). No external dependencies — uses the C++ standard library only.

1. Clone the repository
2. Open `UserProfileSystem.sln` in Visual Studio
3. Select a configuration (`Debug` or `Release`) and platform (`x64` recommended)
4. Build with **Ctrl+Shift+B** and run with **Ctrl+F5**

## Goals

- Practice OOP in C++ (classes, encapsulation, constructors)
- Handle user input safely with validation and buffer management
- Build toward a more complete profile system over time
