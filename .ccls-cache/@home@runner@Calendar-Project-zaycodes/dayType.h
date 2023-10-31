#ifndef DAYTYPE_H
#define DAYTYPE_H
#include <string>
using namespace std;

class dayType {
private:
  string day;
  static const string dayNames[7];

public:
  // Default constructor
  // Preconditions: None.
  // Postconditions: day is initialized to an empty string.
  dayType();
  // Parameterized constructor
  // Preconditions: currentDay must be a valid day of the week (e.g., "Monday").
  // Postconditions: day is set to currentDay.
  dayType(string &currentDay);
  // Retrieve the current day
  // Preconditions: None.
  // Postconditions: Returns the current value of day.
  string getDay();
  // Move to the next day
  // Preconditions: day must be a valid day of the week.
  // Postconditions: day is updated to the next day.
  void getNextDay();
  // Move to the previous day
  // Preconditions: day must be a valid day of the week.
  // Postconditions: day is updated to the previous day.
  void getPreviousDay();
  // Add a specific number of days to the current day
  // Preconditions: day must be a valid day of the week, and dayAmount should be
  // an integer. Postconditions: day is updated to the result of adding
  // dayAmount days to the current day.
  void addDay(int dayAmount);
  // Set the current day to a specific day
  // Preconditions: targetDay must be a valid day of the week (e.g., "Tuesday").
  // Postconditions: day is updated to targetDay.
  void setDay(string &targetDay);
  // Print the current day
  // Preconditions: None.
  // Postconditions: The current day is printed to the console.
  void printDay();
  static const string &getDayNames(int dayIndex) { return dayNames[dayIndex]; }
};
#endif