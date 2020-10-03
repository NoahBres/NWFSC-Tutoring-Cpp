#include <iostream>

#include "UsedFurnitureItem.h";
#include "UsedComputer.h";

int main() {
    UsedFurnitureItem usedFurnitureItem1 = UsedFurnitureItem();
    UsedComputer usedComputer1 = UsedComputer();

    // The test program will then call the accessors for all data members of the objects created in step a.

    UsedFurnitureItem usedFurnitureItem2 = UsedFurnitureItem(5.0, 5.0, "Yuh", 'B', 10.0, 10.0);
    UsedComputer usedComputer2 = UsedComputer(3.0, 10.0, "Nah", 'C');

    // Next, the test program will test each setter (for objects of both types in a sequence) by calling
    //the setter to set a value and then call the corresponding getter to print out the set value. This
    //test should be done twice on data members that could be set to invalid values (that have
    //numerical or character data type) – once after trying to set invalid values and subsequently,
    //once after setting them to valid values. The data members with string data types (model,
    //description) can be tested just once.
    //e. Finally, once all member variables are set, the private function PrintInvoice( ) will be used to
    //call the accessors to print the values of data members and the result of CalculateCurrentPrice(
    //) and CalculateShippingCost( ).
    return 0;
}
