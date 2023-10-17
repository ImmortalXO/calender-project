#include "dateType.h"
#include <iostream>

using namespace std;

int main() {
  dateType dateObj;
  dateType customDateObj(2, 15, 23);

  cout << "Default constructor: ";
  dateObj.printDate();
  cout << endl;

  cout << "Constructor: ";
  customDateObj.printDate();
  cout << endl;

  cout << "Constructor: ";
  customDateObj.printDate();
  cout << endl;

  return 0;
};