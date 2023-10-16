#include "dayType.h"
// #include "dateType.h"
#include <iostream>

using namespace std;

int main() {
  dayType dayObj;
  cout << "From default constructor: ";
  dayObj.printDay();
  cout << endl;

  string defaultDay = dayObj.getDay();
  cout << "Next Day: " << endl;
  dayObj.setDay(defaultDay);
  dayObj.getNextDay();
  dayObj.printDay();
  cout << endl;

  cout << "Previous Day: ";
  dayObj.setDay(defaultDay);
  dayObj.getPreviousDay();
  dayObj.printDay();
  cout << endl;

  string currentDay = "Monday";
  dayType dayObj2(currentDay);
  cout << "From constructor with parameters: ";
  dayObj2.printDay();
  cout << endl;

  cout << "After adding 3 days: ";
  dayObj2.addDay(3);
  dayObj2.printDay();
  cout << endl;

  cout << "After adding 30 days: ";
  dayObj2.addDay(30);
  dayObj2.printDay();
  cout << endl;

  cout << "After adding 365 days: ";
  dayObj2.addDay(365);
  dayObj2.printDay();
  cout << endl;

  return 0;
};

