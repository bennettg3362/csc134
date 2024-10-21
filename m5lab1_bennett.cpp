#include <iostream>
using namespace std;

/*
CSC 134
M5LAB1 - Choose Your Own Adventure
Gabriel Bennett
21 October 2024
This template serves as a starting point
for your own program. We'll be using
void functions to tell a simple story,
where the user gets to make choices.

You can fork this template by clicking on the name above, then click the three
dots on the top right, and click 'fork repl'. This makes a copy for you to use.
*/

// Function Prototypes
// Any functions you make will need to
// be listed here, in this format, at the top.
// This is so the compiler knows to save
// room for them in the final program.
void main_menu();
void choice_front_door();
void choice_back_door();
void choice_go_home();
// TODO: add more choices here
void choice_order_food();
void choice_mcdonalds();
void choice_dennys();
void choice_dollartree();
void choice_cookout();
void choice_break_window();

int main() {
  cout << "M5LAB1 - Choose Your Own Adventure" << endl;
  // load up the main menu
  main_menu();
  // when we return here, we're done
  cout << "Thanks for playing!" << endl;
  return 0; // finished with no errors
}

void main_menu() {
  // Write a simple menu that lets the user choose 1,2, or 3, or 4 to quit.
  cout << "Main Menu" << endl;
  cout << "You're in front of a spooky old house..." << endl;
  cout << "Do you:" << endl;
  cout << "1. Try the front door" << endl;
  cout << "2. Sneak around back" << endl;
  cout << "3. Forget it, and go home" << endl;
  cout << "4. [Quit]" << endl;
  cout << "Choose: ";
  int choice;
  cin >> choice;
  if (1 == choice) {
    choice_front_door();
  } else if (2 == choice) {
    // call choice 2 here
  } else if (3 == choice) {
    choice_go_home();
  } else if (4 == choice) {
    cout << "Ok, quitting game" << endl;
    return; // go back to main()
  } else {
    cout << "That's not a valid choice, please try again." << endl;
    cin.ignore(); // clear the user input
    main_menu();  // try again
  }
}

// FUNCTION DEFINITIONS
// OK, we have the prototypes at the top, but
// now we have to actually write the functions.
// They go here, after main().
void choice_front_door() {
  cout << "Try the front door." << endl;
  cout << "It's locked. " << endl;
  cout << "Do you:" << endl;
  cout << "1. Check around back" << endl;
  cout << "2. Give up and go home" << endl;
  int choice;
  cout << "Choose: ";
  cin >> choice;
  if (1 == choice) {
    choice_back_door();
  } else if (2 == choice) {
    choice_go_home();
  } else {
    cout << "That's not a valid choice, please try again." << endl;
    cin.ignore();
    choice_front_door();
  }
}

void choice_back_door() {
    cout << "Try the backdoor." << endl;
    cout << "The backdoor is locked as well." << endl;
    cout << "Do you:" << endl;
    cout << "1. Throw a rock through the window" << endl;
    cout << "2. Give up and go home" << endl;
    int choice;
    cout << "Choose: ";
    cin >> choice;
    if (choice == 1) {
        choice_break_window();
    } else if (choice == 2) {
        choice_go_home();
    } else {
        cout << "That's not a valid choice, please try again." << endl;
        cin.ignore();
        choice_back_door();
    }
}

void choice_go_home() {
    cout << "You decide to go home." << endl;
    cout << "Safe at home, do you:" << endl;
    cout << "1. Order some food" << endl;
    cout << "2. Go to bed" << endl;
    int choice;
    cout << "Choose: ";
    cin >> choice;
    if (1 == choice) {
        choice_order_food();
    } else if (choice == 2) {
        cout << "You go to bed." << endl;
        cout << "*** Game Over ***" << endl;
    } else {
        cout << "That's not a valid choice, please try again." << endl;
        cin.ignore();
        choice_go_home();
    }
}

// any new choices go here

void choice_order_food() {
    cout << "You order food." << endl;
    cout << "What to order?" << endl;
    cout << "1. McDonald's" << endl;
    cout << "2. Denny's" << endl;
    cout << "3. Dollar Tree Steak" << endl;
    cout << "4. Cook Out" << endl;
    int choice;
    cout << "Choose: ";
    cin >> choice;
    if (choice == 1) {
        choice_mcdonalds();
    } else if (choice == 2) {
        choice_dennys();
    } else if (choice == 3) {
        choice_dollartree();
    } else if (choice == 4) {
        choice_cookout();
    } else {
        cout << "That's not a valid choice, please try again." << endl;
        cin.ignore();
        choice_order_food();
    }
}

void choice_mcdonalds() {
    cout << "You order McDonald's." << endl;
    cout << "Ronald McDonald comes to your house and kills you." << endl;
    cout << "*** Game Over ***" << endl;
}

void choice_dennys() {
    cout << "You try to order Denny's." << endl;
    cout << "However, the closest Denny's is a two hour drive from your house." << endl;
    cout << "You starve to death." << endl;
    cout << "*** Game Over ***" << endl;
}

void choice_dollartree() {
    cout << "You order steak from Dollar Tree." << endl;
    cout << "The steak gives you at least a dozen terminal illnesses." << endl;
    cout << "*** Game Over ***" << endl;
}

void choice_cookout() {
    cout << "You order Cook Out." << endl;
    cout << "However, your delivery driver cannot resist the temptations of this high class southern fast food chain." << endl;
    cout << "Your food is stolen." << endl;
    cout << "You starve to death." << endl;
    cout << "*** Game Over ***" << endl;
}

void choice_break_window() {
    cout << "You break the window with a rock." << endl;
    cout << "An old man appears." << endl;
    cout << "This house isn't haunted, it's just old." << endl;
    cout << "You get arrested for breaking and entering." << endl;
    cout << "*** Game Over ***" << endl;
}
