#include <iostream>
#include <stdlib.h>     /* atoi */
#include <string.h>
#include <iomanip>

using namespace std;

struct Time{
  int hour;
  int minute;
  int second;
};


ostream& operator<<(ostream& os, Time& time){
  os << setw(2) << setfill('0') << time.hour;
  os << ":";
  os << setw(2) << setfill('0') << time.minute;
  os << ":";
  os << setw(2) << setfill('0') << time.second;
  return os;
}

// custom extractor for objects of type Phone
istream& operator>>(istream& is, Time& time){
  const int SIZE = 2;
  char buffer[SIZE];


  is.get(buffer, SIZE+1);
  time.hour = atoi(buffer);
  if (cin.get() != ':' || !cin.good() || time.hour < 1 || time.hour > 12){
    is.setstate(ios_base::failbit);
    return is;
  }

  is.get(buffer, SIZE+1);
  time.minute = atoi(buffer);
  //cout << buffer << "\n";
  if (cin.get() != ':' || !cin.good() || time.minute < 0 || time.minute > 59){
    is.setstate(ios_base::failbit);
    return is;
  }

  is.get(buffer, SIZE+1);
  time.second = atoi(buffer);
  if (time.second < 0 || time.second > 59){
    is.setstate(ios_base::failbit);
    return is;
  }

  if (cin.eof() || isspace(cin.peek())){
    return is;
  }

  is.get(buffer, SIZE+1);
  if (strcmp(buffer, "AM") == 0){
    if (time.hour == 12) time.hour = 0;
    return is;
  } else if (strcmp(buffer, "PM") == 0){
    if (time.hour != 12) time.hour += 12;
    return is;
  }

  is.setstate(ios_base::failbit);
  return is;
}

int main(){
  Time t;
  cin >> t;
  cout << t;

  return 0;
}