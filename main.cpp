#include "extDateType.h"
#include <iostream>

using namespace std;

int main() {
  extDateType dateObj;
  extDateType customDateObj(6, 23, 2023);

  cout << "Default constructor: ";
  dateObj.printDate();
  cout << endl;

  cout << "Constructor: ";
  customDateObj.printDate();
  cout << endl;

  int daysPassed = customDateObj.daysPassed();
  cout << "Number of days passed: " << daysPassed;
  cout << endl;

  int daysRemaining = customDateObj.daysRemaining();
  cout << "Number of days remaining: " << daysRemaining;
  cout << endl;

  int daysInMonth = customDateObj.daysInMonth(customDateObj.getMonth(),
                                              customDateObj.getYear());
  cout << "Number of days in month: " << daysInMonth;
  cout << endl;

  customDateObj.setFutureDate(15);
  cout << "After 15 days, the date will be: ";
  customDateObj.printDate();
  cout << endl;

  string monthString = "July";
  customDateObj.setMonString(monthString);
  customDateObj.printDate();
  cout << endl;
  customDateObj.printLongDate();
  cout << endl;
  customDateObj.printLongMonthYear();

  return 0;
}