#include <iostream>
using namespace std;

int main() {
    double widthOne, widthTwo, lengthOne, lengthTwo;
    double areaOne, areaTwo;

    cout << "Please enter the width and height of rectangle 1," << endl;
    cout << "separated by a space or newline." << endl;
    cin >> widthOne >> lengthOne;

    cout << "Please enter the width and height of rectangle 2," << endl;
    cout << "separated by a space or newline." << endl;
    cin >> widthTwo >> lengthTwo;

    areaOne = widthOne * lengthOne;
    areaTwo = widthTwo * lengthTwo;

    cout << "The area of rectangle one is " << areaOne << endl;
    cout << "The area of rectangle two is " << areaTwo << endl;

    if (areaOne > areaTwo) {
        cout << "Rectangle one has a larger area than rectangle two" << endl;
    } else if (areaTwo > areaOne) {
        cout << "Rectangle two has a larger area than rectangle one" << endl;
    } else {
        cout << "Both rectangles are the same size" << endl;
    }
}