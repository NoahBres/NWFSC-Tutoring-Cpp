#ifndef USEDCOMPUTER_H
#define USEDCOMPUTER_H

#include <string>
#include <math.h>

using namespace std;

class UsedComputer {
private:
    double age;
    string model;
    double brandNewPrice;
    char condition;

    double CalculateCurrentPrice();

    double CalculateShippingCost(double distance);
public:
    // Declare Constructor
    UsedComputer();

    // Overloaded Constructor
    UsedComputer(double age, double brandNewprice, string model, char condition);

    void PrintInvoice();

    // Declare getters and setters

    double getAge();

    void setAge(double age);

    double getBrandNewPrice();

    void setBrandNewPrice(double brandNewPrice);

    char getCondition();

    void setCondition(char condition);

    string getModel();

    void setModel(string model);

};

#endif //USEDCOMPUTER_H
