#include <iostream>
using namespace std;

// M6LAB1
// bennettg
// 11/13/2024

const int NUM_ROUNDS = 3;
const int RED = 1;
const int BLACK = 0;

int main() {
    int chamber[] = {RED, BLACK, RED};
    for (int round: chamber) {
        if (round == RED) {
            cout << "RED ";
        }
        if (round == BLACK) {
            cout << "BLACK ";
        }
        cout << endl;
    }
}