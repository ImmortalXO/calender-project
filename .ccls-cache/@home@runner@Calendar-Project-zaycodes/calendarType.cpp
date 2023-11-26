#include "calendarType.h"
#include "dayType.h"
#include <algorithm>
#include <cassert>
#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;

calendarType::calendarType(int mon, int yr) {
  string defaultDay = "Monday";
  firstDate.setDate(mon, 1, yr);
  firstDate.setMonString(firstDate.monthNames[mon]);
  firstDay.setDay(defaultDay);
  setFirstDayOfMonth();
};

void calendarType::setFirstDayOfMonth() {
  int daysPassed = firstDate.daysPassed();
  int weekDay = (daysPassed + 1) % 7;

  string dayOfWeekString;
  switch (weekDay) {
  case 0:
    dayOfWeekString = "Sunday";
    break;
  case 1:
    dayOfWeekString = "Monday";
    break;
  case 2:
    dayOfWeekString = "Tuesday";
    break;
  case 3:
    dayOfWeekString = "Wednesday";
    break;
  case 4:
    dayOfWeekString = "Thursday";
    break;
  case 5:
    dayOfWeekString = "Friday";
    break;
  case 6:
    dayOfWeekString = "Saturday";
    break;
  }
  firstDay.setDay(dayOfWeekString);
};

void calendarType::printDays() {
  int daysInMonth =
      firstDate.daysInMonth(firstDate.getMonth(), firstDate.getYear());
  int offset = 0;

  if (firstDay.getDay() == "Monday")
    offset = 1;
  else if (firstDay.getDay() == "Tuesday")
    offset = 2;
  else if (firstDay.getDay() == "Wednesday")
    offset = 3;
  else if (firstDay.getDay() == "Thursday")
    offset = 4;
  else if (firstDay.getDay() == "Friday")
    offset = 5;
  else if (firstDay.getDay() == "Saturday")
    offset = 6;

  for (int i = 0; i < offset; i++) {
    cout << "    ";
  }

  for (int day = 1; day <= daysInMonth; day++) {
    if (day < 10)
      cout << " ";
    cout << day << "  ";
    offset++;
    if (offset % 7 == 0) {
      cout << "\n";
    }
  }
  if (offset % 7 != 0) {
    cout << "\n";
  }
};

void calendarType::printCalendarTitle() {
  cout << setw(15) << firstDate.monthNames[firstDate.getMonth()] << " "
       << firstDate.getYear();
  cout << "";
  cout << endl;
  cout << "Sun Mon Tue Wed Thu Fri Sat \n" << endl;
};

// int calendarType::getMonth() { return month; };

// int calendarType::getYear() { return year; };

void calendarType::setMonth(int mon) {
  month = mon;
  firstDate.setDate(month, 1, year);
  setFirstDayOfMonth();
}

void calendarType::setYear(int yr) {
  year = yr;
  firstDate.setDate(month, 1, year);
  setFirstDayOfMonth();
}

void calendarType::printCalendar() {
  printCalendarTitle();
  printDays();
};