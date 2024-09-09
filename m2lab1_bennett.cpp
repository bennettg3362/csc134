#include <iostream>
#include <iomanip>
using namespace std;

//CSC 134
//M2LAB1 - Case Study
// Gabriel Bennett
// 09/09/2024

int main() {
    //ask for name
    string name;
    cout << "Hi, what's your name? ";
    cin >> name;
    cout << "Nice to meet you, " << name << endl;

    //declare constants and initialize variables
    const double COST_PER_CUBIC_FOOT = 0.23;
    const double CHARGE_PER_CUBIC_FOOT = 0.5;
    double length, width, height;
    double volume, cost, charge, profit;

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