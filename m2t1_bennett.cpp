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
    exit(0);
  } else {
    cout << "You have " << your_apples << " apples" << endl;
    total_cost = your_apples * price_per_apple;
    cout << "Your total price is $" << total_cost << endl;
  }
  
  // tax and receipt
  double tax_percent = 0.08;
  double total_after_tax = total_cost + total_cost * tax_percent;
  cout << "After tax, that comes out to $" << total_after_tax << endl << endl;
  cout << "Here's your receipt: " << endl;
  cout << "--------------------" << endl;
  cout << setw(3) << num_apples << " Apples";
  cout << setw(10) << total_cost << endl;
  cout << setw(10) << "Tax %";
  cout << setw(9) << tax_percent * 100 << "%" << endl;
  cout << setw(10) << "Tax";
  cout << setw(10) << total_cost * tax_percent << endl;
  cout << setw(10) << "Total";
  cout << setw(10) << total_after_tax << endl;
}