class dateType {
private:
  int day;
  int month;
  int year;

public:
  // Preconditions: None.
  // Postconditions: Initializes the dateType object with the provided day,
  // month, and year values.
  dateType(int month = 1, int day = 1, int year = 1900);
  // Preconditions: None.
  // Postconditions: Returns the current day of the dateType object.
  int getDay();
  // Preconditions: None.
  // Postconditions: Returns the current month of the dateType object.
  int getMonth();
  // Preconditions: None.
  // Postconditions: Returns the current year of the dateType object.
  int getYear();
  // Preconditions: None.
  // Postconditions: Returns the number of days passed in the current year up to
  // the date represented by the dateType object.
  int daysPassed();
  // Preconditions: None.
  // Postconditions: Returns the number of days remaining in the current year
  // starting from the date represented by the dateType object.
  int daysRemaining();
  // Preconditions: month and year are valid values (e.g., month is in the range
  // 1-12, and year is a positive value). Postconditions: Returns the number of
  // days in the specified month and year.
  int daysInMonth(int month, int year);
  // Preconditions: None.
  // Postconditions: Returns true if the year of the dateType object is a leap
  // year; otherwise, returns false.
  bool isLeapYear();
  // Preconditions: day, month, and year are valid values (e.g., month is in the
  // range 1-12, and year is a positive value). Postconditions: Sets the date of
  // the dateType object to the specified day, month, and year.
  void setDate(int month, int day, int year);
  // Preconditions: None.
  // Postconditions: Prints the current date represented by the dateType object.
  void printDate();
  // Preconditions: days is a positive or negative integer.
  // Postconditions: Updates the dateType object to represent the date that is
  // days days in the future or in the past.
  void setFutureDate(int days);
};