#include "dayType.h"
#include <iostream>
#include <string>

using namespace std;

const string dayType::dayNames[7] = {"Sunday",    "Monday",   "Tuesday",
                                     "Wednesday", "Thursday", "Friday",
                                     "Saturday"};

dayType::dayType(string &currentDay) { setDay(currentDay); };

dayType::dayType() { day = "Sunday"; };

void dayType::setDay(string &targetDay) { day = targetDay; };

void dayType::printDay() { cout << day; };

string dayType::getDay() { return day; }

void dayType::getNextDay() {
  int initial = 0;
  for (int i = 0; i < 7; i++) {
    if (day == dayNames[i]) {
      initial = i;
      break;
    }
  }
  day = dayNames[(initial + 1) % 7];
};

void dayType::getPreviousDay() {
  int initial = 0;
  for (int i = 0; i < 7; i++) {
    if (day == dayNames[i]) {
      initial = i;
      break;
    }
  }
  day = dayNames[(initial + 6) % 7];
};

void dayType::addDay(int dayAmount) {
  int initial = 0;
  for (int i = 0; i < 7; i++) {
    if (day == dayNames[i]) {
      initial = i;
      break;
    }
  }
  initial = (initial + dayAmount) % 7;
  day = dayNames[initial];
};