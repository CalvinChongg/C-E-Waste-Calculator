#include <iostream>
#include <vector>
#include "calculate.h"

using namespace std;

int main() {
    string name, ic, phone_number;
    int number_of_items;
    vector<float> weights;

    // Input user details
    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Enter your IC: ";
    getline(cin, ic);
    cout << "Enter your phone number: ";
    getline(cin, phone_number);

    // Input number of items and weights
    cout << "Enter the number of items: ";
    cin >> number_of_items;

    cout << "Enter the weights of each item (in kg):\n";
    for (int i = 0; i < number_of_items; ++i) {
        float weight;
        cout << "Item " << (i + 1) << ": ";
        cin >> weight;
        weights.push_back(weight);
    }

    // Perform calculations using the function in calculate.h
    float total_weight = calculateTotalWeight(weights);
    float total_price = calculateTotalPrice(total_weight);
    float total_carbon_reduction = calculateCarbonReduction(total_weight);

    // Output results
    cout << "\n=================E-Waste Calculation Summary======================\n";
    cout << "Name: " << name << endl;
    cout << "IC: " << ic << endl;
    cout << "Phone Number: " << phone_number << endl;
    cout << "Number of Items: " << number_of_items << endl;
    cout << "Total Weight: " << total_weight << " kg\n";
    cout << "Total Price: RM " << total_price << endl;
    cout << "Total Carbon Footprint Reduced: " << total_carbon_reduction << " kg CO2\n";
    cout << "\n==================================================================\n";

    return 0;
}