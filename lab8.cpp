/**************************
* Автор: Черненко Никита. *
* Дата: 20.11.2025        *
* Вариант --              *
***************************/

#include <iostream>
#include <string>

using namespace std;

int main() {
  int year;
  int month;
  int day;
  int weekDay;
  int daysInMonth;
  
  cout << "Enter year: ";
  cin >> year;
  
  
  weekDay = 5;
  
 
  for (int y = 2000; y < year; ++y) {
    /
    if (y % 4 == 0 && (y % 100 != 0 || y % 400 == 0)) {
      weekDay += 2; // високосный год
    } else {
      weekDay += 1; // обычный год
    }
  }
  weekDay = weekDay % 7; 
  
  for (month = 1; month <= 12; ++month) {
    
    if (month == 2) {
      if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) {
        daysInMonth = 29;
      } else {
        daysInMonth = 28;
      }
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
      daysInMonth = 30;
    } else {
      daysInMonth = 31;
    }
    
    string monthName;
    if (month == 1) monthName = "January";
    else if (month == 2) monthName = "February";
    else if (month == 3) monthName = "March";
    else if (month == 4) monthName = "April";
    else if (month == 5) monthName = "May";
    else if (month == 6) monthName = "June";
    else if (month == 7) monthName = "July";
    else if (month == 8) monthName = "August";
    else if (month == 9) monthName = "September";
    else if (month == 10) monthName = "October";
    else if (month == 11) monthName = "November";
    else monthName = "December";
    
    cout << "\n" << monthName << " " << year << "\n";
    cout << "Mo Tu We Th Fr Sa Su\n";
    
    for (int i = 0; i < weekDay; ++i) {
      cout << "   ";
    }
    
    for (day = 1; day <= daysInMonth; ++day) {
      if (day < 10) cout << " ";
      cout << day << " ";
      
      ++weekDay;
      if (weekDay == 7) {
        cout << "\n";
        weekDay = 0;
      }
    }
    
    if (weekDay != 0) cout << "\n";
  }
  
  return 0;

}
