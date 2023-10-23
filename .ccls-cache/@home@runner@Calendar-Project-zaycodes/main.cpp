#include "extDateType.h"
#include <iostream>

using namespace std;

int main() {
  extDateType extDate(6, 21, 2022);
  extDate.printDate();
  cout << endl;
  extDate.printLongDate();
  cout << endl;
  extDate.printLongMonthYear();

  return 0;
}