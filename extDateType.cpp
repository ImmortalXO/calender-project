#include "extDateType.h"
#include <iostream>

using namespace std;

string monthNames[13] = {
    "",     "January", "February",  "March",   "April",    "May",     "June",
    "July", "August",  "September", "October", "November", "December"};

extDateType::extDateType(int month, int day, int year)
    : dateType(month, day, year) {
  setMonString(monthNames[month]);
}

void extDateType::printLongDate() {
  cout << monString << " " << getDay() << ", " << getYear();
};

void extDateType::printLongMonthYear() {
  cout << monString << " " << getYear();
};

void extDateType::setMonString(string &monStr) { monString = monStr; }