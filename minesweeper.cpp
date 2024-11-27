#include <iostream>
#include <string>

using namespace std;

void gameplayLoop();
string getPlayerField();
int getInputX(string input);

string playerField[8][8];
bool hits[8][8];
string mines[8][8];

int main()
{
    string input;
    int inputX;
    int inputY;
    int rand1, rand2;
    srand(time(0));

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            mines[i][j] = "🟩";
            playerField[i][j] = "⬜";
            hits[i][j] = 0;
        }
    }

    for (int i = 0; i < 10; i++)
    {
        rand1 = rand()%8;
        rand2 = rand()%8;
        if (mines[rand1][rand2] == "💣") 
        {
            i = i - 1;
        }
        else
        {
            mines[rand1][rand2] = "💣";
        } 
    }

    gameplayLoop();

    /* input = getPlayerField();
    inputX = getInputX(input);
    inputY = stoi(input.substr(1, 1)) - 1;

    hits[inputX][inputY] = 1;

    getPlayerField(); */

    return 0;
}

void gameplayLoop()
{
    string input;
    int inputX, inputY;
    bool gameActive = true;
    while (gameActive)
    {
        input = getPlayerField();
        inputX = getInputX(input);
        inputY = stoi(input.substr(1, 1)) - 1;

        hits[inputY][inputX] = 1;
    }
}

string getPlayerField() 
{
    string input;
    cout << "  A B C D E F G H" << endl;
    for (int i = 0; i < 8; i++)
    {
        cout << (i + 1);
        for (int j = 0; j < 8; j++)
        {
            if (hits[i][j]) 
            {
                playerField[i][j] = mines[i][j];
            }
            cout << playerField[i][j];
        }
        cout << endl;
    }

    cout << "Please enter which space you would like to hit by typing the letter followed by the number" << endl;
    cout << "Ex: G5" << endl;
    cin >> input;

    return input;
}

int getInputX(string input)
{
    string letterX = input.substr(0, 1);
    if (letterX == "A") {return 0;}
    if (letterX == "B") {return 1;}
    if (letterX == "C") {return 2;}
    if (letterX == "D") {return 3;}
    if (letterX == "E") {return 4;}
    if (letterX == "F") {return 5;}
    if (letterX == "G") {return 6;}
    if (letterX == "H") {return 7;}
    return 0;
}