#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
  int size;
  char* buffer;
  int rotate;

  cin >> size;
  buffer = new char[size];
  cin >> buffer;
  cin >> rotate;

  for (int i=0; i<size; ++i){
    char c = buffer[i];
    bool lower = false;
    if (c >= 'A' && c <= 'Z'){
      c -= 'A';
    }
    else if (c >= 'a' && c <= 'z'){
      lower = true;
      c -= 'a';
    }
    else{
      continue;
    }

    c += rotate;
    c = c % 26;
    c += 'A';
    if (lower){
      c += 'a'-'A';
    }
    buffer[i] = c;
  }

  cout << buffer;
  /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
  return 0;
}
