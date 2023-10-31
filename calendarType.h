#include "dayType.h"
#include "extDateType.h"

class calendarType {
private:
  // First day object
  dayType firstDay;
  // First Date object
  extDateType firstDate;
  int month;
  int year;
  // Preconditions: Initialize firstDay and firstDate
  // Postconditions: Sets the correct first day for the month
  void setFirstDayOfMonth();
  // Preconditions: Initialize firstDay and firstDate
  // Postconditions: Prints all the days in the calendar.
  void printDays();
  // Preconditions: Initialize firstDay and firstDate
  // Postconditions: Prints the weekday names and month and year for the
  // calendar.
  void printCalendarTitle();

public:
  // Preconditions: The month is in the range 1-12 and the year is above 1900
  // Postconditions: The calendarType object is created with the specified month
  // and year.
  calendarType(int month, int year);
  // Preconditions: N/A
  // Postconditions: Returns the current month.
  int getMonth();
  // Preconditions: N/A
  // Postconditions: Returns the current year.
  int getYear();
  // Preconditions: month should be in range 1-12
  // Postconditions: Set month to specified mon.
  void setMonth(int mon);
  // Preconditions: year should be above 1900.
  // Postconditions: Set year to specified yr.
  void setYear(int yr);
  // Preconditions: N/A
  // Postconditions: Prints the calendar for the specified month and year.
  void printCalendar();
};