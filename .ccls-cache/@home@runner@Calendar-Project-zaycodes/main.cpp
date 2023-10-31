#include "calendarType.h"
#include <iostream>

using namespace std;

int main() {
  int month, year;
  string keepGoing = "y";
  while (keepGoing == "y") {
    cout << "Enter a month (1-12): ";
    cin >> month;
    cout << "Enter a year (4-Digits): ";
    cin >> year;
    calendarType cal(month, year);
    cal.printCalendar();
    cout << "Want to print another calendar? (y/n): " << endl;
    cin >> keepGoing;
  }
  for (char &c : keepGoing) {
    c = tolower(c);
  }
  return 0;
}