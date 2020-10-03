#include "UsedFurnitureItem.h"

// Implement default constructor
UsedFurnitureItem::UsedFurnitureItem() {
    this->age = 1.0;
    this->brandNewPrice = 10.00;
    this->description = "Not available";
    this->condition = 'A';
    this->size = 1.0;
    this->weight = 1.0;
}

// Implement overloaded constructor
UsedFurnitureItem::UsedFurnitureItem(double age, double brandNewPrice, string description, char condition, double size,
                                     double weight) {
    this->age = age;
    this->brandNewPrice = brandNewPrice;
    this->description = description;
    this->condition = condition;
    this->size = size;
    this->weight = weight;
}

// Implement getters and setters

double UsedFurnitureItem::getAge() {
    return age;
}

void UsedFurnitureItem::setAge(double age) {
    // Ensure that invalid (zero or negative) values do not get assigned
    if (age > 0)
        this->age = age;
}

double UsedFurnitureItem::getBrandNewPrice() {
    return brandNewPrice;
}

void UsedFurnitureItem::setBrandNewPrice(double brandNewPrice) {
    // Ensure that invalid (zero or negative) values do not get assigned
    if (age > 0)
        this->brandNewPrice = brandNewPrice;
}

char UsedFurnitureItem::getCondition() {
    return condition;
}

void UsedFurnitureItem::setCondition(char condition) {
    // An invalid character (other than ‘A’, ‘B’ or ‘C’) should not be allowed
    if (condition == 'A' || condition == 'B' || condition == 'C')
        this->condition = condition;
}

string UsedFurnitureItem::getDescription() {
    return description;
}

void UsedFurnitureItem::setDescription(string description) {
    this->description = description;
}

double UsedFurnitureItem::getSize() {
    return size;
}

void UsedFurnitureItem::setSize(double size) {
    // Ensure that invalid (zero or negative) values do not get assigned
    if (age > 0)
        this->size = size;
}

double UsedFurnitureItem::getWeight() {
    return weight;
}

void UsedFurnitureItem::setWeight(double weight) {
    // Ensure that invalid (zero or negative) values do not get assigned
    if (age > 0)
        this->weight = weight;
}

double UsedFurnitureItem::CalculateCurrentPrice() {
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

double UsedFurnitureItem::CalculateShippingCost(double distance) {
    double shippingCost = 0.0;

    if (size < 1000 && weight < 20) {
        // Shipping cost = 1 cent per mile
        shippingCost = distance * 0.01;
    } else {
        // Shipping cost = 2 cents per mile
        shippingCost = distance * 0.02;
    }
    return shippingCost;
}

void UsedFurnitureItem::PrintInvoice() {
    // Lowkey dont know what to do here
}
