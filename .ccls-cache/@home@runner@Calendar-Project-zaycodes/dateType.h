class dateType {
private:
  int day;
  int month;
  int year;

public:
  dateType(int day = 1, int month = 1, int year = 1900);
  int getDay();
  int getMonth();
  int getYear();
  int daysPassed();
  int daysRemaining();
  int daysInMonth(int month, int year);
  bool isLeapYear();
  void setDate(int day, int month, int year);
  void printDate();
  void setFutureDate(int days);
};