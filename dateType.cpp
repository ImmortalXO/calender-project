#include "dateType.h"
#include <iostream>

using namespace std;

dateType::dateType(int mon, int d, int yr) { setDate(mon, d, yr); };

int dateType::getDay() { return day; };

int dateType::getMonth() { return month; };

int dateType::getYear() { return year; };

void dateType::setDate(int mon, int d, int yr) {
  if (yr >= 1900 && mon <= 12 && d >= 1 && d <= daysInMonth(mon, yr)) {
    day = d;
    month = mon;
    year = yr;
  } else {
    day = 1;
    month = 1;
    year = 1900;
    cout << "Cannot set date. Resetting to 1-1-1900." << endl;
  }
};

void dateType::setFutureDate(int days) {
  int totalDays = daysPassed() + days;
  int remainingDays = (isLeapYear() ? 366 : 365) - totalDays;

  if (days >= 0 && days <= remainingDays) {
    int mon = 1;
    int d = 1;
    while (totalDays > daysInMonth(mon, year)) {
      totalDays -= daysInMonth(mon, year);
      mon++;
    }
    d += totalDays;
    setDate(mon, d, year);
  } else {
    cout << "Invalid number of days to add. Try again to change the date."
         << endl;
  }
};

void dateType::printDate() { cout << month << "-" << day << "-" << year; }

bool dateType::isLeapYear() {
  if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) {
    return true;
  } else {
    return false;
  }
};

int dateType::daysInMonth(int mon, int yr) {
  if (mon == 2) {
    return (isLeapYear() ? 29 : 28);
  } else if (mon == 4 || mon == 6 || mon == 9 || mon == 11) {
    return 30;
  } else {
    return 31;
  }
};

int dateType::daysPassed() {
  int days = day;
  for (int i = 1; i < month; i++) {
    days += daysInMonth(i, year);
  }
  return days;
};

int dateType::daysRemaining() {
  return (isLeapYear() ? 366 : 365) - daysPassed();
};
