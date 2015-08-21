#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct Date{
  int day;
  int month;
  int year;
};

ostream& operator<<(ostream& os, Date& d){
  cout << d.day << " " << d.month << " " << d.year;
  return os;
}

istream& operator>>(istream& is, Date& d){
  cin >> d.day >> d.month >> d.year;

  if (1 > d.day || d.day > 31 || 1 > d.month || d.month > 12 || 1 > d.year || d.year > 3000){
    is.setstate(ios_base::failbit);
  }
  
  return is;
}

int main() {
  Date actual;
  Date expected;

  int lateBy = 0;
  int lateMultiplier = 1;
  int difference;

  cin >> actual >> expected;
  
  if ((difference=actual.year-expected.year) > 0){
    lateBy = 10000;
  }
  else if (difference == 0 && (difference=actual.month-expected.month) > 0){
    lateBy = difference;
    lateMultiplier = 500;
  }
  else if (difference == 0 && (difference=actual.day-expected.day) > 0){
    lateBy = difference;
    lateMultiplier = 15;
  }

  cout << lateBy*lateMultiplier;

  /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
  return 0;
}
