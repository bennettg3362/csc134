#include <iostream>
using namespace std;

// CSC 134
// M6T1
// bennettg
// 11/11/2024

//global constant
const int NUM_DAYS = 5;

int main() {
    string days[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
    int cars[NUM_DAYS];
    int total = 0;
    int input;
    double average;

    for (int i = 0; i < NUM_DAYS; i++) {
        cout << "Please enter the count for " << days[i] << ": ";
        cin >> input;
        cars[i] = input;
        total += input;
    }
    cout << endl;

    average = total / (NUM_DAYS * 1.0);

    for (int i = 0; i < NUM_DAYS; i++) {
        cout << days[i].substr(0, 2) << ": ";
        for (int j = 0; j < cars[i]; j++) {
            cout << "#";
        }
        cout << endl;
    }

    cout << "Total: " << total << endl;
    cout << "Average: " << average << endl;
}