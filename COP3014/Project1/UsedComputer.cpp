
#include "UsedComputer.h"

// Implement default constructor
UsedComputer::UsedComputer() {
    this->age = 1.0;
    this->brandNewPrice = 10.00;
    this->model = "Not available";
    this->condition = 'A';
}

// Implement overloaded constructor
UsedComputer::UsedComputer(double age, double brandNewprice, string model, char condition) {
    this->age = age;
    this->brandNewPrice = brandNewprice;
    this->model = model;
    this->condition = condition;
}

// Implement getters and setters

double UsedComputer::getAge() {
    return age;
}

void UsedComputer::setAge(double age) {
    // Ensure that invalid (zero or negative) values do not get assigned
    if (age > 0)
        this->age = age;
}

double UsedComputer::getBrandNewPrice() {
    return brandNewPrice;
}

void UsedComputer::setBrandNewPrice(double brandNewPrice) {
    // Ensure that invalid (zero or negative) values do not get assigned
    if (age > 0)
        this->brandNewPrice = brandNewPrice;
}

char UsedComputer::getCondition() {
    return condition;
}

void UsedComputer::setCondition(char condition) {
    // An invalid character (other than ‘A’, ‘B’ or ‘C’) should not be allowed
    if (condition == 'A' || condition == 'B' || condition == 'C')
        this->condition = condition;
}

string UsedComputer::getModel() {
    return model;
}

void UsedComputer::setModel(string model) {
    this->model = model;
}

double UsedComputer::CalculateCurrentPrice() {
    double currentPrice = brandNewPrice;
    switch (this->condition) {
        case 'A':
            if (this->age > 7) {
                // If exceeds 7 years, price is capped at 30% of brandNewPrice
                currentPrice = 0.3 * brandNewPrice;
            } else {
                // Price goes down 10% of brandNewPrice every year
                currentPrice -= brandNewPrice * (age * 0.10);
            }
            break;
        case 'B':
            if (this->age > 5) {
                // If exceeds 5 years, price capped at 20% of brandNewPrice
                currentPrice = 0.2 * brandNewPrice;
            } else {
                // Price goes down 15% of brandNewPrice every year
                currentPrice -= brandNewPrice * (age * 0.15);
            }
            break;
        case 'C':
            // Price capped at 10% of brandNewPrice
            currentPrice = brandNewPrice * .10;
            break;
        default:
            currentPrice = 0.0;
    }

    return currentPrice;
}

double UsedComputer::CalculateShippingCost(double distance) {
    // Shipping rate = 1 cent per mile
    return distance * 0.01;
}

void UsedComputer::PrintInvoice() {
    // Lowkey dont know what to do here
}