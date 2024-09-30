#include <iostream>
#include <iomanip>
using namespace std;

// CSC 134
// M3HW1
// Gabriel Bennett
// 09/30/2024


int main() {
    cout << "Question 1" << endl;
    string input;
    cout << "Hello I'm a C++ program!" << endl;
    cout << "Do you like me? Please type yes or no." << endl;
    cin >> input;
    if (input == "yes") {
        cout << "That's great! I'm sure we'll get along" << endl;
    } else if (input == "no") {
        cout << "Well, maybe you'll learn to like me later." << endl;
    } else {
        cout << "If you're not sure... that's OK" << endl;
    }

    cout << "Question 2" << endl;
    int choice;
    double meal_cost;
    bool dineIn;
    double tip_percent = 0.15;
    double tax_percent = 0.08;
    cout << "Hello, welcome to restaurant" << endl;
    cout << "Please enter 1 if the order is dine in, 2 if it is to go" << endl;
    cin >> choice;
    if (choice == 1) {
        dineIn = true;
    } else if (choice == 2) {
        dineIn = false;
    }
    cout << "What is the price of your meal?" << endl;
    cin >> meal_cost;

    double total = meal_cost + meal_cost * tax_percent;
    if (dineIn) {
        total = total + meal_cost * tip_percent;
    }
    cout << fixed << setprecision(2);
    cout << "After tax, that comes out to $" << total << endl << endl;
    cout << "Here's your receipt: " << endl;
    cout << "--------------------" << endl;
    cout << setw(10) << "Cost";
    cout << setw(10) << meal_cost << endl;
    cout << setw(10) << "Tax %";
    cout << setw(9) << tax_percent * 100 << "%" << endl;
    cout << setw(10) << "Tax";
    cout << setw(10) << meal_cost * tax_percent << endl;
    cout << setw(10) << "Tip %";
    cout << setw(9) << tip_percent * dineIn * 100 << "%" << endl;
    cout << setw(10) << "Tip";
    cout << setw(10) << meal_cost * tip_percent * dineIn << endl;
    cout << setw(10) << "Total";
    cout << setw(10) << total << endl;
}