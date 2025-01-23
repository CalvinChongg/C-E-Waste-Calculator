#ifndef CALCULATE_H
#define CALCULATE_H

#include <vector>

using namespace std;

const float price_per_kg = 2.5;              // Example rate per kg
const float carbon_reduction_per_kg = 1.2;  // Example carbon reduction rate per kg

// Function to calculate the total weight
float calculateTotalWeight(const vector<float>& weights) {
    float total_weight = 0.0f;
    for (float weight : weights) {
        total_weight += weight;
    }
    return total_weight;
}

// Function to calculate the total price
float calculateTotalPrice(float total_weight) {
    return total_weight * price_per_kg;
}

// Function to calculate the total carbon footprint reduction
float calculateCarbonReduction(float total_weight) {
    return total_weight * carbon_reduction_per_kg;
}

#endif