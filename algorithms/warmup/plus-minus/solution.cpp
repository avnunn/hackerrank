#include <iostream>

using namespace std;

int main(){
  //Errors
  const int COULD_NOT_PARSE_N = 1;
  const int N_NOT_IN_BOUNDS = 2;
  const int FAILED_TO_PARSE = 3;
  const int NUMBER_PASS_BOUNDARY = 4;
  //Constants
  const int N_MIN = 1;
  const int N_MAX = 100;
  const int I_MIN = -100;
  const int I_MAX = 100;

  //Variables
  int N = 0;  //Holds the length of array A // 1≤N≤100
  int positives = 0;
  int negatives = 0;
  int zeroes = 0;

  //get how large the array is
  cin >> N;
  double dN = (double)N;

  //Could not parse N as number
  if (cin.fail()){
    return COULD_NOT_PARSE_N;
  }

  //N not in bounds
  if (!(N_MIN <= N && N <= N_MAX)){
    return N_NOT_IN_BOUNDS;
  }

  for (int i=0; i<N; ++i){
    int buffer;
    cin >> buffer;
    //could not extract number
    if (cin.fail()){
      return FAILED_TO_PARSE;
    }
    //−100≤A\[i\]≤100
    else if (buffer < I_MIN || buffer > I_MAX){
      return NUMBER_PASS_BOUNDARY;
    }
    else if (buffer > 0){
      ++positives;
    }
    else if (buffer < 0){
      ++negatives;
    } else{
      ++zeroes;
    }
  }

  cout << positives/dN << endl;
  cout << negatives/dN << endl; 
  cout << zeroes/dN << endl; 
  return 0;
}