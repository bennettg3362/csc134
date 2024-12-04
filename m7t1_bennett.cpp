#include <iostream>
#include <vector>
using namespace std;

// CSC 134
// M7T1 - Restaurant Rating
// bennettg
// 12/04/24
// Use Restaurant class to store user ratings

// Next time we'll put the class in a separate file
class Restaurant {
  private:
    string name;    // the name
    double rating;  // 0 to 5 stars

  public:
	// constructor 
	Restaurant(string n, double r) {
		name = n;
		rating = r;
	}
	// getters and setters
    void setName(string n) {
        name = n; 
    }
    void setRating(double r) {
        rating = r;
    }
    string getName() const {
        return name;
    }
    double getRating() const {
        return rating;
    }
  
};

int main() {
    cout << "M7T1 - Restaurant Reviews" << endl;

    Restaurant breakfast("Biscuit Kitchen", 4);   
    Restaurant lunch("Taco Bell", 2);
    Restaurant dinner("Pizza Hut", 5);

    vector<Restaurant> meals = {breakfast, lunch, dinner};
    cout << "Today's Meal Ratings" << endl;
    for (Restaurant food: meals) {
        cout << food.getName() << " Rating: " << food.getRating() << "/5" << endl;
    }

    return 0;

}