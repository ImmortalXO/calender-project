#include "dateType.h"
#include <string>
using namespace std;

class extDateType : public dateType {
private:
  static const string monthNames[13];
  string monString;

public:
  // Constructor
  // Preconditions: None
  // Postconditions: Initializes the extDateType object with the provided day,
  // month, and year values.
  extDateType(int month = 1, int day = 1, int year = 1900);
  // Preconditions: None
  // Postconditions: Prints the date in month day, year format.
  void printLongDate();
  // Preconditions: None
  // Postconditions: Prints the date in month year format.
  void printLongMonthYear();
  // Preconditions: None
  // Postconditions: Sets the month to a string based on the number.
  void setMonString();
};