#ifndef HEARTRATE_HEARTRATES_H
#define HEARTRATE_HEARTRATES_H

#include <string>
#include <ctime>

// or replace with
//#pragma once

class HeartRates {
 private:
  std::string firstName;
  std::string lastName;

  int birthDay;
  int birthMonth;
  int birthYear;

 public:
  HeartRates(std::string firstName, std::string lastName, int birthDay, int birthMonth, int birthYear) {
      this->firstName = firstName;
      this->lastName = lastName;

      this->birthDay = birthDay;
      this->birthMonth = birthDay;
      this->birthYear = birthYear;
  }

  std::string getFirstName() {
      return firstName;
  }
  void setFirstName(std::string firstName) {
      this->firstName = firstName;
  }

  std::string getLastName() {
      return lastName;
  }
  void setLastName(std::string lastName) {
      this->lastName = lastName;
  }

  int getBirthDay() {
      return birthDay;
  }
  void setBirthDay(int birthDay) {
      this->birthDay = birthDay;
  }

  int getBirthMonth() {
      return birthMonth;
  }
  void setBirthMonth(int birthMonth) {
      this->birthMonth = birthMonth;
  }

  int getBirthYear() {
      return birthYear;
  }
  void setBirthYear(int birthYear) {
      this->birthYear = birthYear;
  }

  int getAge() {
      return getSystemYear() - birthYear;
  }

  int getMaxHeartRate() {
      return 220 - getAge();
  }

  int getTargetHeartRateMin() {
      return (int) ((double) getMaxHeartRate() * 0.5);
  }

  int getTargetHeartRateMax() {
      return (int) ((double) getMaxHeartRate() * 0.85);
  }

  int getSystemYear() {
      time_t now = time(0);
      tm *ltm = localtime(&now);

      return 1900 + ltm->tm_year;
  }
};

#endif
