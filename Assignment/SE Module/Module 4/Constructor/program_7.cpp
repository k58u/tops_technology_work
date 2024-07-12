// Write a C++ program to implement a class called Date that has private 
// member variables for day, month, and year. Include member functions to 
// set and get these variables, as well as to validate if the date is valid. 


#include <iostream>
using namespace std;
class Date {
private:
  int day_;
  int month_;
  int year_;
  bool isValidDate() {
    if (month_ < 1 || month_ > 12) {
      return false;
    }
  }
  static bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
  }
public:
  Date() : day_(1), month_(1), year_(2000) {}
  Date(int day, int month, int year) : day_(day), month_(month), year_(year) {
    if (!isValidDate()) {
      day_ = 1;
      month_ = 1;
      year_ = 2000;
      cout << "Invalid date entered. Setting to default (1/1/2000)." << endl;
    }
  }
  int getDay()  { return day_; }
  int getMonth()  { return month_; }
  int getYear() { return year_; }
  void setDay(int day) {
    if (day >= 1 && day <= 31) {
      day_ = day;
    } else {
      cout<< "Invalid day. Day not changed." << endl;
    }
  }
void setMonth(int month) {
    if (month >= 1 && month <= 12) {
      month_ = month;
    } else {
      cout << "Invalid month. Month not changed." << endl;
    }
  }
  void setYear(int year) {
    year_ = year;
  }
};
int main() {
  Date today(21, 5, 2024); 
  cout << "Today's date: " << today.getDay() << "/" << today.getMonth() << "/"<< today.getYear()<< endl;
  Date invalidDate(30, 2, 2021); 
  cout << "Invalid date: " <<invalidDate.getDay() << "/" <<invalidDate.getMonth() << "/" << invalidDate.getYear()<< endl;
}
