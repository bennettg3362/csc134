#include <iostream>
#include <string>

using namespace std;

int main()
{
    string table[8][8];
    int rand1, rand2;
    srand(time(0));

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            table[i][j] = "⬜";
        }
    }

    for (int i = 0; i < 10; i++)
    {
        rand1 = rand()%8;
        rand2 = rand()%8;
        if (table[rand1][rand2] == "💣") 
        {
            i = i - 1;
        }
        else
        {
            table[rand1][rand2] = "💣";
        } 
    }

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            cout << table[i][j];
        }
        cout << endl;
    }

    return 0;
}