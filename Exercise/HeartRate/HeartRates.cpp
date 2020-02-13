#include <iostream>

#include "HeartRates.h"

//using namespace std;

int main() {
  // If you are using the std namespace on line 3, then you only
  // need to write 'cout << "Hello, world!" << std::endl;'

  std::string firstName = "";
  std::string lastName = "";

  int birthDay = 0;
  int birthMonth = 0;
  int birthYear = 0;

  std::cout << "----Heart Rate Calculator----" << std::endl;
  std::cout << "First Name: ";
  std::cin >> firstName;
  std::cout << "Last Name: ";
  std::cin >> lastName;
  std::cout << "Birth Year: ";
  std::cin >> birthYear;
  std::cout << "Birth Month: ";
  std::cin >> birthMonth;
  std::cout << "Birth Day: ";
  std::cin >> birthDay;

  std::cout << std::endl << "------Calculating beep boop-----" << std::endl << std::endl;

  HeartRates heartRates = HeartRates(firstName, lastName, birthDay, birthMonth, birthYear);

  std::cout
      << "-----HEART RATE INFO----"
      << std::endl
      << "Name:           " << heartRates.getFirstName() << " " << heartRates.getLastName()
      << std::endl
      << "Birth Date:     " << heartRates.getBirthDay() << "/" << heartRates.getBirthMonth() << "/"
      << heartRates.getBirthYear()
      << std::endl
      << "Age:            " << heartRates.getAge()
      << std::endl
      << "Max Heart Rate: " << heartRates.getMaxHeartRate()
      << std::endl
      << "Min Heart Rate: " << heartRates.getTargetHeartRateMin()
      << std::endl
      << "Max Heart Rate: " << heartRates.getTargetHeartRateMax()
      << std::endl
      << "----------------------";

  return 0;
}
