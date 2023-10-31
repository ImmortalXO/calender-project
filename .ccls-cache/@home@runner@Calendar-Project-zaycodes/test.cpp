#include <iostream> 
#include <cassert>
#include <iomanip> 
#include "dateType.h"
#include "extDateType.h"
#include "dayType.h"
#include "calendarType.h"
using namespace std;
void calendarType::printCalendar() {
  cout << setw(21) << " ";
  firstDate.printLongMonthYear();
  cout << endl;     
  printTitle();     
  printDates();     
  cout << endl; 
}  
calendarType::calendarType() { 
  // set the date 1,1,0001 was a monday     
  firstDate.setDate(1,1,0001);
  firstDay.setDay("Monday");
} 
calendarType::calendarType(int m, int y) {
  assert(1 <= m && m <= 12 && y >= 0001);
  firstDate.setDate(m,1,y);
  firstDay = firstDayOfMonth();
}   
dayType calendarType::firstDayOfMonth() {
  int y;
  int year = firstDate.get_Year();
  extDateType d;
  dayType QDay("Monday"); 
  for (y = 0001; y < year; y++)     { 
    d.setYear(y);
    if (d.Leap_Year()) 
      QDay.addDay(366);        
    else             
      QDay.addDay(365);
  }     
  QDay.addDay(firstDate.numberOfDaysLeft()- 1); 
  return QDay; 
}  
void calendarType::printTitle() {     cout << setw(7) << "Sun" << setw(7) << "Mon"          << setw(7) << "Tue" << setw(7) << "Wed"          << setw(7) << "Thu" << setw(7) << "Fri"          << setw(7) << "Sat" << endl; }   void calendarType::printDates() {     int mLength = firstDate.get_num_days_month(); 	int Value = 1;     dayType d("Sunday"); 	int o; 	for (o = 0; o < 7; o++)         if (dayType::weekDays[o] == firstDay.get_day())             break; 		if (o != 0) 			// more formatting         cout << setw(7 * o) << " "; 		d = firstDay; 	 while (Value <= mLength)     {         cout << setw(7) << Value;         Value++; 	if (d.get_day() == "Saturday")             cout << endl;         d.setDay(d.nextDay());     } 	if (d.get_day() == "Sunday")         cout << endl; }