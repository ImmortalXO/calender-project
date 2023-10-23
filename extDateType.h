#include "dateType.h"
#include <string>
using namespace std;

class extDateType : public dateType {
public:
  extDateType(int month = 1, int day = 1, int year = 1900);
  void printLongDate();
  void printLongMonthYear();
  void setMonString();

private:
  static const string monthNames[13];
  string monString;
};