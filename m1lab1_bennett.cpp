// CSC 134
// M1LAB - Apple Orchard
// Gabrel Bennett
// 08-21-2024

#include <iostream>
#include <iomanip> //for setprecision()
using namespace std;

int main() { 
  // Set up variables
  string name;
  string last_name;
  int num_apples;
  double price_per_apple;
  double total_cost;

  // Get user input 
  cout << "What is your first name? " << endl;
  cin >> name;
  cout << "What is your last name? " << endl;
  cin >> last_name;
  cout << "How many apples in stock? " << endl;
  cin >> num_apples;
  cout << "How much is one apple? " << endl;
  cin >> price_per_apple;

  // Say hello
  cout << "Welcome to " << name << " " << last_name;
  cout << "\'s apple orchard!" << endl;
  cout << "We have " << num_apples << " in stock." << endl;
  cout << "The cost of one apple is $";
  cout << price_per_apple << "." << endl; 

  // Ask some questions
  int your_apples = 0;
  cout << "How many apples would you like? " << endl;
  cin >> your_apples;

  // set all decimals to 2 places
  cout << fixed << setprecision(2);
  
  // Give the answers
  if (your_apples > num_apples) {
    cout << "We don't have that many apples!" << endl;
  } else {
    cout << "You have " << your_apples << " apples" << endl;
    total_cost = your_apples * price_per_apple;
    cout << "Your total price is $" << total_cost << endl;
  }
}