# 🚀 C++ Number Guessing Game v1.0

[![GitHub stars](https://img.shields.io/github/stars/AnReXx2/Number_guessing_console_game?style=social)](https://github.com/AnReXx2/Number_guessing_console_game)
[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)
[![C++](https://img.shields.io/badge/C++-17-blue?logo=c%2B%2B&logoColor=white)](https://en.wikipedia.org/wiki/C%2B%2B17)

## 🎯 Project Overview

Simple yet robust **console-based Number Guessing Game** written in **C++**.  
The computer picks a random number between 1 and 100, and you try to guess it with hints ("Too high!" / "Too low!").  

**📰Created as a portfolio project to practice and demonstrate:**
- Random number generation (`rand()` + `srand()`)
- Input validation & error recovery
- Loop control (`do-while` + `while`)
- Clean, user-friendly console interface

**📋Main features**
- Random secret number (1–100) generated each round
- Unlimited attempts with attempt counter
- Helpful feedback after each guess
- Full protection against invalid input (letters/symbols won't crash the game)
- Play again option (y/n)

## 📸 Demo (Example terminal session)

<img width="824" height="448" alt="image" src="https://github.com/user-attachments/assets/a4521c74-6c4b-44d9-9f4e-93371a34ae2c" />

## 🛠️ How to Run
### Option 1 – Visual Studio 2022/2026 (recommended for Windows)

- Clone or download the repository
- Open the folder (or .sln file if you have one) in Visual Studio
- Set configuration to Release | x64
- Build → Build Solution (Ctrl+Shift+B)
- Run without debugging (Ctrl+F5)

## Option 2 – Command line (g++ / MinGW / Linux / macOS)
```bash
git clone git@github.com:AnReXx2/Number_guessing_console_game.git
cd Number_guessing_console_game
g++ -std=c++17 main.cpp -o Number_guessing_console_game
./Number_guessing_console_game         # Linux / macOS
# or on Windows:
Number_guessing_console_game.exe
```
# ⚠️Requirements: Any C++17 compatible compiler (g++ 7+, MSVC 2019+, clang 5+)

## ⚙️ Technologies & Key Concepts
- Language: C++17
- Headers: <iostream>, <cstdlib>, <ctime>, <limits>
- Standard library only — no external dependencies
- Randomness: srand(time(NULL)) + rand()
- Input safety: cin.fail(), cin.clear(), cin.ignore(numeric_limits<streamsize>::max(), '\n')
- Code style: clean, commented, consistent

## 🔍 What makes this implementation solid?
```code
// Safe random number (1 to 100)
int secret = (rand() % 100) + 1;

// Input validation inside loop
if (cin.fail()) {
    cout << "Please enter a number!\n";
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    continue;  // Don't count invalid attempts
}

// Win condition
if (guess == secret) {
    cout << "Congratulations! You won in " << attempts << " attempt(s)!\n";
    won = true;
}
```
- Program cannot crash on bad input
- No memory leaks, no undefined behavior
- Clear separation: new game → new random number

## 🚀 Future Development (To-Do)

- Difficulty levels (Easy: 1–50, Hard: 1–1000, limited attempts)
- Save high score / best attempts to file (fstream)
- Add hints after X attempts
- OOP refactor (class Game with methods)
- Simple menu / statistics screen

## 👨‍💻 Author
- name: Anri
- C++ Developer (Beginner → Intermediate)
- 📍location: Batumi / Georgia 🇬🇪
- GitHub: AnReXx2
- LinkedIn: https://github.com/AnReXx2
- Email: anrid040@gmail.com
- Made with ❤️ in 2026, Georgia

## 📜 License
- MIT License — free to use, modify, share.

## ⭐ Support the project
- If you like this little game or find the code clean & educational — please star ⭐ it and watch for updates.
## ❤️❤️Thank you!



