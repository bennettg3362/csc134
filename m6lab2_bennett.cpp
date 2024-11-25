#include <iostream>
#include <vector>
using namespace std;

const int RED = 1;
const int BLACK = 0;

int main() 
{
    vector <int> chamber = {};

    chamber.push_back(RED);
    chamber.push_back(RED);
    chamber.push_back(BLACK);

    for (int round : chamber)
    {
        if (round == RED) 
        {
            cout << "RED ";
        }
        if (round == BLACK)
        {
            cout << "BLACK ";
        }
    }
    cout << endl;

    return 0;
}