#include "extDateType.h"
#include <iostream>

using namespace std;

int main() {
  extDateType extDate(6, 21, 2022);
  extDate.printLongDate();
  extDate.printLongMonthYear();

  return 0;
}