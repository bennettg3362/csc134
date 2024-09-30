#include <iostream>

using namespace std;

// CSC 134
// M4T1 - basic loops
// Gabriel Bennett
// 09/30/2024

int main()
{
    cout << "M4T1" << endl;
    cout << "Simple loop" << endl;
    int num = 0;
    while (num < 5) {
        cout << "num=" << num << endl;
        num++;
    }
    cout << endl;

    const int MIN_NUMBER = 1, MAX_NUMBER = 10;
    num = MIN_NUMBER;
    cout << "Number Number Squared" << endl;
    cout << "-------------------------" << endl;
    while (num <= MAX_NUMBER) {
        cout << num << "\t\t" << (num * num) << endl;
        num++;
    }
    return 0;
}
