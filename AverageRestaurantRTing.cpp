#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;

// create class
class restaurant {
public:
    string restaurantName;
    int numberOfCustomers;
    string rating;

    // Setter functions
    void setrestaurantName(string _restaurantName) {
        restaurantName = _restaurantName;
    }
    void setnumberOfCustomers(int _numberOfCustomers) {
        numberOfCustomers = _numberOfCustomers;
    }
    void setrating(string _rating) {
        rating = _rating;
    }
};

int main()
{
    // make array of object
    restaurant obj[6];

    // open input file
    ifstream inFile;
    inFile.open("restaurant.txt");

    // define variables
    string restaurantName, rating;
    int numberOfCustomers;
    int count = 0;

    // loop to read in data
    while (inFile >> restaurantName >> rating >> numberOfCustomers)
    {
        // call function to set data
        obj[count].setrestaurantName(restaurantName);
        obj[count].setrating(rating);
        obj[count].setnumberOfCustomers(numberOfCustomers);
        // increment count by 1
        count++;
    }

    // print header
    cout << setw(10) << left << "Restaurant Name" << setw(10) << "Number Of Customers" << setw(10) << "rating" << endl;
    cout << "==============================================================" << endl;

    // for loop to print the data
    for (int i = 0; i < count; i++)
    {
        cout << setw(10) << obj[i].restaurantName << setw(10) << obj[i].numberOfCustomers << setw(10) << obj[i].rating << endl;
    }

    return 0;
}
