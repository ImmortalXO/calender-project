#include "calendarType.h"
#include <iostream>

using namespace std;

int main() {
  int month, year;
  string keepGoing = "y";
  while (keepGoing == "y") {
    try {
      cout << "Enter a month (1-12): ";
      cin >> month;
      cout << "Enter a year (4-Digits): ";
      cin >> year;
      dateType date(1, 1, 1900);
      date.setMonth(month);
      date.setYear(year);
      calendarType cal(month, year);
      cal.printCalendar();
    } catch (invalidMonth &err) {
      cout << "ERROR: " << err.what() << endl;
      continue;
    } catch (invalidYear &err) {
      cout << "ERROR: " << err.what() << endl;
      continue;
    } catch (exception &err) {
      cout << "ERROR: " << err.what() << endl;
    }
    cout << "Want to print another calendar? (y/n): " << endl;
    cin >> keepGoing;
  }
  for (char &c : keepGoing) {
    c = tolower(c);
  }
  return 0;
}