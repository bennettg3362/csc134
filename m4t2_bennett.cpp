#include <iostream>

using namespace std;

//CSC-134
//Gabriel Bennett
//M4T2
//October 2 2024

void counting();

int main() {
    counting();
    const int MIN_PLAYERS = 1;
    const int MAX_PLAYERS = 4;

    // Input validation example
    int num_players;
    cout << "How many players (1-4): ";
    cin >> num_players;
    while (num_players < MIN_PLAYERS || num_players > MAX_PLAYERS) {
        cout << "Please choose between " << MIN_PLAYERS;
        cout << " and " << MAX_PLAYERS << " players." << endl;
        cout << "How many players (1-4): ";
        cin >> num_players;
    }
    cout << "You're playing with " << num_players << " players." << endl;

    string ready;
    do {
        cout << "waiting..." << endl;
        cout << "Are all players ready?(yes/no) ";
        cin >> ready;
    } while (ready != "yes");
    return 0;
}

void counting() {
    cout << "version 1: while" << endl;
    int num = 0;
    while (num < 5) {
        cout << num << endl;
        num++;
    }
    cout << "version 2: for" << endl;
    for (int n=0; n<5; n++) {
        cout << n << endl;
    }
}
