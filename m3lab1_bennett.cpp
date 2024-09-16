#include <iostream>
using namespace std;

// CSC 134
// M3LAB1
// Gabriel Bennett
// 09/16/2024

// Simulates Monty Hall Problem
int main() {
    //initializing variable for user's choice of door and random door for prize
    int userChoice;
    int prize = rand() % 3 + 1;
    int revealHelper, doorReveal;
    string switchDoors;
    int doorToSwitchTo;

    // get user's choice
    cout << "There are three doors before you." << endl;
    cout << "One door has a prize behind it, and the other two have goats." << endl;
    cout << "Choose a door. Type 1 2 or 3." << endl;
    cin >> userChoice;

    if (userChoice == prize) {
        cout << "You have chosen door number " << userChoice << endl;

        // randomly picks one of the two doors to reveal
        revealHelper = rand() % 2;
        if (revealHelper == 0) {
            revealHelper == -1;
        }
        doorReveal = prize + revealHelper;
        if (doorReveal == 4) {
            doorReveal = 1;
        } else if (doorReveal == 0) {
            doorReveal = 3;
        }

        // ask user to switch doors
        cout << "I have opened door number " << doorReveal << ", and there is a goat behind it." << endl;
        cout << "Would you like to switch doors, or will you still choose door " << userChoice << "?" << endl;
        cout << "Enter y to switch doors, or n to stay on door " << userChoice << "." << endl;
        cin >> switchDoors;
        if (switchDoors == "y") {

        }
    }
}