#include <iostream>
#include <string>
#include "calculate.h"

using namespace std;

struct Person {
    public:
        string name;
        string ic;
        string phone_number;
};

int main() {
    // Declare variables for the two people
    Person person1;
    Person person2;
    int num_items;

    cout << "Enter your name: ";
    cin >> person1.name;

    cout << "Enter your IC number: ";
    cin >> person1.ic;

    cout << "Enter your phone number: ";
    cin >> person1.phone_number;

    // cout << "Enter the number of items you want to recycle: ";    
    // cin >> num_items;



    cout << "===============Your Personal E-Waste Calculator===================" << endl;
    cout << "Name: " << person1.name << endl;
    cout << "IC: " << person1.ic << endl;
    cout << "Phone Number: " << person1.phone_number << endl;
    cout << "==================================================================" << endl;

    return 0;
}