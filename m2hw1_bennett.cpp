#include <iostream>
#include <iomanip>
using namespace std;

//CSC 134
//M2LAB1 - Case Study
// Gabriel Bennett
// 09/09/2024

// declaring functions
void questionOne();
void questionTwo();
void questionThree();
void questionFour();

int main() {
    
    // initializing boolean to allow for exiting loop
    bool cont = true;

    // main while loop to pick between four questions
    while (cont) {
        string picker;
        cout << "Which question would you like to view? Enter the number listed, or enter \"q\" to exit." << endl;
        cout << "[1] Question 1 - Bank Account" << endl;
        cout << "[2] Question 2 - Crate Sales" << endl;
        cout << "[3] Question 3 - Pizza Party" << endl;
        cout << "[4] Question 4 - Cheer" << endl;
        cout << "[q] Quit" << endl;
        cin >> picker;
        if (picker == "1") {
            questionOne();
        } else if (picker == "2") {
            questionTwo();
        } else if (picker == "3") {
            questionThree();
        } else if (picker == "4") {
            questionFour();
        } else if (picker == "q") {
            cont = false;
        } else {
            cout << "Invalid selection!" << endl;
        }
    }
    return 0;

}

// Question 1 - Write a program that simulates banking transactions
void questionOne() {

    // declare variables
    string firstName, lastName;
    int accountNumber;
    double balance, deposit, withdrawal;
    accountNumber = rand() % 100000000;

    // get info
    cout << "Welcome! Please enter the name on your account, please include both first and last." << endl;
    cin >> firstName >> lastName;
    cout << "Hello, " << firstName << "! What is your starting account balanance?" << endl;
    cin >> balance;
    cout << "How much would you like to deposit?" << endl;
    cin >> deposit;
    cout << "How much would you like to withdrawal?" << endl;
    cin >> withdrawal;
    balance = balance + deposit - withdrawal;

    // display info
    cout << "-------------------------" << endl;
    cout << "Name: " << firstName << lastName << endl;
    cout << "Account Number: " << accountNumber << endl;
    cout << "Final Balance: " << balance << endl;
    cout << "-------------------------" << endl;

}

// Question 2 - General Crates costs increase
void questionTwo() {

    //declare constants and initialize variables
    const double COST_PER_CUBIC_FOOT = 0.3;
    const double CHARGE_PER_CUBIC_FOOT = 0.52;
    double length, width, height;
    double volume, cost, charge, profit;
    string name;

    //ask for name
    cout << "Hi, what's your name? ";
    cin >> name;
    cout << "Nice to meet you, " << name << endl;

    //get dimensions
    cout << "What is the length, width, and height of the crate in feet?" << endl;
    cout << "Length: ";
    cin >> length;
    cout << "Width: ";
    cin >> width;
    cout << "Height: ";
    cin >> height;

    //calculations
    volume = length * width * height;
    cost = volume * COST_PER_CUBIC_FOOT;
    charge = volume * CHARGE_PER_CUBIC_FOOT;
    profit = charge - cost;

    //display calculations
    cout << "The crate's dimensions are " << length << " x " << width << " x " << height << "." << endl;
    cout << "The crate's volume is " << fixed << setprecision(2) << volume << " cubic feet." << endl;
    cout << "The cost of the crate is $" << cost << "." << endl;
    cout << "The charge for the crate is $" << charge << "." << endl;
    cout << "The total profit is $" << profit << "." << endl;

}

void questionThree() {

    //initialize variables
    int pizzas, slicesPerPizza, guests;
    int slices, slicesEaten;

    // get info
    cout << "How many pizzas will you order?" << endl;
    cin >> pizzas;
    cout << "How many slices does each pizza have?" << endl;
    cin >> slicesPerPizza;
    cout << "How many guests are coming?" << endl;
    cin >> guests;

    //calculate and display info
    slices = pizzas * slicesPerPizza;
    cout << "You're ordering a total of " << slices << " slices." << endl;
    slicesEaten = guests * 3;
    cout << "If your guests will eat 3 slices each, " << slicesEaten << " slices will be eaten." << endl;
    if (slicesEaten > slices) {
        cout << "You'll need to order more pizza than that." << endl;
        main();
    }
    slices = slices - slicesEaten;
    if (slices == 1) {
        cout << "There will be 1 slice remaining." << endl;
    } else {
        cout << "There will be " << slices << " slices remaining." << endl;
    }

}

void questionFour() {

    // declare variables
    string letsGo = "Let's go";
    string school = "FTCC";
    string team = "Trojans";
    string cheerOne = letsGo + " " + school;
    string cheerTwo = letsGo + " " + team;

    // print
    cout << cheerOne << endl;
    cout << cheerOne << endl;
    cout << cheerOne << endl;
    cout << cheerTwo << endl;

}




