#ifndef USEDFURNITUREITEM_H
#define USEDFURNITUREITEM_H

#include <string>
#include <math.h>

using namespace std;

class UsedFurnitureItem {
private:
    double age;
    double brandNewPrice;
    string description;
    char condition;
    double size;
    double weight;

    double CalculateCurrentPrice();

    double CalculateShippingCost(double distance);

public:
    // Declare Constructor
    UsedFurnitureItem();

    // Overloaded Constructor
    UsedFurnitureItem(double age, double brandNewPrice, string description, char condition, double size,
                      double weight);

    void PrintInvoice();

    // Declare getters and setters

    double getAge();

    void setAge(double age);

    double getBrandNewPrice();

    void setBrandNewPrice(double brandNewPrice);

    char getCondition();

    void setCondition(char condition);

    string getDescription();

    void setDescription(const string description);

    double getSize();

    void setSize(double size);

    double getWeight();

    void setWeight(double weight);
};

#endif //USEDFURNITUREITEM_H
