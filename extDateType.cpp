#include "extDateType.h"
#include <iostream>

using namespace std;

const string extDateType::monthNames[13] = {
    "",     "January", "February",  "March",   "April",    "May",     "June",
    "July", "August",  "September", "October", "November", "December"};

extDateType::extDateType(int month, int day, int year)
    : dateType(month, day, year) {
  setMonString();
}

void extDateType::printLongDate() {
  cout << getMonth() << " " << getMonth() << ", " << getYear();
};

void extDateType::printLongMonthYear() {
  cout << getMonth() << " " << getYear();
};